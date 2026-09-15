#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n = 10;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	int Max = A[0], Min = A[0], indexmax = 0, indexmin = 0;
	for (int i = 0; i < n; i++)
	{
		if (Max < A[i])
		{
			Max = A[i];
			indexmax = i;
		}
		if (Min > A[i])
		{
			Min = A[i];
			indexmin = i;
		}
	}
	if (indexmin > indexmax)
	{
		int d = indexmin;
		indexmin = indexmax;
		indexmax = d;
	}
	for (int start = indexmin + 1, end = indexmax - 1; start < end; start++, end--)// диапозон
	{
		    int t = A[start];
			A[start] = A[end];
			A[end] = t;
	}
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << ' ';
	}
	delete[] A;
	A = NULL;
	system("pause");
	return 0;
}