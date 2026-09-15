#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Итерация № i\ti^2\tsqrt(i)\n------------------------------\n";
	for (int i = 0; i < 50; i++)//создать цикл на 50 итераций от 0 до 49 включительно
	{
		cout << "Итерация № " << i << " началась:\t" << pow(i, 2) << '\t' << sqrt(i) << endl;
		if (i == 5)
		{
			cout << "Сработал continue.\n";
			continue;
		}
		if (i == 10)
		{
			cout << "Сработал break.\n";
			break;

		}
		cout << "Итерация № " << i << " завершена.\n";//выражение в конце итерации
	}
	cout << "------------------------------\n\tЦикл for завершен.\n";
	system("pause");
	return 0;
}