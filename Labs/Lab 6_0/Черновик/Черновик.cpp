#include <iostream>
#include <Windows.h>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 10;
	int X[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Вектор: [" << i << "] = ";
		cin >> X[i];
	}
	cout << "Сумма чисел взодящий в промежуток от -5 до 5 включительно: ";
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (X[i] > -5 && X[i] <= 5)
		{
			sum = sum + X[i];
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
	

	


}