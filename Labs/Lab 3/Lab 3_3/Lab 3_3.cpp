#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double z, x, y;
	cout << "1 Ветка: z < -1, x = -z/3\n2 Ветка: z => -1, x = |z|\n";
	cout << "\nВведите z: ";
	cin >> z;
	if (z < -1)
	{
		x = -z / 3;
		cout << "Вы выбрали 1 ветку\n";
	}
	else
	{
		if (z >= -1)////
		{
			x = abs(z);
			cout << "Вы выбрали 2 ветку\n";
		}
	}
	y = log((x + 0.5)) + (exp(x) - exp(-x));
	cout << "\nРезультат:" << y << endl;
	system("pause");
	return 0;


}
