#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, r, s;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	r = pow(cos(x), 4) + pow(sin(y), 2) + (1.0 / 4.0) * pow(sin(2 * x), 2) - 1;
	s = sin(y + x) * sin(y - x);
	cout << "Ответ 1 примера: " << r << endl;
	cout << "Ответ 2 примера: " << s << endl;
	system("pause");
	return 0;




}