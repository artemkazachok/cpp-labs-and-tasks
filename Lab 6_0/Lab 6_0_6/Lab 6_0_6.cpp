#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int mMax = 100, nMax = 150;
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
	system("pause");
	return 0;
}