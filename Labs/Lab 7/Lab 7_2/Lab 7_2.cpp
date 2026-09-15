#include <iostream>
#include <Windows.h>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << " \n1. Выбрать 1 задание";
		cout << " \n2. Выбрать 2 задание";
		cout << " \n3. Выбрать 3 задание";
		cout << " \n4. Выбрать 4 задание";
		cout << " \n5. Выбрать 5 задание";
		cout << " \n0. Завершить работу программы";
		cout << "\nВведите число из списка: ";
		cin >> n;
		switch (n)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int m = 2, n = 4;
			char X[m][n] = { { 'a', 'b', 'c', 'd' }, { 'e', 'f', 'g', 'h' } };
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j] << '\t';
				}
				cout << endl;
			}
			cout << "\n";
			break;
		}
		case 2:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int m = 4, n = 2;
			double X[m][n];
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << "array[" << i << "][" << j << "]: ";
					cin >> X[i][j];
				}
			}
			cout << "Print array:" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << " | ";
					}
				}
				cout << endl;
			}
			cout << "\n";
			break;

		}
		case 3:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int m = 16, n = 11;
			int X[m][n], a = 0, b = 53;
			srand(time(NULL));
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = a + rand() % (b - a + 1);
				}
			}
			cout << "Show massiv:" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << " ; ";
					}
				}
				cout << endl;
			}
			cout << "Show reverse massiv:" << endl;
			for (int i = m - 1; i >= 0; i--)////////////////
			{
				for (int j = n - 1; j >= 0; j--)//////
				{
					cout << X[i][j];
					if (j > 0)
					{
						cout << " ; ";
					}

				}
				cout << endl;
			}
			cout << "\n";
			break;
		}
		case 4:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int m = 19, n = 10;
			int X[m][n];
			int k = -845;
			int step = 100;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = step;
					step -= 5;
				}
			}
			cout << "Print massiv:" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << " ; ";
					}

				}
				cout << endl;
			}
			cout << "Print new massiv:" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = X[i][j] * -2;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << " ; ";
					}

				}
				cout << endl;
			}
			cout << "\n";
			break;
		}
		case 5:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int m = 4, n = 3;
			double X[m][n] = { {12.34 , -5.678, 0.643}, {99.12, 7.14, 3.17 }, {16.09, 8, 42.5}, {3.76, 61.23, 44.50} };
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << "; ";
					}
				}
				cout << endl;
			}
			cout << "New vision of array:" << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i == 2 || j == 2)
					{
						cout << "X[" << i << "][" << j << "] = " << X[i][j] << endl;
					}
				}
			}
			cout << "\n";
			break;
		}
		default:
		{
			cout << "Такого числа нет в списке." << endl;
		}
		}
	} 
	while (n != 0);
	system("pause");
	return 0;

}
