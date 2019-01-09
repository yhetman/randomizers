#include "header.h"

using	namespace std;	


double	method_01()
{
	static	unsigned int	xn=1,  a = 1541, c = 2957, M = 998737;
	double	y;

	xn = (a * xn + c) % M;
	y = (double)xn / M;
	return y;
}
 
double	method_02()
{
	static	unsigned int	xn = 1, a = 33, d = 32, c = 61, M = 998737;
	double	y;

	xn = (d * xn*xn + a * xn + c) % M;
	y = (double)xn / M;
	return y;
}

double	method_03()
{
	static	unsigned int	xn=1, x0 = 1, x1 = 10, M = 998737;
	double	y;

	xn = (x0 + x1) % M;
	y = (double)xn / M;
	x0 = x1;
	x1 = xn;
	return y;
}

double	method_04()
{
	static	int	 a = 17, c = 2, xn = 1, M = 1003;
	double	y;
	int	i;

	for (i = 0; i < M; i++)
		if (xn * i % M == 1)
			break;
	xn = (a * i + c) % M;
	y = (double)xn / M;
	return y;
}

double	method_05()
{
	static	unsigned int	xn = 0, M = 998737;
	double	y;

	xn =int( (method_01() * M - method_02() * M)) % M;
	y =(double) xn / M;
	return y;
}

double	method_06()
{
	double	sum, xn;

	sum = 0;
	for (int i = 0; i < 12; i++)
	{
		sum += method_01();
	}
	xn = sum - 6;
	return xn;
}

double	method_07()
{
	double xn, yn, s, y;

	do 
	{ 
		xn = 2 * method_01() - 1;
		yn = 2 * method_02() - 1;
		s = xn * xn + yn * yn;
	} while (s >= 1);
		y = (xn * sqrt((-2) * log(s) / s));
	return y;
}

double	method_08()
{
	double	x, y, xn;
	bool	is_valid;

	xn = 0;
	is_valid = false;
	while (!is_valid)
	{
		x = method_01();
		y = method_01();
		xn = (sqrt(8 / (exp(1))))*((y - 0.5) / x);
		if ((xn * xn) <= (5 - (4 * pow((exp(1)), (1 / 4))*x)))
			is_valid = true;
		else if ((xn * xn) < ((4 * pow((exp(1)), ((-1) * 1.35)) / x) + 1.4))
			if ((xn * xn) <= ((-4) * log(x)))
				is_valid = true;
	}
	return xn;
}

double	method_09() 
{
	double	xn;

	xn = 0;
	xn = -20 * log(method_01());
		return xn;
}

double	method_10()
{
	static	unsigned int	a = 1;
	double	xn, y;

	while (true)
	{
		xn = tan(3.14 * method_01());
		y = sqrt(2 * a - 1) * xn + a - 1;
		if (y <= 0) 
			continue;
		if (method_02() > ((1 + xn * xn) * exp((a - 1) * log(y / (a - 1)) - sqrt(2 * a - 1) * xn))) 
			continue;
		else 
			break;
	}
	return y;
}
