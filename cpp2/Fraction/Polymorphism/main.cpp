#include <iostream>
using namespace std;

class Animal
{
private:
	int legs;
public:
	void setlegs(int legs);
	int getlegs();
	Animal() : legs(4) {}
	void talk();
	virtual void speak() = 0;
};

void Animal::setlegs(int legs)
{
	this->legs = legs;
}
int Animal::getlegs()
{
	return this->legs;
}
void Animal::talk()
{
	speak();
}

class Cat : public Animal
{
public:
	void speak();
};
void Cat::speak()
{
	cout << "meow" << endl;
}

class Dog : public Animal
{
public:
	void speak();
};
void Dog::speak()
{
	cout << "woof" << endl;
}

class Cow : public Animal
{
public:
	void speak();
};
void Cow::speak()
{
	cout << "moo" << endl;
}

int main() {

	Cat a;
	Dog b;
	Cow c;
	Animal* an[3];
	an[0] = &a;
	an[1] = &b;
	an[2] = &c;

	for (int i = 0; i < 3; i++)
	{
		an[i]->talk();
	}

	return 0;
}