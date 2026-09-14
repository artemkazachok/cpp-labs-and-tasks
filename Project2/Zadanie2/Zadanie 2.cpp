#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, z, result;
m:	cout << "¬ведите x: "; // это x который требуетс€ ввести в условии задачи: -2.235e-2
	cin >> x;
	cout << "¬ведите y: ";
	cin >> y;
	cout << "¬ведите z: ";
	cin >> z;
	if (atan(x) + atan(z) == 0)
	{
		goto m;
	}
	result = (exp(abs(x - y)) * pow(abs(x - y), x + y)) / (atan(x) + atan(z)) + pow((pow((x), 6)) + pow(log(y), 2), 1.0 / 3.0);
	cout << "ќтвет: " << result << endl;
	system("pause");
	return 0;

	
}