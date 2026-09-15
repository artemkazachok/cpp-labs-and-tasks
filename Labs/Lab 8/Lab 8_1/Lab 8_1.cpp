#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m;
	do
	{
		cout << "Введит размер массива (не меньше 1): ";
		cin >> m;
	}
	while (m <= 0);
	int* A = new int[m];
	if (A == NULL)//если под массив не удалось найти в ДООП
	{
		cout << "Не удалось выделить память под массив.\n";//сообщаем пользователю об этом
		system("pause");
		return 0;//и завершаем программу
	}
	int* B = new int[m];
	if (B == NULL)//если под массив не удалось найти в ДООП
	{
		cout << "Не удалось выделить память под массив.\n";//сообщаем пользователю об этом
		system("pause");
		return 0;//и завершаем программу
	}
	for (int i = 0; i < m; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	for (int j = 0; j < m; j++)
	{
		cout << "B[" << j << "]: ";
		cin >> B[j];
	}
	int MinA = 0, MinB = 0;
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		if (A[i] < 0)
		{
			MinA++;
		}
	}
	for (int j = 0; j < m; j++)
	{
		if (B[j] < 0)
		{
			MinB++;
		}
	}
	if (MinA < MinB)
	{
		for (int i = 0; i < m; i++)
		{
			cout << "A[" << i << "]: " << A[i] << endl;
		}
		cout << "Наименьшое количество отрицательных элементов имеет массив A: " << MinA << endl;
	}
	else
	{
		if (MinB < MinA)
		{
			for (int j = 0; j < m; j++)
			{
				cout << "B[" << j << "]: " << B[j] << endl;
			}
			cout << "Наименьшое количество отрицательных элементов имеет массив B: " << MinB << endl;
		}
		else
		{
			for (int i = 0; i < m; i++)
			{
				cout << "A[" << i << "]: " << A[i] << endl;
			}
			for (int j = 0; j < m; j++)
			{
				cout << "B[" << j << "]: " << B[j] << endl;
			}
			cout << "Массивы имеют одинаковое количество отрицательных элементов: " << MinA << '=' << MinB << endl;
		}
	}
	delete[] A;
	delete[] B;
	A = NULL;
	B = NULL;
	system("pause");
	return 0;
}

