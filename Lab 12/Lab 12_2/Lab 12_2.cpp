#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "1. 1 Задание" << endl;
		cout << "2. 2 Задание" << endl;
		cout << "0. Завершить работу программы:" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			char* s0 = new char[100];
			char s1;
			cin.ignore();
			cout << "Введите текст: ";
			cin.getline(s0, 100);
			cout << "Введите искомый символ в тексте: ";
			cin >> s1;
			if (strchr(s0, s1) != NULL)
			{
				cout << "Есть подстрока " << s1 << " в строке: " << s0 << endl;
			}
			else
			{
				cout << "Подстроки " << s1 << " нет в строке: " << s0 << endl;
			}
			cout << '\n';
			break;
		}
		case 2:
		{
			char* a = new char[100];
			cin.ignore();
			cout << "Введите текст: ";
			cin.getline(a, 100);
			char* b = new char[20];
			cout << "Введите разделитель: ";
			cin.getline(b, 20);
			char* token;
            token = strtok(a,b);
			while (token != NULL)
			{
				cout << '[' << token << ']' << endl;
				token = strtok(NULL, b);//NULL начинаем с той позиции на которой закончили
			}
			break;

		}
		}
		
	} while (n != 0);
}