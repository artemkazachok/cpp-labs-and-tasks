#define _CRT_SECURE_NO_WARNING
#include <iostream>
#include <Windows.h>
using namespace std;
int maxn(int*, int, int, int&);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "Введите четный размер массива: ";
		cin >> n;
	} while (n % 2 != 0 || n < 1);
	int* X = new int[n];
	if (X == NULL)
	{
		cout << "Не удалось выделить память под массив.";
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "X[" << i << "]: ";
		cin >> X[i];
	}
	int i = 0, max = X[0];
	max = maxn(X, n, i, max);
	cout << "Максимум: " << max << endl;
	delete[] X;
	X = NULL;
	system("pause");
	return 0;
	
}
int maxn(int* X, int n, int i, int& max)
{
	if (i == n / 2)
	{
		return max;
	}
	else
	{
		int firstmax = X[0 + i];
		int lastmax = X[n / 2 + i];
		if (firstmax > lastmax)
		{
			if (firstmax > max)
			{
				max = firstmax;
			}
		}
		else
		{
			if (lastmax > max)
			{
				max = lastmax;
			}
		}
		i++;
		return maxn(X, n, i, max);

	}
}
