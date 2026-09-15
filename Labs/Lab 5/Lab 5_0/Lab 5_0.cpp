#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, sum = 0.0;
	cout << "Введите x: ";
	cin >> x;
	int k0, k1;
	cout << "Начальное k: ";
	cin >> k0;
	cout << "Конечное k: ";
	cin >> k1;
	if (k0 > k1)
	{
		int t = k0;
		k0 = k1;
		k1 = t;
		cout << "\nЗначения поменялись местами.\n";
	}
	for (int k = k0; k < k1 + 1; k++)
	{
		unsigned long long int f = 1;
		for (int i = 1; i < k + 1; i++)
		{
			f = f * i;
		}
		cout << "Факториал " << k << ": " << f << endl;
		sum = sum + (pow(-1, k) * (pow(x, k) / f));
		cout << "Промежуточная сумма: " << sum << endl;
	}
	cout << "\nИтоговая сумма: " << sum << endl;
	system("pause");
	return 0;
}