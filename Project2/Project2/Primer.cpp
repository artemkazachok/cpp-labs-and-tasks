#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, z, s;
m:	cout << "¬ведите x: ";
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;
	cout << "¬ведите z: ";
	cin >> z;
	if ((pow(x, 2) + pow(y, 2) + 2) == 0)
	{
		goto m;
	}
	s = ((pow(9 + pow(x - y, 2), 1.0 / 3.0)) / (pow(x, 2) + pow(y, 2) + 2) - (exp(abs(x - y)) * pow(tan(z), 3)));
	cout << "–езультат: " << s << endl;
	system("pause");
	return 0;



}