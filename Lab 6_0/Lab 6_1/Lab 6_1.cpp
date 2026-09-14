#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	const int n = 16;
	double X[n];
	for (int i = 0; i < n; i++)
	{
		X[i] = rand();
		cout << X[i] << endl;
	}
	double max = X[0], min = X[0];
	int indmax, indmin;
	for (int i = 0; i < n; i++)
	{

		if (X[i] > max)
		{
			max = X[i];
			indmax = i;
		}
		if (X[i] < min)
		{
			min = X[i];
			indmin = i;
		}
	}
	cout << "\nМаксимальное: " << max << "\tИндекс: " << indmax << "\nМинимальное: " << min << "\tИндекс: " << indmin << endl;
	system("pause");
	return 0;


}