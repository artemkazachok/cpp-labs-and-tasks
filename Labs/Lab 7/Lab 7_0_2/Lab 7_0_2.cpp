#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int mMax = 4, nMax = 3;
	float X[mMax][nMax];
	int m, n;
	cout << " Введите размер массива. Сколько строк: ";
	cin >> m;
	cout << "Введите размер массива. Сколько столбцов: ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "X[" << i << "][" << j << "]: ";
			cin >> X[i][j];
		}
	}
	cout << "\nМассив:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << X[i][j] << '\t';
		}
		cout << endl;
	}
	int countNegativ = 0, countPositiv = 0;
	cout << "\nИзмененный массив:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (X[i][j] < 0)
			{
				X[i][j] = 1;
				countNegativ++;
			}
			else
			{
				if (X[i][j] > 0)
				{
					X[i][j] = 8;
					countPositiv++;
				}
			}
			cout << X[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "Заменено значений меньше нуля: " << countNegativ << "\nЗаменено значений больше нуля: " << countPositiv << endl;
	system("pause");
	return 0;
}