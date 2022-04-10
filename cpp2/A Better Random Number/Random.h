// declaration of random class
#pragma once
#include <iostream>
#include "Double.h"
#include "Integer.h"
#include <vector>

using namespace Clayton;
using std::vector;

class Random {
private:
	vector <double> vect;
	int count;
	void fillVect(double min, double max);
	void shuffle();
	const int size = 250;
	const int reshuffle = 225;
public:
	//Constructors
	Random();
	Random(double min, double max);
	Random(Double min, Double max);
	Random(int seed);

	//Functions
	int nextInt();
	Integer nextInteger();
	double nextDbl();
	Double nextDouble();
	void setRange(double min, double max);
	void setRange(Double min, Double max);
};