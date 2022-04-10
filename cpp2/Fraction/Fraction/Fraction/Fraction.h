#ifndef FRACTION
#define FRACTION

class Fraction
{
private:
	int num;
	int den;
public:
	void setFraction(int n, int d);
	Fraction add(const Fraction &f);
	Fraction sub(const Fraction &f);
	void printFraction();
	Fraction multiply(const Fraction &f);
	Fraction divide(const Fraction &f);

};

#endif 