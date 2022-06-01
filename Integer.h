//Integer.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Integer
{
private:
	int x;

public:
	Integer();
	Integer(int);
	Integer(const Integer&);
	~Integer();

	int GetX() const { return x; }
	void SetX(int value) { x = value; }

	Integer& operator = (const Integer&);
	operator string() const;

	friend ostream& operator << (ostream&, const Integer&);
	friend istream& operator >> (istream&, Integer&);

	Integer& operator ++();
	Integer operator ++(int);

	friend Integer operator + (const Integer&, const Integer&);
	friend Integer operator - (const Integer&, const Integer&);
};

