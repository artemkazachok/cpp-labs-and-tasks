#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, r;
	int f;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-рассчитать sh(x)\n2-рассчитать x^2\n3-рассчитать exp(x)\nВыбирите пункт в меню: ";
	cin >> f;
	switch (f)
	{
	case 1:
	{
		f = sinh(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	case 3:
	{
		f = exp(x);
		break;
	}
	default:
	{
		cout << "Такого варианта нет.\n";
		system("pause");
		return 0;
		break;
	}
	}
	cout << "f(x) = " << f << endl;
	if (x > y)
	{
		r = pow(abs(f - y), 1.0 / 3.0) + tan(f);
	}
	else
	{
		if (y < x)
		{
			r = pow((y - f), 3) + cos(f);
		}
		else
		{
			if (x == y)
			{
				r = pow((f + y), 2) + pow(x, 3);
			}
			

			
		}
	}
	cout << "Результаты вычислений: " << r << endl;
	system("pause");
	return 0;

	


}