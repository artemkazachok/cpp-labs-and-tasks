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
	double y;
m:	cout << "¬ведите переменную y: ";
	cin >> y;
	if (y == 0)
	{
		goto m;
	}
	double result;
	result = (x * x - 7 * x + y) / y;
	cout << "ќтвет:" << result << endl;
	system("pause");
	return 0;
	

}