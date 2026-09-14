#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m, n;
	do
	{
		cout << "Количество строк: ";
		cin >> m;
	} 
	while (m < 1);//проверка некорректного ввода
	do
	{
		cout << "Количество столбцов: ";
		cin >> n;
	} 
	while (n < 1);//проверка некорретного ввода
	int** a = new int* [m];//на двумерный динамический массив создаем указатель "второго уровня", поэтому **, а элементы этого массива - сами указатели * на строки
	if (a == NULL)//если выделить участок в ДООП под массив не удалось
	{
		cout << "Не удалось найти массив.\n";
		system("pause");
		return 0;//то завершаем работу программы
	}
	for (int i = 0; i < m; i++)//выделяем память  под столбцы массива
	{
		a[i] = new int[n];//выделяем память под столбцы массива, которые состоят из "обычных" элементов типа int
		if (a[i] == NULL)
		{
			cout << "Не удалось создать строку № " << i << endl;
			for (int j = 0; j < i; j++)//освободим участки ДООП, которые успели ранее выделить под предыдущие столбы массива
			{
				delete[] a[j];
			}
			delete[] a;
			a = NULL;
			system("pause");
			return 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Введите значение a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 10 + rand() % 90;
		}
	}
	cout << "\nПечать двумерного массива:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << '\t';//
		}
		cout << endl;
	}
	cout << "Конец печати элемента.\n\n";
	for (int h = 0; h < m * n; h++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j < n - 1 && a[i][j] > a[i][j + 1])
				{
					int t = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = t;
				}
				else
				{
					if (i < m - 1 && a[i][j] > a[i + 1][0])
					{
						int t = a[i][j];
						a[i][j] = a[i + 1][0];
						a[i + 1][0] = t;
					}
				}
			}
		}
	}
	cout << "\nОтсортированный массив:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "Конец печати отсортированного массива.\n\n";

	for (int i = 0; i < m; i++)
	{
		delete[] a[i];
	}
	delete[] a;
	a = NULL;
	system("pause");
	return 0;


}