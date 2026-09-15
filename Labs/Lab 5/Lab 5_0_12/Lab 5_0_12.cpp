#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long long int n = 0;
	long double x, a, b, h;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	if (a > b)
	{
		long double t = a;
		a = b;
		b = t;
		cout << " Значения а и b поменяты.\n";
	}
	cout << "Введите кол-во шагов между a и b (n <= 20, так как n влияет на расчет факториала): ";
	cin >> n;
	if (n < 0)
	{
		n = -n;
		cout << "Количество шагов должно быть неотрицательным. n: " << n << endl;
	}
	h = (b - a) / n;
	long double s0 = 0, S = 0, Y = 0, raznost = 0;
	cout << "|\tx\t|\tS(x)\t|\tY(x)\t|\t|S(x)-Y(x)|\t|\n";
	for (x = a; x <= b; x = x + h)
	{
		for (int i = 0; i < n + 1; i += 2)
		{
			unsigned long long int f = 1;
			for (int j = 1; j < i + 1; j++)
			{
				f = f * j;
			}
			s0 = pow(x, i) / f;
			S = S + s0;
		}
		Y = (exp(x) + exp(-x)) / 2;
		raznost = fabs(S - Y);
		cout << "|\t" << x << "\t|\t" << S << "\t|\t" << Y << "\t|\t" << raznost << "\t|\n";
		S = 0;
	}
	system("pause");
	return 0;
}