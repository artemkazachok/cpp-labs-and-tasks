#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	long double a, b, h;
	int n;
	cout << "¬ведите начальное a: ";
	cin >> a;
	cout << "¬ведите конечное b: ";
	cin >> b;
	cout << "¬ведите кол-во шагов между a и b (n <= 20, так как n вли€ет на расчет факториала): ";
	cin >> n;
	n = abs(n);
	cout << "¬ведите размер шага: ";
	cin >> h;
	h = abs(h);
	if (a > b)
	{
		long double t = a;
		a = b;
		b = t;
		cout << " «начени€ a и b были помен€ты местами\n";
	}
	const double pi = 3.141592;
	cout << "|\tx\t|\tS(x)\t|\tY(x)\t|\t|S(x)-Y(x)|\t|\n";
	for (long double x = a; x <= b; x += h)
	{
		long double s = 0;
		
			
			for (int k = 1; k <= n; k++)
			{
				s += pow((-1), k) * (cos(k * x) / pow(k, 2));
			}
			long double y = 1.0 / 4.0 * (pow(x, 2) - (pow(pi, 2) / 3));
			long double ys = y - s;
			cout << "|\t" << x << "\t|\t" << s << "\t|\t" << y << "\t|\t" << ys << "\t|\n";
	}
	system("pause");
	return 0;
}