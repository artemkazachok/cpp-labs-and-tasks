#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double x;
	cout << "¬ведите переменную x: ";
	cin >> x;
	double a;
	cout << "¬ведите переменную a: ";
	cin >> a;
	const int b = 3;
	const int c = 3;
	double result;
	result = pow(x, 2) - (a * x) + b - c;
	cout << "ќтвет: " << result << endl;
	system("pause");
	return 0;


}