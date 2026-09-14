#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleOutputCP(1251);
	double m;
	cout << "Введите массу массу в 10^24: ";
	cin >> m;
	cout << "Массу не менее " << m << "*10e24 имеют следующие планеты: \n";
	if (m <= 1)
	{
		cout << "Марс - 1\n";
	}
	if (m <= 5)
	{
		cout << "Венера - 5\n";
	}
	if (m <= 6)
	{
		cout << "Земля - 6\n";
	}
	if (m <= 87)
	{
		cout << "Уран - 87\n";
	}
	if (m <= 103)
	{
		cout << "Нептун - 103\n";
	}
	if (m <= 570)
	{
		cout << "Сатурн - 570\n";
	}
	if (m <= 1907)
	{
		cout << "Юпитер - 1907\n";
	}

}