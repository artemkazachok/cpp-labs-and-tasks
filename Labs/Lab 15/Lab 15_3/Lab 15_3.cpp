#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

struct product
{
	char name[50];
	int nomer;
	double price;
};

void printMas(float*, int);
void printMas(short int*, int);
void printMas(double**, int, int);
void printMas(product*, int);
void bubleSort(float*, int);
void selectionSort(short int*, int);
void insertSort(double**, int, int);
void shellSort(product*, int);
int IndexMinMas(short int*, int, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choice;
	do
	{
		cout << "Выберите пункт в меню: " << endl;
		cout << "1. Одномерный массив" << endl;
		cout << "2. Двумерный массив" << endl;
		cout << "3. Одномерный массив и struct" << endl;
		cout << "0. Завершить работу программы" << endl;
		cout << "Введите пункт: ";
		cin >> choice;
		cout << '\n';
		switch (choice)
		{
		case 1:
		{
			int n;
			do
			{
				cout << "Введите размер массива: ";
				cin >> n;
			} while (n < 1);
			int choiceType;
			do
			{
				cout << "Выберите тип элементов:" << endl;
				cout << "1. float" << endl;
				cout << "2. short int" << endl;
				cout << "0. Завершить работу одномерного массива" << endl;
				cout << "Введите пункт: ";
				cin >> choiceType;
				switch (choiceType)
				{
				case 1:
				{
					float* X = new float[n];
					if (X == NULL)
					{
						cout << "Не удалось выделить память под массив";
						system("pause");
						return 0;
					}
					for (int i = 0; i < n; i++)
					{
						cout << "X[" << i << "]: ";
						cin >> X[i];
					}
					cout << "Массив до сортировки:" << endl;
					printMas(X, n);
					cout << "Массив после сортировки" << endl;
					bubleSort(X, n);
					printMas(X, n);
					delete[] X;
					X = NULL;
					cout << '\n';
					break;


				}
				case 2:
				{
					short int* X = new short int[n];
					if (X == NULL)
					{
						cout << "Не удалось выделить память под массив";
						system("pause");
						return 0;
					}
					for (int i = 0; i < n; i++)
					{
						cout << "X[" << i << "]: ";
						cin >> X[i];
					}
					cout << "Массив до сортировки:" << endl;
					printMas(X, n);
					cout << "Массив после сортировки" << endl;
					selectionSort(X, n);
					printMas(X, n);
					delete[] X;
					X = NULL;
					cout << '\n';
					break;
				}
				}
			} while (choiceType != 0);
			cout << '\n';
			break;
		}
		case 2:
		{
			int m;
			do
			{
				cout << "Введите кол-во строк: ";
				cin >> m;
			} while (m < 1);
			int n;
			do
			{
				cout << "Введите кол-во столбцов: ";
				cin >> n;
			} while (n < 1);
			double** X = new double* [m];
			if (X == NULL)
			{
				cout << "Не удалось выделить память под массив" << endl;
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new double[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось выделить память под массив" << endl;
					system("pause");
					return 0;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << "X[" << i << "][" << j << "]: ";
					cin >> X[i][j];
				}
			}
			cout << "Массив до сортировки:" << endl;
			printMas(X, m, n);
			cout << "Массив после сортировки:" << endl;
			insertSort(X, m, n);
			printMas(X, m, n);
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << '\n';
			break;

		}
		case 3:
		{
			int n;
			do
			{
				cout << "Введите размер массива: ";
				cin >> n;
			} while (n < 1);
			product* X = new product[n];
			if (X == NULL)
			{
				cout << "Не удалось выделить память под массив" << endl;
				system("pause");
				return 0;
			}
			for (int i = 0; i < n; i++)
			{
				cout << "Введите название товара: ";
				cin.ignore();
				cin.getline(X[i].name, 50);
				cout << "Введите номенклатурный номер: ";
				cin >> X[i].nomer;
				cout << "Введите цену товара: ";
				cin >> X[i].price;
			}
			cout << "Массив до сортировки:" << endl;
			printMas(X, n);
			cout << "Массив после сортировки:" << endl;
			shellSort(X,n);
			printMas(X, n);
			delete[] X;
			X = NULL;
			cout << '\n';
			break;
		}
		}
	} while (choice != 0);
}
void printMas(double** X, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "X[" << i << "][" << j << "]: " << X[i][j] << endl;
		}
		cout << endl;
	}
}
void printMas(float* X, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "X[" << i << "]: " << X[i] << endl;
	}
}
void printMas(short int* X, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "X[" << i << "]: " << X[i] << endl;
	}
}
void printMas(product* X, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << X[i].name << " | " << X[i].nomer << " | " << X[i].price << endl;
	}
}
void bubleSort(float* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (X[j] > X[j + 1])
			{
				float copy = X[j];
				X[j] = X[j + 1];
				X[j + 1] = copy;
			}
		}
	}
}
int IndexMinMas(short int* X, int start, int final)
{
	int indexMin = start;
	for (int i = start + 1; i < final; i++)
	{
		if (X[i] < X[indexMin])
		{
			indexMin = i;
		}
	}
	return indexMin;
}
void selectionSort(short int* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int indexmin = IndexMinMas(X, i, n);
		short int copy = X[i];
		X[i] = X[indexmin];
		X[indexmin] = copy;
	}
}
void insertSort(double** X, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			double t = X[i][j];
			for (int k = j - 1; k > -1 && t > X[i][k]; k--)
			{
				X[i][k + 1] = X[i][k]; X[i][k] = t;
			}
		}
	}
}
void shellSort(product* X, int n)
{
	for (int i = n / 2; i > 0; i /= 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k -= i)
			{
				if (X[k].nomer < X[k + i].nomer)
				{
					product copy = X[k];
					X[k] = X[k + i];
					X[k + i] = copy;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}