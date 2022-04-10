#ifndef FRACTION
#define FRACTION

class Fraction
{
private:
	int num;
	int den;
	std::string fraction;

public:
	void setFraction(int n, int d);
	Fraction add(const Fraction& f);
	Fraction sub(const Fraction& f);
	Fraction multiply(const Fraction& f);
	Fraction divide(const Fraction& f);
	void printFraction();

	//Constructors
	Fraction();
	Fraction(int num, int den);
	Fraction(std::string fraction);

};

#endif 