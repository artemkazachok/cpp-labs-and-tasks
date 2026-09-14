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
void resetcopy(product*, product*, int);
void insertsortnomer(product*, int, int&, int&);
void insertsortprice(product*, int, int&, int&);
void shellsortnomer(product*, int, int&, int&);
void shellsortprice(product*, int, int&, int&);
void print(product*, int);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "Кол-во товаров: ";
		cin >> n;
		if (n < 1)
		{
			cout << "Кол-во товара не может быть меньше 1. Введите кол-во заново.";
		}
	} while (n < 1);
	product* X = new product[n];
	product* Xcopy = new product[n];
	if (X == NULL)
	{
		cout << "Не удалось выделить память.";
		system("pause");
		return 0;
	}
	if (Xcopy == NULL)
	{
		cout << "Не удалось выделить память.";
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
	
	//СЧЁТЧИКИ
	int countInsertComp = 0; // сравнение
	int countInsertTrans = 0;//перестановки
	int countShellComp = 0;// сравнение
	int countShellTrans = 0;// перестановки 

	cout << "Номенклатурный номер (по возрастанию): " << endl;
	resetcopy(X, Xcopy, n);
	insertsortnomer(Xcopy, n,countInsertComp, countInsertTrans);
	resetcopy(X, Xcopy, n);
	shellsortnomer(Xcopy, n, countShellComp, countShellTrans);
	print(Xcopy, n);
	cout << "Кол-во сравнений вставками: " << countInsertComp << endl;
	cout << "Кол-во перестановок вставками: " << countInsertTrans << endl;
	cout << "Кол-во сравнений Шелла: " << countShellComp << endl;
	cout << "Кол-во перестановок Шелла: " << countShellTrans << endl;
	cout << '\n';
	cout << "Стоимость товара (по убыванию): " << endl;
	countInsertComp = 0; // сравнение
	countInsertTrans = 0;//перестановки
	resetcopy(X, Xcopy, n);
	insertsortprice(Xcopy, n, countInsertComp, countInsertTrans);
	countShellComp = 0;// сравнение
	countShellTrans = 0;// перестановки
	resetcopy(X, Xcopy, n);
	shellsortprice(Xcopy, n, countShellComp, countShellTrans);
	print(Xcopy, n);
	cout << "Кол-во сравнений вставками: " << countInsertComp << endl;
	cout << "Кол-во перестановок вставками: " << countInsertTrans << endl;
	cout << "Кол-во сравнений Шелла: " << countShellComp << endl;
	cout << "Кол-во перестановок Шелла: " << countShellTrans << endl;
	cout << '\n';
	delete[] X;
	delete[] Xcopy;
	X = NULL;
	Xcopy = NULL;
	system("pause");
	return 0;
}
void insertsortnomer(product* X, int n, int& Comp, int& Trans)
{
	for (int i = 1; i < n; i++)
	{
		product t = X[i];
		for (int j = i - 1; j > -1; j--)
		{
			Comp += 1;
			if (t.nomer < X[j].nomer)
			{
				X[j + 1] = X[j];
				X[j] = t;
				Trans += 1;
			}
		}
	}
}
void insertsortprice(product* X, int n, int& Comp, int& Trans)
{
	for (int i = 1; i < n; i++)
	{
		product t = X[i];
		for (int j = i - 1; j > -1; j--)
		{
			Comp += 1;
			if (t.price > X[j].price)
			{
				X[j + 1] = X[j];
				X[j] = t;
				Trans += 1;
			}
		}
	}
}
void print(product* X, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << X[i].name << " | "  << X[i].nomer << " | " << X[i].price << endl;
	}
}
void shellsortprice(product* X, int n, int& Comp, int& Trans)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				Comp+=1;
				if (X[k].price < X[k + i].price)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
					Trans+=1;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}
void shellsortnomer(product* X, int n, int& Comp, int& Trans)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				Comp += 1;
				if (X[k].nomer > X[k + i].nomer)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
					Trans += 1;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}
void resetcopy(product* original, product* copy, int n)
{
	for (int i = 0; i < n; i++)
	{
		copy[i] = original[i];
	}
}