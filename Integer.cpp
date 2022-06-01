//Integer.cpp
#include "Integer.h"

Integer::Integer()
{
	x = 0;
}

Integer::Integer(int y)
{
	x = y;
}

Integer::Integer(const Integer& i)
{
	x = i.x;
}

Integer::~Integer()
{}

Integer& Integer::operator = (const Integer& i)
{
	x = i.x;
	return *this;
}

Integer::operator string () const
{
	stringstream ss;
	ss << "x = " << x << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Integer& i)
{
	out << string(i);
	return out;
}

istream& operator >> (istream& in, Integer& i)
{
	cout << "x = "; in >> i.x;
	return in;
}

Integer& Integer::operator ++()
{
	x++;
	return *this;
}

Integer Integer::operator ++(int)
{
	Integer t(*this);
	x++;
	return t;
}

Integer operator + (const Integer& a, const Integer& b)
{
	Integer t;
	t.x = a.x + b.x;
	return t;
}

Integer operator - (const Integer& a, const Integer& b)
{
	Integer t(0);
	t.x = a.x - b.x;
	return t;
}