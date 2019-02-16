#include "pch.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	double a, b, step, x, y, s_n, s_e, e, s1_e, alt;
	int n, factor_n;
	cout << fixed;
	a = 0.1; //Начало диапазона изменения аргумента x
	b = 1; //Конец диапазона изменения аргумента x
	step = (b - a) / 10; //Шаг изменения аргумента x
	e = 0.0001;
				
	for (x = a; x <= b; x+=step)
	{
		y = exp(x*cos(M_PI/4))*cos(x*sin(M_PI/4)); //Находим точное значение функции в точке x
		factor_n = 0;
		s_n = 1;

		for (n = 1; n <= 25; n++) //Находим значение функции методом разложения в степенной ряд при заданном n
		{
			factor_n += n; //Находим факториал n
			s_n += ((cos(n*(M_PI / 4)))/factor_n)*pow(x,n);
		}
		
		n = 1;
		s_e = 1;
		s1_e = 0;
		factor_n = 0;

		do // Находим значение функции методом разложения в степенной ряд с заданной точностью
		{
			factor_n += n;
			s1_e = ((cos(n*(M_PI / 4))) / factor_n)*pow(x, n); 
			s_e += s1_e;
			n++;
		} while (s1_e >= e);
			   
		cout << "x=" << x << ";\ty=" << y << ";\ts_n=" << s_n << ";\ts_e=" << s_e <<'\n';
	};
}