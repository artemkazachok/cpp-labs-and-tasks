#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, f, r, x, y;
	int p;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-рассчитать sh(x)\n2-расчитать x^2\n3-рассчитать экспоненту exp(x)\nВыбирите пункт в меню: ";
	cin >> p;
	switch (p)
	{
	case 1:
	{
		f = sinh(x);
		cout << p << endl;
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
	default:// если p не будет равным ни 1, ни 2, ни 3
	{
		cout << "Такого варианта нет.\n";
		system("pause");
		return 0;
		break;
	}
	}//конец тела свитча
	cout << "f(x) = " << f << endl;
	a = fabs(x * y);
	cout << "|x*y| = " << a << endl;
	if (a < 5)
	{
		cout << "Для случаев, когда |x*y| < 5 решения не предусмотрено.\n";
		return 0;
	}
	else
	{
		if (a == 5)
		{
			r = sin(x) + tan(y);
		}
		else
		{
			if (a > 10)
			{
				r = fabs(f) + log(y);
			}
			else
			{
				r = exp(f + y);
			}
		}
	}
	cout << "Результат вычислений: " << r << endl;
	system("pause");
	return 0;

			

		
	

}