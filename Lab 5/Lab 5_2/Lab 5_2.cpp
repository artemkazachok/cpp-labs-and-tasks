#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int a, b, max, result;
	do
	{
		cout << "Введите а не меньше нуля: ";
		cin >> a;
	} 
	while (a < 0);
	do
	{
		cout << "Введите b не меньше нуля: ";
		cin >> b;
	} 
	while (b < 0);
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	for (int i = 1; ; i++)
	{
		result = max * i;
		if (result % a == 0 && result % b == 0)
		{
			cout << "Наименьшое общее кратное этих чисел: " << result << endl;
			system("pause");
			return 0;
		}
	}
}