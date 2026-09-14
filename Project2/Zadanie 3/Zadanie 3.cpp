#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double l, result;
m:	cout << "Введите длину маятника: ";
	cin >> l;
	const double g = 9.81;
	const double pi = 3.14159265358979323846;
	if (l <= 0)
	{
		goto m;
	}
	result = (2 * pi) * sqrt(l / g);
	cout << "Период колебания маятника равна: " << result << endl;
	system("pause");
	return(0);
}