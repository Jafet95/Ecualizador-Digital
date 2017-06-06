/*
 * \author Jafet Chaves
 * \date   2017.06.06
 */

#include "filtro1k.h"
#include <cmath>

//Difference equation constants
float k0b = 1;
float k1b = 1;
float k2b = 1;
float k3b = 1;
float k4b = 1;
float k1a = 1;
float k2a = 1;
float k3a = 1;
float k4a = 1;

/*
 * Constructor
 */

filtro1k::filtro1k(){

}


/*
 * Destructor
 */

filtro1k::~filtro1k(){

}


/*
 * Init the filter operation
 */

void filtro1k::filter1k(int blockSize, int Gain_1k, float *in, float *out){
    for (int n=0; n<blockSize;++n){
        out[n]=(Gain_1k)*(in[n]*k0b+in[n-1]*k1b+in[n-2]*k2b+in[n-3]*k3b+in[n-4]*k4b
                          -out[n-1]*k1a-out[n-2]*k2a-out[n-3]*k3a-out[n-4]*k4a);
    }
}
