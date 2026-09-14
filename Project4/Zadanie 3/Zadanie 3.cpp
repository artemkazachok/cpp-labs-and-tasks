#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "\nГруппа A: отрицательные числа больше -50\nГруппа B: 0 и положительные числа больше 100\nГруппа C: числа, которые делятся на 8\nГруппа D: все остальные числа.\n"; 
	int number, stop;
m:	cout << "Введите число:";
	cin >> number;
	if (number > -50 && number < -1)
	{
		cout << "Группа A: " << number << endl;
		cout << "Вы хотите продолжить? \n1-Да\n2-Нет\n";
		cin >> stop;
		switch (stop)
		{
		case 1:
		{
			cout << "Да";
			goto m;
			break;
		}
		case 2:
		{
			cout << "Нет";
			system("pause");
			return 0;
		}
		}
	}
	else
	{
		if (number == 0 || number > 100)
		{
			cout << "Группа B: " << number << endl;
			cout << "Вы хотите продолжить? \n1-Да\n2-Нет\n";
			cin >> stop;
			switch (stop)
			{
			case 1:
			{
				goto m;
				break;
			}
			case 2:
			{
				system("pause");
				return 0;
				break;
			}
			}
		}
		else
		{
			if (number % 8 == 0)
			{
				cout << "Группа C: " << number << endl;
				cout << "Вы хотите продолжить? \n1-Да\n2-Нет\n";
				cin >> stop;
				switch (stop)
				{
				case 1:
				{
					goto m;
					break;
				}
				case 2:
				{
					system("pause");
					return 0;
				}
				}
			}
			else
			{
				cout << "Группа D: " << number << endl;
				cout << "Вы хотите продолжить? \n1-Да\n2-Нет\n";
				cin >> stop;
				switch (stop)
				{
				case 1:
				{
					goto m;
					break;
				}
				case 2:
				{
					system("pause");
					return 0;
				}
				}
			}
		}

	}
	
	
}