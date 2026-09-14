#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int nMax = 10;
	double X[nMax][nMax];
	int n;
	do
	{
		cout << "Введите порядок матрицы (не больше 10): ";
		cin >> n;
		n = abs(n);
	} while (n > 10);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "X[" << i << "][" << j << "]: ";
			cin >> X[i][j];

		}

	}
	double min, result = 1;
	for (int j = 0; j < n; j++)
	{
		min = X[0][j];
		for (int i = 0; i < n; i++)
		{
			if (X[i][j] <= min)
			{
				min = X[i][j];
			}
		}
		result = result * min;
		cout << "Минимальное [" << j << "] столбца:" << min << endl;
	}
	cout << "Произведение минимальных значений: " << result << endl;
	system("pause");
	return 0;

}