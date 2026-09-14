#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Интеграция № i\ti^2\tsqrt(i)\n-------------------------------\n";
	// создадим цикл на 10 итераций: c нулевой до девятой итернации включительно
	for (int i = 0; i < 10; i = i + 1)
	{// в теле цикла печатается номер итернации, это же число возводится в квадрат и из него извлекается квадратный корень 
		cout << "Интернация № " << i << ":\t" << pow(i, 2) << '\t' << sqrt(i) << endl;
	}

	cout << "-------------------------------\n\tЦикл завершен.\n";
	system("pause");
	return 0;
}