#ifndef PARTICLE_H
#define PARTICLE_H

#include<stdio.h>
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include <iomanip>
#include <fstream>
#include "type.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::setprecision;

using std::vector;

const int X = 1;
const int Y = 2;
const int Z = 3;


struct Cordinates{

	real X_value;
	real Y_value;
	real Z_value;

	real operator ()(int i);

};


class Particle{


public:
   Particle();
	vector<Cordinates> x;
	vector<Cordinates> v;
	vector<Cordinates> f;

	void position(real a,real b,real c);
	void velocity(real a,real b,real c);
	void force(real a,real b,real c);

	real r(int i,int j);

    void readDataFile(std::string filename);

 };

#endif



