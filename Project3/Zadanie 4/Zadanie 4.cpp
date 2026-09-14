#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, v, max1, min1;
	cout << "Введенные числа не должны совпадать!";
m:	cout << "\nВведите x: ";
	cin >> x;
n:	cout << "Введите y: ";
	cin >> y;
	if (x == y)
	{
		cout << "Введённые числа не должны совпадать, поробуйте ещё раз.";
		goto m;
	}
	else
	{
		if (x == 0)
		{
			cout << "x не должен быть равен нулю, попробуйте ещё раз.";
			goto m;
		}
		else
		{
			if (y == 0)
			{
				cout << "y не должен быть равен нулю, попробуйте ещё раз.\n";
				goto n;
			}
		}
	}
	max1 = max(x, y);
	cout << "Максимум: " << max1 << endl;
    min1 = min(x, y);
	cout << "Минимум: " << min1 << endl;
	v = max(min(x - y, y - x),0);
	cout << "V = " << v << endl;
	system("pause");
	return 0;

}