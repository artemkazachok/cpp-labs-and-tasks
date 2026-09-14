#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Итерация № i\ti^2\tsqrt(i)\n-------------------------------\n";
	int i = 0;// cоздаем счеткик до цикла, заранее
	while (i < 10)//пишем проверку до начала цикла
	{//даст результат ЛОЖНО ("не верно", false), то ниженаписанное тело цикла выполнится ни разу
		cout << "Итерация № " << i << ":\t" << pow(i, 2) << '\t' << sqrt(i) << endl;
		i++;//изменять счетчик цикла надо в ТЕЛЕ цикла while-do (обычно в конце тела цикла, то есть в конце итерации цикла)

	}

	cout << "-------------------------------\n\tЦикл while-do завершен.\n";
	system("pause");
	return 0;


}