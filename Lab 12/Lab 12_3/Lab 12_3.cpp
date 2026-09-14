#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <cctype>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a;
	do
	{
		cout << "1. 1 Задание" << endl;
		cout << "2. 2 Задание" << endl;
		cout << "3. 3 Задание" << endl;
		cout << "4. 4 Задание" << endl;
		cout << "0. Завершить работу программы:" << endl;
		cout << endl;
		cout << "Выберите пункт в меню: ";
		cin >> a;
		cout << '\n';
		switch (a)
		{
		case 1:
		{
			char n[1000];
			cin.ignore();
			cout << "Введите текст: ";
			cin.getline(n,1000);
			int count = 0;
			for (int i = 0; n[i] != '\0'; i++)
			{
				if (isdigit((unsigned char)n[i]))
				{
					count++;
				}
			}
			cout << count << endl;
			cout << '\n';
			cout << '\n';
			break;
		}
		case 2:
		{
			char X[50][100];
			char T[1000];
			int count = 0, countword = 0;
			cin.ignore();
			cout << "Введите текст: ";
			cin.getline(T, 1000);
			char* copy;
			copy = strtok(T, ", .;:?!#$%^&*()_+-<>[]");
			while (copy != 0)
			{
				strcpy(X[count], copy);
				copy = strtok(NULL, ", .;:?!#$%^&*()_+-<>[]");
				count++;
			}
			for (int i = 0; i < count; i++)
			{
				if (strlen(X[i]) == 3)
				{
					countword++;
				}
			}
			cout << "Кол-во слов длиной 3 символа: " << countword;
			cout << '\n';
			cout << '\n';
			break;

		}
		case 3:
		{
			char n[1000];
			cin.ignore();
			cout << "Введите текст: ";
			cin.getline(n, 1000);
			int countwords = 0, count = 0, end = 0, start = 0, countconson = 0, countvowels = 0, countfin = 0;
			char consonants[50] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
			char vowels[15] = "aeiouAEIOU";
			for (int i = 0; n[i] != '\0'; i++)
			{
				int j = i;
				for (start = i; isalpha((unsigned char)n[j]) && n[j] != '\0'; j++)
				{
					countwords++;
				}
				if (countwords >= 1)
				{
					end = j - 1;
					count++;
					countwords = 0;
					i = j - 1;
					for (int k = start; k <= end; k++)
					{
						if (strchr(vowels, n[k]))
						{
							countvowels++;
						}
						if (strchr(consonants, n[k]))
						{
							countconson++;
						}
					}
					if (countvowels == countconson)
					{
						cout << "Cлово: ";
						for (int i = start; i <= end; i++)
						{
							cout << n[i];
						}
						countfin++;
						cout << " и его порядковый номер " << count << endl;
					}
				}
			}
			if (countfin == 0)
			{
				cout << "Нет слов с одинаковым кол-вом гласн и согл.";
			}
			cout << '\n';
			cout << '\n';
			break;
		}
		case 4:
		{
			char X[50][100];
			int N[50];
			cin.ignore();
			char n[1000];
			cout << "Введите текст: ";
			cin.getline(n,1000);
			char* copy;
			copy = strtok(n, " ,./!?()");
			int i = 0;
			int count = 0;
			while (copy != NULL)
			{
				strcpy(X[i], copy);
				copy = strtok(NULL, " ,./!?()");
				count++;
				i++;
			}   
			for (int i = 0; i < count; i++)
			{
				N[i] = strlen(X[i]);
			}
			char wordcopy[100];
			for (int i = 0; i < count; i++)
			{
				for (int j = 0; j < count - 1 - i; j++)
				{
					if (N[j] < N[count - 1 - i])
					{
						strcpy(wordcopy, X[j]);
						strcpy(X[j], X[count - 1 - i]);
						strcpy(X[count - 1 - i], wordcopy);
						int copyn = N[j];
						N[j] = N[count - 1 - i];
						N[count - 1 - i] = copyn;
					}
				}
			}
			cout << endl;
			cout << "Слова в порядке убывания: ";
			for (int i = 0; i < count; i++)
			{
				cout << X[i] << '\t';
			}
			cout << '\n';
			cout << '\n';
			break;
		}
		}

	} while (a != 0);
	system("pause");
	return 0;
}