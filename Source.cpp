//Source.cpp
#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	Integer a(1);
	cout << a++;
	cout << a;
	cout << ++a;
	cout << a << endl;

	Integer b, c;
	cin >> b >> c;
	cout << endl;
	cout << "(+) " << b + c;
	cout << "(-) " << b - c;

	return 0;
}