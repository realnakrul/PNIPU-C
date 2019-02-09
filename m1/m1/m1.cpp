#include "pch.h"
#include "math.h"
#include <iostream>
using namespace std;

int main()
{
	float fa, fb, fc, fd, fe, fresult;
	double da, db, dc, dd, de, dresult;
	int m, n, mi, ni;
	fa = 1000;
	da = 1000;
	
	fb = 0.0001;
	db = 0.0001;

	fc = pow(fa - fb,3);
	dc = pow(da - db, 3);

	fd = (pow(fa, 3) - 3 * fa*pow(fb, 2));
	dd = (pow(da, 3) - 3 * da*pow(fb, 2));
	fe = (pow(fb, 3) - 3 * pow(fa, 2) * fb);
	de = (pow(db, 3) - 3 * pow(da, 2) * db);

	fresult = (fc - fd) / fe;
	dresult = (dc - dd) / de;
	cout << fixed;
	cout << '(' << fc << '-' << fd << ')' << '/' << fe << '=' << fresult << '\n' << '\n';
	cout << '(' << dc << '-' << dd << ')' << '/' << de << '=' << dresult << '\n' << '\n';
	cout << "m: ";
	cin >> mi;
	cout << "n: ";
	cin >> ni;
	m = mi;
	n = ni;
	cout << "m-++n=" << m - ++n << '\n';
	m = mi;
	n = ni;
	if (++m == --n)
		cout << "++m == --n" << "\n";
	else if (++m > --n)
		cout << "++m > --n" << "\n";
	else if (++m < --n)
		std::cout << "++m < --n" << "\n";
	m = mi;
	n = ni;
	if (--n == ++m)
		cout << "--n == ++m" << "\n";
	else if (--n > ++m)
		cout << "--n > ++m" << "\n";
	else if (--n < ++m)
		std::cout << "--n < ++m" << "\n";

}