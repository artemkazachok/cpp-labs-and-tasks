#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, r, f;
	int choice;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Меню:\n1-рассчитать sh(x)\n2-рассчитать x^2\n3-рассчитать exp(x)\nВыбирите пункт в меню: ";
	cin >> choice;
	switch (choice)
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
		cout << "1 Ветвь\n";
	}
	else//
	{
		if (x < y )// вопрос по условии задачи
		{
			r = pow((y - f), 3) + cos(f);
			cout << "2 Ветвь\n";
		}
		else
		{
			if (x == y)//////////////////////////////////////////
			{
				r = pow((f + y), 2) + pow(x, 3);
				cout << "3 Ветвь\n";
			}
		}
	}
	cout << "Результаты вычислений: " << r << endl;
	system("pause");
	return 0;

}