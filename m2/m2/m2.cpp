#include "pch.h"
#include <iostream>
#include "math.h"
using namespace std;

int main()
{	
	int n;
	double a, e, result;
	e = pow(10, -4);
	a = 0;
	result = 0;
	n = 1;
	cout << fixed;
 	do
	{
		a = (1 / pow(2, n)) + (1 / pow(3, n));
		result += a;
		cout << n << ' ' << a << ' ' << e << ' ' << result <<'\n';
		n++;
	} while (a >= e);
}