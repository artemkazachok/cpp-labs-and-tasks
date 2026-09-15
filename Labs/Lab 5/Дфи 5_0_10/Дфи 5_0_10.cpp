#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	unsigned long long int n = 0;
	long double x, eps;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите требуемую точность вычислений: ";
	cin >> eps;
	long double y = 1, yRez = 0;//первый член ряда и начальное значениесуммы
	while (fabs(y) > eps)
	{
		cout << "n: " << n;
		unsigned long long int f = 1;//для расчета факториала в каждой итерации внешнего цикла
		for (int i = 1; i < n + 1; i++)
		{
			f = f * i;
		}
		cout << ", Факториал " << n << " = " << f;
		y = pow(x, n) / f;//вычисление очередного члена ряда
		yRez = yRez + y;
		cout << "\t\t\ty: " << y << "\t\t\tyRez: " << yRez << endl;
		n = n + 2;//степень икса возрастает с шагом +2
	}
	long double yRez2 = (exp(x) + exp(-x)) / 2;
	cout << " Точность: " << eps << ", Итоговая сумма: " << yRez << ", Расчет по формуле2: " << yRez2 << endl;
	system("pause");
	return 0;
}