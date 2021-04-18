#include "Fraction.h"
#include "MyException.h"

Fraction::Fraction()
{
	one = 0;
	two = 0;
}

Fraction::Fraction(int one = 1, int two =  1) throw (invalid_argument, bad_exception, MyException, const char*)
{
	this->one = one;
	this->two = two;
}

Fraction::Fraction(const Fraction& r)
{
	one = r.one;
	two = r.two;
}

Fraction::operator string()const
{
	stringstream ss;
	ss << "First part of number = " << one << endl;
	ss << "Second part of number = " << two << endl;

	return ss.str();
}