import os
cwd = os.getcwd()

main_caffe_root='/home/vlsi_lab/Caffe/'
aux_caffe_root='/home/vlsi_lab/Caffe_shafique/'

#import imp
#caffe_verilator=imp.load_source('caffe','/home/vlsi_lab/Caffe_modified/python/caffe')
import sys
sys.path.insert(0,aux_caffe_root+'/python')
 
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
net=caffe_verilator.Net(main_caffe_root+'examples/mnist/lenet_test.prototxt',\
              main_caffe_root+'examples/mnist/lenet_iter_10000.caffemodel', caffe_verilator.TEST)

#read image
#img = Image.open('/home/vlsi_lab/Caffe_modified/examples/images/cat_gray.jpg')
#img=img.resize((28,28))
#im=np.array(img)
#read image from mnist
#for i in range(1,2):
#    print (i)
#    img=train_data[i,:].reshape((28,28))
#    plt.imshow(img)
#
##im = np.array(plt.imread('/home/vlsi_lab/Caffe/examples/images/cat_gray.jpg'))
#    im_input = img[np.newaxis, np.newaxis, :, :]
#
#    net.blobs['data'].data[...] = im_input
#
#
#    results=net.forward()
#
#    results_array=results['loss']
#    print (results)
#    


#access layer weight, bias

a=net.layers[1]

weight_data=np.array(a.blobs[0].data)
bias_data=np.array(a.blobs[1].data)


# acces layer output feature
intermediate_feature=net.blobs['ip2'].data


#find CCR
test_set_size=9999
wrong_classify_count=0;
for i in range (0,test_set_size):
    print i
    img=test_data[i,:].reshape((28,28))
    im_input = img[np.newaxis, np.newaxis, :, :]
    net.blobs['data'].data[...] = im_input
    results=net.forward()
    results_array=results['loss']
    if np.argmax(results_array)!=test_label[i]:
        wrong_classify_count=wrong_classify_count+1
print ('CCR for '+cwd+' = '+str(100-float(wrong_classify_count)/float(test_set_size)*100))
print ('caffe version is ' +str(caffe_verilator) )





