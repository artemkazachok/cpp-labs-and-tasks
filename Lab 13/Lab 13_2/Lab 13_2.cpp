#include <iostream>
#include <Windows.h>
using namespace std;
int maxn (int*, int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "Введите размер массива: ";
		cin >> n;
	} while (n < 1);
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
	int max = X[0];
	max = maxn(X, n, max);
	cout << "Максимальный элемент массива: " << max << endl;
	delete[] X;
	X == NULL;
	system("pause");
	return 0;
}
int maxn(int* X, int n, int max)
{
	if (n == 0)
	{
		return max;
	}
	else
	{
		if (X[n - 1] > max)
		{
			max = X[n - 1];
		}
		n = n - 1;
		return maxn(X, n, max);
	}

}
