#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;
struct product
{
	char name[50];
	int nomer;
	double price;
	int kol;
};
//ФУНКЦИИ
product* NameLinSearch(product*, int, char*);
product* NameBinSearch(product*, int, char*);
product* NomerLinSearch(product*, int, int);
product* NomerBinSearch(product*, int, int);
product* PriceLinSearch(product*, int, double);
product* PriceBinSearch(product*, int, double);
product* KolLinSearch(product*, int, int);
product* KolBinSearch(product*, int, int);
void ShellSortName(product*, int, bool&);
void ShellSortNomer(product*, int, bool&);
void ShellSortPrice(product*, int, bool&);
void ShellSortKol(product*, int, bool&);
bool ProvSortName(product*, int);
bool ProvSortNomer(product*, int);
bool ProvSortPrice(product*, int);
bool ProvSortKol(product*, int);

//ПРОВЕРКИ
bool sortname = false;
bool sortnomer = false;
bool sortprice = false;
bool sortkol = false;

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
	if (X == NULL)
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
		cout << "Введите кол-во товара: ";
		cin >> X[i].kol;
	}

	int choice;
	do
	{
		cout << "По каким данным вы хотите найти товар:" << endl;
		cout << "1. Название товара" << endl;
		cout << "2. Номенклатурный номер" << endl;
		cout << "3. Цена товара" << endl;
		cout << "4. Кол-во товара" << endl;
		cout << "0. Завершить поиск" << endl;
		cout << "Введите номер: ";
		cin >> choice;
		cout << '\n';
		switch(choice)
		{
		case 1:
		{
			sortnomer = false;
			sortprice = false;
			sortkol = false;
			char nameprod[50];
			cout << "Введите название товара: ";
			cin.ignore();
			cin.getline(nameprod, 50);
			sortname = ProvSortName(X, n);
			product* proverka;
			if (sortname == false)
			{
				cout << "Используется ПОСЛЕДОВАТЕЛЬНЫЙ поиск:" << endl;
				proverka = NameLinSearch(X, n, nameprod);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклатурный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
				bool optimaze = false;
				cout << "Можно оптимизировать этот массив (БУДЕТ ПЕРЕСТАНОВКА ДАННЫХ):" << endl;
				cout << "Хотите оптимизировать именно эти данные? 0 - нет 1 - да: ";
				cin >> optimaze;
				if (optimaze == true)
				{
					ShellSortName(X, n, sortname);
				}
				
			}
			else
			{
				cout << "Используется БИНАРНЫЙ поиск:" << endl;
				proverka = NameBinSearch(X, n, nameprod);
				if (proverka != 0)

				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклатурный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
			}
			cout << '\n';
			break;
		}
		case 2:
		{
			sortname = false;
			sortprice = false;
			sortkol = false;
			int choisenomer;
			cout << "Введите номенклатурный номер: ";
			cin >> choisenomer;
			sortnomer = ProvSortNomer(X, n);
			product* proverka;
			if (sortnomer == false)
			{
				cout << "Используется ПОСЛЕДОВАТЕЛЬНЫЙ поиск:" << endl;
				proverka = NomerLinSearch(X, n, choisenomer);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
				bool optimaze = false;
				cout << "Можно оптимизировать этот массив (БУДЕТ ПЕРЕСТАНОВКА ДАННЫХ):" << endl;
				cout << "Хотите оптимизировать именно эти данные? 0 - нет 1 - да: ";
				cin >> optimaze;
				if (optimaze == true)
				{
					ShellSortNomer(X, n, sortnomer);
				}
			}
			else
			{
				cout << "Используется БИНАРНЫЙ поиск:" << endl;
				proverka = NomerBinSearch(X, n, choisenomer);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
			}
			cout << '\n';
			break;
		}
		case 3:
		{
			sortname = false;
			sortnomer = false;
			sortkol = false;
			double choiseprice;
			cout << "Введите цену: ";
			cin >> choiseprice;
			sortprice = ProvSortPrice(X, n);
			product* proverka;
			if (sortprice == false)
			{
				cout << "Используется ПОСЛЕДОВАТЕЛЬНЫЙ поиск:" << endl;
				proverka = PriceLinSearch(X, n, choiseprice);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
				bool optimaze = false;
				cout << "Можно оптимизировать этот массив (БУДЕТ ПЕРЕСТАНОВКА ДАННЫХ):" << endl;
				cout << "Хотите оптимизировать именно эти данные? 0 - нет 1 - да: ";
				cin >> optimaze;
				if (optimaze == true)
				{
					ShellSortPrice(X, n, sortprice);
				}
			}
			else
			{
				cout << "Используется БИНАРНЫЙ поиск:" << endl;
				proverka = PriceBinSearch(X, n, choiseprice);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
			}
			cout << '\n';
			break;
		}
		case 4:
		{
			sortname = false;
			sortprice = false;
			sortnomer = false;
			int choisekol;
			cout << "Введите кол-во: ";
			cin >> choisekol;
			sortkol = ProvSortKol(X, n);
			product* proverka;
			if (sortkol == false)
			{
				cout << "Используется ПОСЛЕДОВАТЕЛЬНЫЙ поиск:" << endl;
				proverka = KolLinSearch(X, n, choisekol);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
				bool optimaze = false;
				cout << "Можно оптимизировать этот массив (БУДЕТ ПЕРЕСТАНОВКА ДАННЫХ):" << endl;
				cout << "Хотите оптимизировать именно эти данные? 0 - нет 1 - да: ";
				cin >> optimaze;
				if (optimaze == true)
				{
					ShellSortKol(X, n, sortkol);
				}
			}
			else
			{
				cout << "Используется БИНАРНЫЙ поиск:" << endl;
				proverka = KolBinSearch(X, n, choisekol);
				if (proverka != 0)
				{
					cout << "Товар успешно найден!" << endl;
					cout << "Название: " << proverka->name << endl;
					cout << "Номенклаторный номер: " << proverka->nomer << endl;
					cout << "Цена: " << proverka->price << endl;
					cout << "Кол-во: " << proverka->kol << endl;
				}
				else
				{
					cout << "Товар не найден" << endl;
				}
			}
			cout << '\n';
			break;
		}
		}
	} while (choice != 0);
	delete[] X;
	X = NULL;
	system("pause");
	return 0;
}

//СОРТИРОВКИ
void ShellSortName(product* X, int n, bool& prov)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (strcmp(X[k].name, X[k + i].name) > 0)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
	prov = true;
}
void ShellSortNomer(product* X, int n, bool& prov)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (X[k].nomer > X[k + i].nomer)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
	prov = true;
}
void ShellSortPrice(product* X, int n, bool& prov)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (X[k].price > X[k + i].price)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
	prov = true;
}
void ShellSortKol(product* X, int n, bool& prov)
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (X[k].kol > X[k + i].kol)
				{
					product t = X[k];
					X[k] = X[k + i];
					X[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
	prov = true;
}
//ЛИНЕЙНАЯ СОРТИРОВКА
product* NameLinSearch(product* X, int n, char* name)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(X[i].name, name) == 0)
		{
			return &X[i];
		}
	}
	return 0;
}
product* NomerLinSearch(product* X, int n, int nomer)
{
	for (int i = 0; i < n; i++)
	{
		if (X[i].nomer == nomer)
		{
			return &X[i];
		}
	}
	return 0;
}
product* PriceLinSearch(product* X, int n, double price)
{
	for (int i = 0; i < n; i++)
	{
		if (X[i].price == price)
		{
			return &X[i];
		}
	}
	return 0;
}
product* KolLinSearch(product* X, int n, int kol)
{
	for (int i = 0; i < n; i++)
	{
		if (X[i].kol == kol)
		{
			return &X[i];
		}
	}
	return 0;
}
//БИНАРНАЯ СОТРИРОВКА
product* NameBinSearch(product* X, int n, char* name)
{
	int first = 0, last = n - 1, centr = (first + last) / 2;
	while (first <= last)
	{
		if (strcmp(X[centr].name, name) == 0)
		{
			return &X[centr];
		}
		else
		{
			if (strcmp(X[centr].name, name) > 0)
			{
				last = centr - 1;
			}
			else
			{
				first = centr + 1;
			}
			centr = (first + last) / 2;
		}
	}
	return 0;
}
product* NomerBinSearch(product* X, int n, int nomer)
{
	int first = 0, last = n - 1, centr = (first + last) / 2;
	while (first <= last)
	{
		if (X[centr].nomer == nomer)
		{
			return &X[centr];
		}
		else
		{
			if (X[centr].nomer > nomer)
			{
				last = centr - 1;
			}
			else
			{
				first = centr + 1;
			}
			centr = (first + last) / 2;
		}
	}
	return 0;
}
product* PriceBinSearch(product* X, int n, double price)
{
	int first = 0, last = n - 1, centr = (first + last) / 2;
	while (first <= last)
	{
		if (X[centr].price == price)
		{
			return &X[centr];
		}
		else
		{
			if (X[centr].price > price)
			{
				last = centr - 1;
			}
			else
			{
				first = centr + 1;
			}
			centr = (first + last) / 2;
		}
	}
	return 0;
}
product* KolBinSearch(product* X, int n, int kol)
{
	int first = 0, last = n - 1, centr = (first + last) / 2;
	while (first <= last)
	{
		if (X[centr].kol == kol)
		{
			return &X[centr];
		}
		else
		{
			if (X[centr].kol > kol)
			{
				last = centr - 1;
			}
			else
			{
				first = centr + 1;
			}
			centr = (first + last) / 2;
		}
	}
	return 0;
}
bool ProvSortName(product* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (strcmp(X[i].name, X[i + 1].name) > 0)
		{
			return 0;
		}
	}
	return 1;
}
bool ProvSortNomer(product* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (X[i].nomer > X[i + 1].nomer)
		{
			return 0;
		}
	}
	return 1;
}
bool ProvSortPrice(product* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (X[i].price > X[i + 1].price)
		{
			return 0;
		}
	}
	return 1;
}
bool ProvSortKol(product* X, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (X[i].kol > X[i + 1].kol)
		{
			return 0;
		}
	}
	return 1;
}
