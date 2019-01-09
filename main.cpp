#include "header.h"

using	namespace std;

int	main()
{
	try 
	{
		Menu();
	}
	catch (exception)
	{
		cout << "ERROR"<<endl;
		system("pause");
		return 0;
	}
	system("pause");
	return 0;
}

void	Menu()
{
	int	k;
	
	cout << "There are 10 algorithms of Random Number Generators."		<< endl;
	cout << "To choose the Linear Congruate Method			press 1." << endl;
	cout << "To choose the Squared Congruate Method  		press 2." << endl;
	cout << "To choose the Fibonacci Sequence Method  		press 3." << endl;
	cout << "To choose the Inverse Congruent Sequence Method  	press 4." << endl;
	cout << "To choose the Combination Method  			press 5." << endl;
	cout << "To choose the Three sigma Method  			press 6." << endl;
	cout << "To choose the Polar Coordinate Method			press 7." << endl;
	cout << "To choose the Ratio Method  				press 8." << endl;
	cout << "To choose the Logarithm Method  			press 9." << endl;
	cout << "To choose the Arens method  				press 10." << endl;
;
	cin >> k;

	switch (k)
	{
	case 1:
	{
		histogram_01(method_01);
		break;
	}
	case 2:
	{
		histogram_01(method_02);
		break;
	}
	case 3:
	{
		histogram_01(method_03);
		break;
	}
	case 4:
	{
		histogram_01(method_04);
		break;
	}
	case 5:
	{
		histogram_01(method_05);
		break;
	}
	case 6:
	{
		histogram_02(method_06);
		break;
	}
	case 7:
	{
		histogram_02(method_07);
		break;
	}
	case 8:
	{
		histogram_02(method_08);
		break;
	}
	case 9:
	{
		histogram_03(method_09);
		break;
	}
	case 10:
	{
		histogram_03(method_10);
		break;
	}
	}
}
