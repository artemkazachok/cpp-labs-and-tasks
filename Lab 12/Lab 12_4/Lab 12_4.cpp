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
	char X[1000];
	int firstnumber = 0, lastnumber;
	cout << "Введите предложение: ";
	cin.getline(X, 1000);
	if (strlen(X) % 4 == 0)
	{
		lastnumber = strlen(X);
		firstnumber = strlen(X) / 2;
		for (int i = 0, j = firstnumber; i < firstnumber && j < lastnumber; i++,j++)
		{
			char copy = X[i];
			X[i] = X[j];
			X[j] = copy;
		}
		cout << "Измененное предложение: ";
		for (int i = 0; i < strlen(X); i++)
		{
			cout << X[i];
		}
		cout << '\n';
	}
	else
	{
		cout << "Предложение не кратно 4," << endl;
	}
	system("pause");
	return 0;
}