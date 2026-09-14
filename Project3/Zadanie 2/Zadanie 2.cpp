#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a1, b1, c1, a2, b2, c2, p1, p2, result1, result2;
	cout << "¬ведите a 1-го треугольника: ";
	cin >> a1;
	cout << "¬ведите b 1-го треугольника: ";
	cin >> b1;
	cout << "¬ведите c 1-го треугольника: ";
	cin >> c1;
	p1 = a1 + b1 + c1 / 2;
	result1 = pow(p1 * (p1 - a1) * (p1 - b1) * (p1 - c1), 1.0 / 2.0);
	cout << "\nѕлощадь 1-го треугольника равна: " << result1 << endl;
	cout << "\n¬ведите a 2-го треугольника: ";
	cin >> a2;
	cout << "¬ведите b 2-го треугольника: ";
	cin >> b2;
	cout << "¬ведите c 2-го треугольника: ";
	cin >> c2;
	p2 = a2 + b2 + c2 / 2;
	result2 = pow(p2 * (p2 - a2) * (p2 - b2) * (p2 - c2), 1.0 / 2.0);
	cout << "\nѕлощадь 2-го треугольника равна: " << result2 << endl;
	if (result1 == result2)
	{
		cout << "\nѕлощади треугольников равны.\n\n";
	}
	else
	{
		if (result1 > result2)
		{
			cout << "\nѕлощадь 1-го треугольнька больше чем у 2-го.\n\n";
		}
		else
		{
			if (result1 < result2)
			{
				cout << "\nѕлощадь 2-го треугольника больше чем у 1-го.\n\n";
			}
		}
	}
	system("pause");
	return 0;


}