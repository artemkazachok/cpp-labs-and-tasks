#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    int n = 10;
	double* X = new double[n]{3.24, -0.16, 2.28, 0.16, 3.22, 7.14, 2.88, -3.20, 0.99, -4.15};
	double min = X[0];
	int ind = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > X[i])
		{
			min = X[i];
			ind = i;
		}
	}
	cout << "Номер минимального массива: [" << ind << "]" << endl;
	int IndFirstNegative, IndSecondNegative;
	double FirstNegative,SecondNegative;
	bool first = false, second = false;
	for (int i = 0; i < n && first == false; i++)
	{
		if (0 > X[i])
		{
			FirstNegative = X[i];
			IndFirstNegative = i;
			first = true;
		}
	}
	for (int i = IndFirstNegative + 1; i < n && second == false; i++)
	{
		if (0 > X[i])
		{
			SecondNegative = X[i];
			IndSecondNegative = i;
			second = true;
		}
	}
	cout << "Первый: " << FirstNegative << endl << "Второй: " << SecondNegative << endl;
	double result = 0;
	for (int i = IndFirstNegative + 1; i < IndSecondNegative; i++)
	{
		result = result + X[i];
	}
	cout << "Сумма элементов массива, расположенных между первым и вторым отрицательными элементами: " << result << endl;
	for (int i = 0, j = 0; i < n; i++)
	{
		if (1 > fabs(X[i]))
		{
			double t = X[j];
			X[j] = X[i];
			X[i] = t;
			j++;// мы заполняем в первые массивы элементы которые не превышает 1
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << X[i] << ' ';
	}
	cout << endl;
	delete[] X;
	X = NULL;
	system("pause");
	return 0;
}