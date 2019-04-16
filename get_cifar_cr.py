import os
cwd = os.getcwd()

main_caffe_root='/home/vlsi_lab/Caffe/'

#import imp
#caffe_verilator=imp.load_source('caffe','/home/vlsi_lab/Caffe_modified/python/caffe')
import sys
sys.path.insert(0,cwd+'/python')
 
import caffe as caffe_verilator
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

caffe_verilator.set_mode_cpu()



#load dataset
from keras.datasets import cifar10
(x_train, y_train), (x_test, y_test) = cifar10.load_data()







#read trained cifar10 model
net=caffe_verilator.Net('/home/vlsi_lab/Caffe/examples/cifar10/cifar10_quick.prototxt',\
                        '/home/vlsi_lab/Caffe/examples/cifar10/cifar10_quick_iter_4000.caffemodel',caffe_verilator.TEST)




#access layer weight, bias

a=net.layers[1]

weight_data=np.array(a.blobs[0].data)
bias_data=np.array(a.blobs[1].data)


# acces layer output feature
intermediate_feature=net.blobs['ip2'].data



transformer = caffe_verilator.io.Transformer({'data': net.blobs['data'].data.shape})
transformer.set_transpose('data', (2,0,1))  # move image channels to outermost dimension
transformer.set_raw_scale('data', 255)      # rescale from [0, 1] to [0, 255]
transformer.set_channel_swap('data', (2,1,0))  # swap channels from RGB to BGR


image=x_test[1,:,:,:]

transformed_image = transformer.preprocess('data', image)

net.blobs['data'].data[...] = transformed_image
results=net.forward()
results_array=results['prob']
output_prob=results_array


#find CCR
test_set_size=10000
wrong_classify_count=0;
for i in range (0,test_set_size):
    print i
    img=x_test[i,:].reshape((28,28))
    im_input = img[np.newaxis, np.newaxis, :, :]
    net.blobs['data'].data[...] = im_input
    results=net.forward()
    results_array=results['loss']
    if np.argmax(results_array)!=test_label[i]:
        wrong_classify_count=wrong_classify_count+1
print ('CCR for '+cwd+' = '+str(100-float(wrong_classify_count)/float(test_set_size)*100))
print ('caffe version is ' +str(caffe_verilator) )





