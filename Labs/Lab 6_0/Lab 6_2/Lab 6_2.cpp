#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choice;
	do
	{
		cout << " 1. Выбрать 1 задание \n";
		cout << " 2. Выбрать 2 задание \n";
		cout << " 3. Выбрать 3 задание \n";
		cout << " 4. Выбрать 4 задание \n";
		cout << " 5. Выбрать 5 задание \n";
		cout << " 0. Выйти из программы \n";
		cout << " Введите число из списка:";
		cin >> choice;
		switch (choice)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			const bool X[8] = { true, false, true, false, true, true, false, false };
			for (int i = 0; i < 8; i++)
			{
				cout << X[i] << '\t';
			}
			cout << "\n\n";
			for (int i = 0; i < 8; i++)
			{
				cout << X[i] << '\n';
			}
			break;
		}
		case 2:
		{
			const int n = 13;
			int X[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Введите значение: ";
				cin >> X[i];
			}
			cout << "\n\n";
			cout << "Все значения: ";
			for (int i = 0; i < n; i++)
			{
				cout << X[i] << ' ';
			}
			cout << "\n\n";
			cout << "Только положительные и равные нулю значения: ";
			for (int i = 0; i < n; i++)
			{
				if (X[i] >= 0)
				{
					cout << X[i] << ' ';
				}
			}
			cout << "\n\n";
			break;
		}
		case 3:
		{
			const int nMax = 150;
			double X[nMax];
			int n;
			do
			{
				cout << "Введите размер массива (макс 150):";
				cin >> n;
			} 
			while (n > 150);
			for (int i = 0; i < n; i++)
			{
				cout << "Введите значения:";
				cin >> X[i];
			}
			cout << "\n\n";
			cout << "Все числа:";
			for (int i = 0; i < n; i++)
			{
				cout << "\nМассив [" << i << "] = " << X[i];
			}
			cout << "\n\n";
			cout << "Числа некратные пяти: ";
			for (int i = 0; i < n; i++)
			{
				if (fmod(X[i], 5) != 0)
				{
					cout << "\n[" << i << "] = " << X[i];
				}
			}
			cout << "\n\n";
			break;
		}
		case 4:
		{
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);
			const int n = 1250;
			unsigned long long int X[n];
			srand(time(NULL));
			int count = 20;
			for (int i = 0; i < n; i++)
			{

				X[i] = 2 + rand() % (20 - 2 + 1);
				cout << X[i] << ' ';

			}
			cout << "\n\nЭлементы с 465 до 649: ";
			for (int i = 465; i <= 649; i++)
			{
				cout << X[i] << ' ';
			}
			cout << "\n\nЭлементы с 999 до 1198: ";
			for (int i = 999; i <= 1198; i++)
			{
				cout << X[i] << ' ';
			}
			cout << "\n\n";
			break;
		}
		case 5:
		{
			const int nMax = 150;
			int X[nMax];
			int n;
			do
			{
				cout << "Введите размер массива (макс 150):";
				cin >> n;
			} 
			while (n > 150);
			for (int i = 0; i < n; i++)
			{
				cout << "Вектор: [" << i << "] = ";
				cin >> X[i];
			}
			cout << "Сумма чисел взодящий в промежуток от -5 до 5 включительно: ";
			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				if (X[i] > -5 && X[i] <= 5)
				{
					sum = sum + X[i];
				}
			}
			cout << sum;
			cout << "\n\n";
			break;
		}
		default:
		{
			cout << "Этого числа нет в списке.";
			cout << "\n\n";
			break;
		}
		}
	} while (choice != 0);
}
