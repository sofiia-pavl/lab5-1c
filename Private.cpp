#include "Private.h"

ostream& operator << (ostream& out, const Private& a)
{
	out << string(a);
	return out;
}

istream& operator >> (istream& in, Private& a)
{
	int s;
    int b;
	cout << "First part of number= "; in >> s;
	cout << "Second part of number= "; in >> b;
	if (a.getOne() == 0 && a.getTwo() < 0)
		throw invalid_argument("Invalid_argument");
	else if (a.getOne() < 0 && a.getTwo() < 0)
		throw bad_exception();
	else if (a.getOne() > 0 && a.getTwo() < 0)
		throw MyException("MyException");
	else if (a.getOne() == 0 && a.getTwo() == 0)
		throw "Exception";
	cout << endl;
	a.setOne(s);
	a.setTwo(b);
	return in;
}

Private::operator string() const
{
	stringstream ss;
	ss << "First part of number = " << this->getOne() << endl;
	ss << "Second part of number = " << this->getTwo() << endl;

	return ss.str();
}

Private operator - (const Private& a, const Private& b)
{
	Fraction u(a.getOne() - b.getOne(), a.getTwo() - b.getTwo());
	return u;
}

Private& Private:: operator ++()
{
	this->setOne(this->getOne() + 1);
	return *this;
}
Private& Private:: operator --()
{
	this->setOne(this->getOne() - 1);
	return *this;
}
Private Private:: operator ++(int)
{
	Private a(*this);
	this->setOne(this->getOne() + 1);
	return a;
}
Private Private:: operator --(int)
{
	Private a(*this);
	this->setOne(this->getOne() - 1);
	return a;
}