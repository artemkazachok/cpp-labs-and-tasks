#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int p;
	double x, m, j, f;
	cout << "Введите x:";
	cin >> x;
	cout << "Введите m:";
	cin >> m;
	cout << "Меню:\n1-exp^x\n2-x^2\n";
	cin >> p;
	switch (p)
	{
	case 1:
	{
		f = exp(x);
		break;
	}
	case 2:
	{
		f = pow(x, 2);
		break;
	}
	default:
	{
		cout << "Такого варианта нет.";
		system("pause");
		return 0;
		break;

	}
	}
	cout << "f(x)= " << f << endl;
	if (-1 < m && m < x)
	{
		j = sin(5 * f + 3 * m * abs(f));
	}
	else
	{
		if (m > x)
		{
			j = cos(3 * f + 5 * m * abs(f));
		}
		else
		{
			if (x == m)
			{
				j = pow((f + m), 2);
			}
			else
			{
				cout << "Нет решения.";
				system("pause");
				return 0;
			}
			
		}
		
	}
	cout << "Ответ: " << j << endl;
	system("pause");
	return 0;

	




}
