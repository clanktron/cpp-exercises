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
	Fraction mul(const Fraction& f);
	Fraction div(const Fraction& f);
	int getNum() const;
	int getDen() const;
	void printFraction();

	//Constructors
	Fraction();
	Fraction(int num, int den);
	Fraction(std::string fraction);

	//Operator Overloads
	Fraction operator + (const Fraction& f);
	Fraction operator - (const Fraction& f);
	Fraction operator * (const Fraction& f);
	Fraction operator / (const Fraction& f);
	Fraction& operator = (const Fraction& f);

};

#endif 