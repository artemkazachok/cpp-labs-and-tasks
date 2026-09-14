#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 100;
	double A[n];
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			A[i] = pow(i, 2);
		}
		else
		{
			A[i] = i / 3;
		}
	}
	cout << "\nМассив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << '\t';
	}
	cout << "\nКонец печати массива.\n";
	system("pause");
	return 0;
}