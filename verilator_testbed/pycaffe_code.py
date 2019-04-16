caffe_root='/home/vlsi_lab/Caffe_modified_verilator/'

#import imp
#caffe_verilator=imp.load_source('caffe','/home/vlsi_lab/Caffe_modified/python/caffe')
import sys
#sys.path.append(caffe_root+'/python')
sys.path.insert(1, caffe_root+'/python') 
import caffe as caffe_verilator
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

caffe_verilator.set_mode_cpu()





import cPickle, gzip, numpy
import matplotlib.pyplot as plt
# Load the dataset
f = gzip.open('/home/vlsi_lab/Caffe/mnist.pkl.gz', 'rb')
train_set, valid_set, test_set = cPickle.load(f)
f.close()

train_data=train_set[0]
train_label=train_set[1]
test_data=test_set[0]
test_label=test_set[1]
valid_data=valid_set[0]
valid_label=valid_set[1]




#read trained mnist model
net=caffe_verilator.Net(caffe_root+'examples/mnist/lenet_test.prototxt',\
              caffe_root+'examples/mnist/lenet_iter_10000.caffemodel', caffe_verilator.TEST)

#read image
#img = Image.open('/home/vlsi_lab/Caffe_modified/examples/images/cat_gray.jpg')
#img=img.resize((28,28))
#im=np.array(img)
#read image from mnist
for i in range(1,20):
    print (i)
    img=train_data[i,:].reshape((28,28))
    plt.imshow(img)

#im = np.array(plt.imread('/home/vlsi_lab/Caffe/examples/images/cat_gray.jpg'))
    im_input = img[np.newaxis, np.newaxis, :, :]

    net.blobs['data'].data[...] = im_input


    results=net.forward()

    results_array=results['loss']
    print (results)
    


#access layer weight, bias

a=net.layers[1]

weight_data=np.array(a.blobs[0].data)
bias_data=np.array(a.blobs[1].data)


# acces layer output feature
intermediate_feature=net.blobs['ip2'].data


#mnist data lmdb
import lmdb
data_path= "./examples/mnist/mnist_train_lmdb"
lmdb_env=lmdb.open(data_path,readonly=True)
lmdb_txn = lmdb_env.begin()
lmdb_cursor = lmdb_txn.cursor()
datum = caffe_verilator.proto.caffe_pb2.Datum()

for key, value in lmdb_cursor:
    datum.ParseFromString(value)
    label = datum.label
    data = caffe_verilator.io.datum_to_array(datum)
    for l, d in zip(label, data):
            print l, d



