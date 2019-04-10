// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed into the Public Domain, for any use,
// without warranty, 2017 by Wilson Snyder.
//======================================================================

// Include common routines
#include <verilated.h>
#include <cassert>
#include <cstdint>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "byteswap.h" 
#include "CNN/cnn.h"
#include "CNN/mult.h"
#include <iostream>
// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
using namespace std;
// If "verilator --trace" is used, include the tracing class
#if VM_TRACE
# include <verilated_vcd_c.h>
#endif

struct case_t
{
	tensor_t<float> data;
	tensor_t<float> out;
};

float train( vector<layer_t*>& layers, tensor_t<float>& data, tensor_t<float>& expected );
void forward( vector<layer_t*>& layers, tensor_t<float>& data );
uint8_t* read_file( const char* szFile );
vector<case_t> read_train_cases();
vector<case_t> read_test_cases();


int main(int argc, char** argv, char** env) {
    // This is a more complicated example, please also see the simpler examples/hello_world_c.
    float a, b,nn;
    //return 2;//our_mult(1, (float*)&a, (float*)&b);

    	vector<case_t> cases = read_train_cases();
    	vector<case_t> test_cases = read_test_cases();
	vector<layer_t*> layers;

	conv_layer_t * layer1 = new conv_layer_t( 1, 5, 8, cases[0].data.size );		// 28 * 28 * 1 -> 24 * 24 * 8
	relu_layer_t * layer2 = new relu_layer_t( layer1->out.size );
	pool_layer_t * layer3 = new pool_layer_t( 2, 2, layer2->out.size );				// 24 * 24 * 8 -> 12 * 12 * 8
	fc_layer_t * layer4 = new fc_layer_t(layer3->out.size, 10);					// 4 * 4 * 16 -> 10

	layers.push_back( (layer_t*)layer1 );
	layers.push_back( (layer_t*)layer2 );
	layers.push_back( (layer_t*)layer3 );
	layers.push_back( (layer_t*)layer4 );

	// MATTS MODIFICATIONS
	// Open the trained weights
	fstream weightsFile;
	weightsFile.open("weights.dat", ios_base::in);

	if (!weightsFile) {
	  cout << "Unable to open file";
	  exit(1);
	}
    
	float testf;
	for (int filter = 0; filter < layer1->filters.size(); filter++ ) {
	  for (int z = 0; z < layer1->filters[filter].size.z; z ++) {
	    for (int y = 0; y < layer1->filters[filter].size.y; y ++) {
	      for (int x = 0; x < layer1->filters[filter].size.x; x ++) {
		//weightsFile >> testf;
		weightsFile >> (layer1->filters[filter].get(x, y, z));
	      }
	    }
	  }
	}

	  for (int z = 0; z < layer4->weights.size.z; z ++) {
	    for (int y = 0; y < layer4->weights.size.y; y ++) {
	      for (int x = 0; x < layer4->weights.size.x; x ++) {
		//weightsFile >> testf;
		weightsFile >> (layer4->weights.get(x, y, z));
	      }
	    }
	  }

	weightsFile.close();

	printf("weights: \n");
	for (int filter = 0; filter < layer1->filters.size(); filter++ ) {
	  print_tensor(layer1->filters[filter]);
	  //weightsFile << layer1->filters[filter];
	  //write(weightsFile, layer1->filters[filter], sizeof(layer1->filters[filter]));
	}
	print_tensor(layer4->weights);
    printf("End of weights\n");

	float amse = 0;
    int ic = 0;
    const int NUM_CASES_TESTING = 9995;
    cout << "Testing " << NUM_CASES_TESTING << " cases" << endl;
/*
    for (int i = 0; i < NUM_CASES_TESTING; i++) {
        case_t& t = cases[i];
	float xerr = train( layers, t.data, t.out );
        amse += xerr;

        ic++;
	cout << ic << "/" << NUM_CASES_TESTING << " cases done" << endl;
    }
    cout << "err=" << amse/ic << endl;
    cout << "ic (total number of samples tested)=" << ic << endl;
*/
    int counter = 0;
    int index=0;
    float maximum;
    int error_count=0;
	while ( counter < NUM_CASES_TESTING )
	{
                counter ++;
                //case_t* image_in=cases[counter];
		forward( layers, test_cases[counter].data );	
		tensor_t<float>& out = layers.back()->out;
                maximum=-10000;
		//find index of maximum
                for (int i=0;i<10;i++)
		{
			if (out(i,0,0)>=maximum)
			{
				index=i;
				maximum=out(i,0,0);
			}
		}
                printf( "predicted inxdex for test image [%i] is %i\n", counter,index );
                printf( "correct inxdex for test image [%i] is %i\n", counter, test_cases[counter].out(0,0,0));
		if (index!=test_cases[counter].out(0,0,0))
		{
			error_count++;
			printf("error found\n");
		}
/*		uint8_t * data = read_file( "test.ppm" );

		if ( data )
		{
			uint8_t * usable = data;

			while ( *(uint32_t*)usable != 0x0A353532 )
				usable++;

#pragma pack(push, 1)
			struct RGB
			{
				uint8_t r, g, b;
			};
#pragma pack(pop)

			RGB * rgb = (RGB*)usable;

			tensor_t<float> image(28, 28, 1);
			for ( int i = 0; i < 28; i++ )
			{
				for ( int j = 0; j < 28; j++ )
				{
					RGB rgb_ij = rgb[i * 28 + j];
					image( j, i, 0 ) = (((float)rgb_ij.r
							     + rgb_ij.g
							     + rgb_ij.b)
							    / (3.0f*255.f));
				}
			}

			forward( layers, image );
			tensor_t<float>& out = layers.back()->out;
			for ( int i = 0; i < 10; i++ )
			{
				printf( "[%i] %f\n", i, out( i, 0, 0 )*100.0f );
			}

			delete[] data;
		}

		struct timespec wait;
		wait.tv_sec = 1;
		wait.tv_nsec = 0;
		nanosleep(&wait, nullptr);
*/
	}
    printf( "found %i errors in %i images resulting in CCR of %f percent\n",error_count,(int)NUM_CASES_TESTING,100-100*float(float(error_count)/NUM_CASES_TESTING));
    exit(0);
}

/*
short calculate_mult(short a , short b)
{	Vtop* top2 = new Vtop; // Or use a const unique_ptr, or the VL_UNIQUE_PTR wrapper

    // Set some inputs
    top2->a = a;
    top2->b = b;

    // Evaluate model
    top2->eval();

    short test;
	
    // Final model cleanup
    top2->final();
    // Destroy model
    short r= top2->r;    
    delete top2;
    return r;
    
}
*/

float train( vector<layer_t*>& layers, tensor_t<float>& data, tensor_t<float>& expected )
{
	for ( int i = 0; i < layers.size(); i++ )
	{
		if ( i == 0 )
			activate( layers[i], data );
		else
			activate( layers[i], layers[i - 1]->out );
	}

	tensor_t<float> grads = layers.back()->out - expected;

	for ( int i = layers.size() - 1; i >= 0; i-- )
	{
		if ( i == layers.size() - 1 )
			calc_grads( layers[i], grads );
		else
			calc_grads( layers[i], layers[i + 1]->grads_in );
	}

	for ( int i = 0; i < layers.size(); i++ )
	{
		//fix_weights( layers[i] );
	}

	float err = 0;
	for ( int i = 0; i < grads.size.x * grads.size.y * grads.size.z; i++ )
	{
		float f = expected.data[i];
		if ( f > 0.5 )
			err += abs(grads.data[i]);
	}
	return err * 100;
}


void forward( vector<layer_t*>& layers, tensor_t<float>& data )
{
	for ( int i = 0; i < layers.size(); i++ )
	{
		if ( i == 0 )
			activate( layers[i], data );
		else
			activate( layers[i], layers[i - 1]->out );
	}
}



uint8_t* read_file( const char* szFile )
{
	ifstream file( szFile, ios::binary | ios::ate );
	streamsize size = file.tellg();
	file.seekg( 0, ios::beg );

	if ( size == -1 )
		return nullptr;

	uint8_t* buffer = new uint8_t[size];
	file.read( (char*)buffer, size );
	return buffer;
}

vector<case_t> read_train_cases()
{
	vector<case_t> cases;

	uint8_t* train_image = read_file( "train-images.idx3-ubyte" );
	uint8_t* train_labels = read_file( "train-labels.idx1-ubyte" );

	uint32_t case_count = byteswap_uint32( *(uint32_t*)(train_image + 4) );

	for ( int i = 0; i < case_count; i++ )
	{

		case_t c {tensor_t<float>( 28, 28, 1 ), tensor_t<float>( 10, 1, 1 )};

		uint8_t* img = train_image + 16 + i * (28 * 28);
		uint8_t* label = train_labels + 8 + i;

		for ( int x = 0; x < 28; x++ )
			for ( int y = 0; y < 28; y++ )
				c.data( x, y, 0 ) = img[x + y * 28] / 255.f;

		for ( int b = 0; b < 10; b++ )
			c.out( b, 0, 0 ) = *label == b ? 1.0f : 0.0f;

		cases.push_back( c );
	}
	delete[] train_image;
	delete[] train_labels;

	return cases;
}

vector<case_t> read_test_cases()
{
	vector<case_t> cases;

	uint8_t* test_image = read_file( "t10k-images.idx3-ubyte" );
	uint8_t* test_labels = read_file( "t10k-labels.idx1-ubyte" );

	uint32_t case_count = byteswap_uint32( *(uint32_t*)(test_image + 4) );

	for ( int i = 0; i < case_count; i++ )
	{

		case_t c {tensor_t<float>( 28, 28, 1 ), tensor_t<float>( 1, 1, 1 )};

		uint8_t* img = test_image + 16 + i * (28 * 28);
		uint8_t* label = test_labels + 8 + i;

		for ( int x = 0; x < 28; x++ )
			for ( int y = 0; y < 28; y++ )
				c.data( x, y, 0 ) = img[x + y * 28] / 255.f;

		c.out( 0, 0, 0 ) = *label ;

		cases.push_back( c );
	}
	delete[] test_image;
	delete[] test_labels;

	return cases;
}


