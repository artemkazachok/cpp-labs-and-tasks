#define _CRT_SECURE_NO_WARNINGS//директива препроцессору: разрешить использовать "старые" функции работы с символами и строками
#include <iostream>
#include <string.h>//библиотека обработки строк
#include <time.h>
#include <stdlib.h>
#include <ctype.h>//библиотека обработки символов 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Печать кодов ASCII и символов:\n";
	for (unsigned short int a = 0; a < 256; a++)
	{
		cout << a << '\t' << (char)a << endl;//(char)a - явное приведение числовой переменной а к типу (char), то есть символьному виду
	}

	cout << "\nГенерация случайных символов:\n";
	srand(time(NULL));
	char mas[1000];//создать массив для хранения 1000 символов
	for (int i = 0; i < 1000; i++)
	{
		mas[i] = (char)(rand() % 256);//заполнить каждый элемент массива случайным символом
		cout << mas[i] << ' ';//распечатать значение, хранимое в каждом элементе массива
	}

	cout << "\n\nГенерация ЗАГЛАВНЫХ английских букв:\n";
	for (int i = 0; i < 1000; i++)
	{
		mas[i] = (char)(65 + rand() % (90 - 65 + 1));
		cout << mas[i] << ' ';
	}

	cout << "\n\nГенерация текста из английских букв:\n";
	mas[0] = '\t';
	mas[1] = (char)(65 + rand() % 26);
	for (int i = 2; i < 999; i++)
	{
		if (rand() % 17 == 0 & i != 2)//большие буквы встречаются реже маленьких, зададим частоту 1 к 17. За первой большой буквой должна стоять маленькая
		{
			mas[i] = (char)(65 + rand() % 26);// если i-тая буква большая
			mas[i - 1] = ' ';//то перед ней должен быть пробел
			mas[i - 2] = '.';//а перед пробелом пусть завершается точкой предыдущее предложение
		}
		else
		{
			if (rand() % 7 == 0 & mas[i - 1] != ' ')
			{
				mas[i] = ' ';
			}
			else
			{
				mas[i] = (char)(97 + rand() % (122 - 97 + 1));
			}
		}
	}
	mas[999] = '.';

	for (int i = 0; i < 1000; i++)
	{
		cout << mas[i];
	}
	cout << endl << endl;

	char s[] = "I am going to school now. The sun is shining! Is it temperature cold? Future - unknowing...";
	char* p;
	cout << s << endl;
	char d[] = " .,!?;:()-";
	p = strtok(s, d);
	while (p != NULL)
	{
		cout << p << endl;
		p = strtok(NULL, d);
	}
	cout << "\nВ изначальной строке осталось:\n" << s << endl;

	char* s0 = new char[100];
	char* s1 = new char[50];
	cout << "\nВведите текст:\n";
	cin.getline(s0, 100);
	cout << s0 << endl;
	cout << "\nВведите искомую подстроку (слова):\n";
	cin.getline(s1, 50);
	cout << s1 << endl;
	if (strstr(s0, s1) != NULL)
	{
		cout << "Есть подстрока " << s1 << " в строке: " << s0 << endl;
	}
	else
	{
		cout << "Подстроки " << s1 << " нет в строке: " << s0 << endl;
	}

	system("pause");
	return 0;
}