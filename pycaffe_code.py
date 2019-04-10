
#import imp
#imp.load_source('caffe','/home/vlsi_lab/Caffe_modified/python')
import sys
sys.path.append('/home/vlsi_lab/Caffe_modified_verilator/python')
 
import caffe
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

caffe.set_mode_cpu()


#read trained mnist model
net=caffe.Net('/home/vlsi_lab/Caffe_modified/examples/mnist/lenet_test.prototxt',\
              '/home/vlsi_lab/Caffe_modified/examples/mnist/lenet_iter_10000.caffemodel', caffe.TEST)

#read image
img = Image.open('/home/vlsi_lab/Caffe_modified/examples/images/cat_gray.jpg')
img=img.resize((28,28))
im=np.array(img)
#im = np.array(plt.imread('/home/vlsi_lab/Caffe/examples/images/cat_gray.jpg'))
im_input = im[np.newaxis, np.newaxis, :, :]

net.blobs['data'].data[...] = im_input


results=net.forward()

results_array=results['loss']