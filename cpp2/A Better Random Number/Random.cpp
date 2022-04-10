// random class definitions
#include <iostream>
#include <vector>
#include <ctime>
#include "Integer.h"
#include "Double.h"
#include <algorithm>
#include "Random.h"

using namespace std;
using namespace Clayton;

//Private Function Definitions
void Random::fillVect(double min, double max) 
{
	vect.clear();
	int i;
	for (i = 1; i <= size; i++) {
		double r = (((double)rand() / (double)RAND_MAX) * (max - min)) + min;
		vect.push_back(r);
	}
	shuffle();
}
void Random::shuffle() 
{
	random_shuffle(vect.begin(), vect.end());
	count = 1;
}

//Constructors
Random::Random() 
{
	srand(time(NULL));
	fillVect(0, RAND_MAX);
}
Random::Random(double min, double max)
{
	srand(time(NULL));
	fillVect(min, max);
}
Random::Random(Double min, Double max)
{
	srand(time(NULL));
	double tmp = min.toDouble();
	double tmp2 = max.toDouble();
	fillVect(tmp, tmp2);
}
Random::Random(int seed) 
{
	srand(seed);
	fillVect(0, RAND_MAX);
}

//Public Function definitions
int Random::nextInt()
{
	int tmp;
	if (count >= reshuffle) {
		shuffle();
		count = 1;
	}
	tmp = vect.at(count);
	count++;
	return tmp;
}
Integer Random::nextInteger() 
{
	Integer tmp;
	if (count >= reshuffle) {
		shuffle();
	}
	tmp = Integer(vect.at(count));
	count++;
	return tmp;
}
double Random::nextDbl()
{
	double tmp;
	if (count >= reshuffle) {
		shuffle();
	}
	tmp = vect.at(count);
	count++;
	return tmp;
}
Double Random::nextDouble()
{
	Double tmp;
	if (count >= reshuffle) {
		shuffle();
	}
	tmp = Double(vect.at(count));
	count++;
	return tmp;
}
void Random::setRange(double min, double max)
{
	srand(time(NULL));
	fillVect(min, max);	//shuffle function is already apart of fillVect so no need to shuffle again
}
void Random::setRange(Double min, Double max)
{
	double tmp = min.toDouble();
	double tmp2 = max.toDouble();
	srand(time(NULL));
	fillVect(tmp, tmp2); //shuffle function is already apart of fillVect so no need to shuffle again
	shuffle();
}