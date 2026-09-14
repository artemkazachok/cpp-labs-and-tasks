#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double c, k, result, t2;
	cout << "1 Ветка: tg^2(c - 2k), если |c + k| > 2 \n2 Ветка: ln(|c - 2k|) - sin c/2k, если 0,5 < |c + k| <= 2\n\n ";
m:  cout << "Введите c: ";
	cin >> c;
	cout << "Введите k: ";
	cin >> k;
	result = abs(c + k);
	if (result > 2)
	{
		t2 = pow(tan(c - 2 * k), 2);
		cout << "Решение идёт по 1 ветке\n";
	}
	else
	{
		if (0.5 < result && result <= 2)
		{
			t2 = log(abs(c - 2 * k)) - sin(c / 2 * k);
			cout << "Решение идёт по 2 ветке\n";
		}
		else
		{
			if (result < 0.5)
			{
				cout << "Для этих данных нет решения.\n";
				system("pause");
				return 0;
			}
			if (c == 0.5 && k == 0)
			{
				cout << "Данные переменные использовать нельзя, введите перменные заново.\n";
				goto m;
			}
			if (c == 0 && k == 0.5)
			{
				cout << "Данные переменные использовать нельзя, введите переменные заново.\n";
				goto m;
			}
		}
	}
	cout << "\nОтвет: " << t2 << endl;
	system("pause");
	return 0;

}