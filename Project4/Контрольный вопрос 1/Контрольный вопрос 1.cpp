#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y;
	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;
	(x > 0 && y > 0) ? x = y : x = x / 3;
	cout << "x= " << x << endl;
	cout << "y= " << y << endl;
	system("pause");
	return 0;
	
}