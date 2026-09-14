#include <iostream>
#include <Windows.h>
#include <set>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	set<int>mySetA;
	set<int>mySetB;
	int a, b;
	do
	{
		cout << "Сколько чисел вы хотите в A: ";
		cin >> a;
	} while (a < 1);
	do
	{
		cout << "Сколько чисел вы хотите в B: ";
		cin >> b;
	} while (b < 1);
	for (int i = 0; i < a; i++)
	{
		int number;
		cout << "Введите число в A [" << i << "]: ";
		cin >> number;
		mySetA.insert(number);
	}
	cout << '\n';
	for (int i = 0; i < b; i++)
	{
		int number;
		cout << "Введите число в B [" << i << "]: ";
		cin >> number;
		mySetB.insert(number);
	}
	cout << '\n';
	int c;
	cout << "Введите число C: ";
	cin >> c;
	cout << '\n';
	int numA, numB;
	bool provA = false, provB = false;
	if (mySetA.upper_bound(c) != mySetA.end())
	{
		numA = *mySetA.upper_bound(c);
		provA = true;
	}
	else
	{
		cout << "Число в множестве A не найдено" << endl;
	}
	if (mySetB.upper_bound(c) != mySetB.end())
	{
		numB = *mySetB.upper_bound(c);
		provB = true;
	}
	else
	{
		cout << "Число в множестве B не найдено" << endl;
	}
	if (provA == true && provB == true)
	{
		if (numA == numB)
		{
			cout << "Числа совпадают!" << endl;
			cout << "Число в множестве A: " << numA << endl;
			cout << "Число в множестве B: " << numB << endl;
		}
		else
		{
			cout << "Числа НЕ совпадают." << endl;
			cout << "Число в множестве A: " << numA << endl;
			cout << "Число в множестве B: " << numB << endl;
		}

	}
	else
	{
		cout << "Нет одного или двух чисел для сравнения." << endl;
	}
	system("pause");
	return 0;

}