#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Интерация № i\ti^2\tsqrt(i)\n-------------------------------\n";
	// создадим цикл на 16 итернаций: счетчик цикла изменяется с 15 до 0 включетельно
	for (int i = 15; i > -1; i = i - 1)
	{// в теле цикла печатается номер итерации, это же число возводит в квадрат и из него извлекается квадратный корень
		cout << "Интерация № " << i << ":\t" << pow(i, 2) << '\t' << sqrt(i) << endl;
	}

	cout << "-------------------------------\n\tЦикл завершен.\n";
	system("pause");
	return 0;
}