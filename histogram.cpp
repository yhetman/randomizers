#include "header.h"

using	namespace std;	

void	histogram_01(double method())
{
	int	arr[10] = {0};
	int	n;
	double	y;

	n = 1000;
	for (int i = 0; i < n; i++)
	{
		y = method();
		for (int k = 0; k < 10; k++)
		{
			if (y >= ((double)k / 10) && y < ((double)(k + 1) / 10))
			{
				arr[k]++;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		cout << "[" << 0 + 0.1*k << "  " << 0.1 + 0.1*k << "]" << '\t' << (double)arr[k]/1000<<endl;
	}
}

void	histogram_02(double method())
{
	int	arr[10] = {0};
	int	n;
	double	y;

	n = 1000;
	for (int i = 0; i < n; i++)
	{
		y = method();
		for (int k = 0; k < 10; k++)
		{
			if (y>=(-3+0.6*k) && y < (-2.4+0.6*k))
			{
				arr[k]++;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		cout << "[" << -3 + 0.6*k << "  " << -2.4 + 0.6*k << "]" << '\t' << (double)arr[k] / 1000 << endl;
	}
}

void	histogram_03(double method())
{
	int	arr[10] = {0};
	int	n;
	double	y;

	n = 1000;
	for (int i = 0; i < n; i++)
	{
		y = method();
		for (int k = 0; k < 10; k++)
		{
			if (y >= (0 + 10*k) && y < (10 + 10*k))
			{
				arr[k]++;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		cout << "[" << 0 + 10 * k << "  " << 10 + 10 * k << "]" << '\t' << (double)arr[k] / 1000 << endl;
	}
}

