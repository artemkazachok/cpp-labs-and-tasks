#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 93;
	unsigned long long int m[n];
	m[0] = 0;//заполняем значение первого числа Фибоначчи (помещаем в массив)
	m[1] = 1;//заполняем значение второго числа Фибоначчи (помещаем в массив)
	for (int i = 2; i < n; i++)//в массиве идем от третьего до последнего элемента
	{
		m[i] = m[i - 1] + m[i - 2];//очередное число есть сумма двух предыдущих
	}
	cout << "Числа Фибонанччи:\n";
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t\t" << m[i] << endl;//напечатаем номер числа Фибоначчи и его рассчитанное значение
	}
	system("pause");
	return 0;
}