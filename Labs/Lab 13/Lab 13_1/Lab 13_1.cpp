#include <iostream>
using namespace std;
int Akkerman(int, int);//прототип функции Aккермана

int main()
{
	int x, y;
	bool f = false;
	do
	{
		cout << "Enter x (x > 0): ";
		cin >> x;
		cout << "Enter y (y > 0): ";
		cin >> y;
		int z = Akkerman(x, y);
		cout << "Akkerman: " << z << endl;
		cout << "To continue (1 - true, 0 - false)? ";
		cin >> f;
	} while (f == true);
	system("pause");
	return 0;
}
int Akkerman(int m, int n)//определение функции Аккермана
{
	if (m < 0)
	{
		m = -m;
	}
	if (n < 0)
	{
		n = -n;
	}
	if (m == 0)
	{
		return n + 1;
	}
	if (m > 0)
	{
		if (n == 0)
		{
			Akkerman(m - 1, 1);
		}
		if (n > 0)
		{
			Akkerman(m - 1, Akkerman(m, n - 1));
		}
	}
}