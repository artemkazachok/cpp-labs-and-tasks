#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 4, m = 3;
	double X[n][m] = { {12.34 , -5.678, 0.643}, {99.12, 7.14, 3.17 }, {16.09, 8, 42.5}, {3.76, 61.23, 44.50} };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << X[i][j];
			if (j < m - 1)
			{
				cout << "; ";
			}
		}
		cout << endl;
	}
	cout << "New vision of array:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 2 || j == 2)
			{
				cout << "X[" << i << "][" << j << "] = " << X[i][j] << endl;
			}
		}
	}

}