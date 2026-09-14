#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int f;
	do
	{
		cout << "1. Задание 1" << endl;
		cout << "2. Задание 2" << endl;
		cout << "3. Задание 3" << endl;
		cout << "4. Задание 4" << endl;
		cout << "5. Задание 5" << endl;
		cout << "6. Задание 6" << endl;
		cout << "7. Задание 7" << endl;
		cout << "0. Завершить работу программы" << endl;
		cout << endl << "Выберите пункт в меню: ";
		cin >> f;
		switch (f)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
				int m, n;
				do
				{
					cout << "Количество строк: ";
					cin >> m;
				} while (m < 1);
				do
				{
					cout << "Количество столбцов: ";
					cin >> n;
				} while (n < 1);
				char** X = new char* [m];
				if (X == NULL)
				{
					cout << "Не удалось найти массив.";
					system("pause");
					return 0;
				}
				for (int i = 0; i < m; i++)
				{
					X[i] = new char[n];
					if (X[i] == NULL)
					{
						cout << "Не удалось найти массив. ";
						delete[] X;
						X = NULL;
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
				for (int i = 0; i < m; i++)
				{
					for (int j = 0; j < n; j++)
					{
						cout << X[i][j] << '\t';
					}
					cout << endl;
				}
				for (int i = 0; i < m; i++)
				{
					delete[] X[i];
					X[i] = NULL;
				}
				delete[] X;
				X = NULL;
				cout << endl;
				break;
	
		}
		case 2:
		{
			int m, n;
			do
			{
				cout << "Количество строк:";
				cin >> m;
			} while (m < 1);
			do
			{
				cout << "Количество столбцов: ";
				cin >> n;
			} while (n < 1);
			double** X = new double* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив. ";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new double[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив. ";
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
			cout << "Print array: " << endl;
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
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		case 3:
		{
			int m, n;
			do
			{
				cout << "Количество строк: ";
				cin >> m;
			} while (m < 1);
			do
			{
				cout << "Количество столбцов: ";
				cin >> n;
			} while (n < 1);
			srand(time(NULL));
			int** X = new int* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив.";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new int[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив.";
					delete[] X;
					X == NULL;
					system("pause");
					return 0;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = 29 + rand() % 3;
				}
			}
			cout << "Show massiv: " << endl;
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
			cout << "Show reverse massiv: " << endl;
			for (int i = m - 1; i >= 0; i--)
			{
				for (int j = n - 1; j >= 0; j--)
				{
					cout << X[i][j];
					if (j >= 1)
					{
						cout << " | ";
					}
				}
				cout << endl;
			}
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		case 4:
		{
			int m, n;
			do
			{
				cout << "Количество строк: ";
				cin >> m;
			} while (m < 1);
			do
			{
				cout << "Количество столбцов: ";
				cin >> n;
			} while (n < 1);
			int** X = new int* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив: ";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new int[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив: ";
					delete[] X;
					X == NULL;
					system("pause");
					return 0;
				}
			}
			cout << "Print massiv: " << endl;
			for (int i = 0, k = 0; i < m; i++)
			{
				for (int j = 0; j < n; k += 2, j++)
				{
					X[i][j] = k;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << '\t';
					}
				}
				cout << endl;
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] -= 10;
				}
			}
			cout << "Print new massiv: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << '\t';
					}
				}
				cout << endl;
			}
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		case 5:
		{
			int m, n;
			do
			{
				cout << "Количество строк: ";
				cin >> m;
			} while (m < 1);
			do
			{
				cout << "Количество столбцов: ";
				cin >> n;
			} while (n < 1);
			srand(time(NULL));
			double** X = new double* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив: ";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new double[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив: ";
					delete[] X;
					X == NULL;
					system("pause");
					return 0;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = rand();
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << '\t';
					}
				}
				cout << endl;
			}
			cout << "New vision of array: " << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (j % 2 == 0)
					{
						cout << X[i][j] << '\t';
					}
				}
				cout << endl;
			}
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		case 6:
		{
			const int m = 10, n = 10;
			int Y[m][n] = { { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
		 { -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
		 { -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
		 { 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
		 { -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
		 { -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
		 { 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
		 { -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
		 { 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
		 { 78, 60, -79, -18, 30, -13, -34, -92, 1, -38} };
			int m1 = 10, n1 = 10;
			int** X = new int* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив: ";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new int[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив: ";
					system("pause");
					return 0;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = Y[i][j];
				}
			}
			int max = X[0][0];
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					for (int k = 0; k < m; k++)
					{
						for (int l = 0; l < n; l++)
						{
							if (i == k && j == l)
							{
								continue;
							}
							if (X[i][j] == X[k][l] && max < X[i][j])
							{
								max = X[i][j];
							}
						}
					}
				}

			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << ",\t";
					}
				}
				cout << endl;
			}
			cout << endl;
			cout << "Максимальное число, встречающихся в заданной матрице более одного раза: " << max << endl;
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		case 7:
		{
			const int m = 10, n = 10;
			int result[m];
			int Y[m][n] = { { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
							 { -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
							 { -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
							 { 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
							 { -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
							 { -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
							 { 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
							 { -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
							 { 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
							 { 78, 60, -79, -18, 30, -13, -34, -92, 1, -38} };
			
			int m1 = 10, n1 = 10;
			int** X = new int* [m];
			if (X == NULL)
			{
				cout << "Не удалось найти массив: ";
				system("pause");
				return 0;
			}
			for (int i = 0; i < m; i++)
			{
				X[i] = new int[n];
				if (X[i] == NULL)
				{
					cout << "Не удалось найти массив: ";
					system("pause");
					return 0;
				}
			}
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					X[i][j] = Y[i][j];
				}
			}
			for (int j = 0; j < n; j++)
			{
				result[j] = 0;
				for (int i = 0; i < m; i++)
				{
					if (X[i][j] < 0 && abs(X[i][j]) % 2 != 0)
					{
						result[j] += abs(X[i][j]);
					}
				}
			}
			for (int k = 0; k < n - 1; k++)
			{
				for (int j = 0; j < n - 1 - k; j++)
				{
					if (result[j] > result[j + 1])
					{
						int dop = result[j];
						result[j] = result[j + 1];
						result[j + 1] = dop;
						for (int i = 0; i < m; i++)
						{
							int dop1 = X[i][j];
							X[i][j] = X[i][j + 1];
							X[i][j + 1] = dop1;
						}
					}
				}
			}
			for (int j = 0; j < n; j++)
			{
				cout << "X[" << j << "]= " << result[j];
				cout << endl;
			}
			cout << endl;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << X[i][j];
					if (j < n - 1)
					{
						cout << ",\t";
					}
				}
				cout << endl;
			}
			for (int i = 0; i < m; i++)
			{
				delete[] X[i];
				X[i] = NULL;
			}
			delete[] X;
			X = NULL;
			cout << endl;
			break;
		}
		}

	}while (f != 0);
	system("pause");
	return 0;
}