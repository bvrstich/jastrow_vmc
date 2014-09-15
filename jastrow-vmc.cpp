#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <complex>
#include <vector>

using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::complex;
using std::vector;

#include "include.h"

int main(int argc,char *argv[]){

   cout.precision(15);

   int L = atoi(argv[1]);

   double f = 0.9;

   //initialize the dimensions of the problem, set the trial
   global::init(L,L,f);

   Walker walker; 

   Distribution dist;
   dist.construct(walker);

   cout << dist << endl;

   cout << endl;
   cout << dist.energy() << endl;
   
}
