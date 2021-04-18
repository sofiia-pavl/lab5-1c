#pragma once
#pragma pack(1)
#include <iostream>
#include <sstream>
#include <string>
#include"MyException.h"

using namespace std;

class Fraction
{
private:
	int one;
    int two;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }

	void setOne(int value) { one = value; }
	void setTwo( int value) { two = value; }

	Fraction();
	Fraction(int, int)throw (invalid_argument, bad_exception, MyException, const char*);
	Fraction(const Fraction&);

	operator string() const;
};