#include <iostream>
using namespace std;
int findElementInMas(double* m, int n, double key)//поиск значения key в веществееном массиве размерности n (штук) элементов
{
	for (int i = 0; i < n; i++)
	{
		if (m[i] == key)
		{
			return i;
		}
	}
	return -1;//подошедшего значения не нашли: вернем индекс -1
}
int binaryFindElementInMas(double* m, int n, double key)
{
	int first = 0, last = n - 1, centr = (first + last) / 2;
	while (first <= last)
	{
		cout << "centr: " << centr << endl;
		if (m[centr] == key)
		{
			cout << "m[centr] == key\n";
			return centr;
		}
		else
		{
			cout << "else m[centr] != key, то есть m[centr] > key или m[centr] < key\n";
			if (m[centr] > key)
			{
				cout << "m[centr] > key first:" << first << " centr: " << centr << " last: " << last << endl;
				last = centr - 1;
			}
			else
			{
				cout << "m[centr] < key first: " << first << " centr: " << centr << " last: " << last << endl;
				first = centr + 1;
			}
			centr = (first + last) / 2;
		}
	}
	cout << "return -1;//подошедшего значения не нашли: вернем индекс -1\n";
	return -1;
}
void bubbleSort(double* m, int n)
{
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = 0; i < n - 1 - j; j++)
		{
			if (m[i] > m[i + 1])
			{
				double t = m[i];
				m[i] = m[i + 1];
				m[i + 1] = t;
			}
		}
	}
}
void printMas(double* m, int n)
{
	cout << "Печать массива:\n";
	for (int i = 0; i < n; i++)
	{
		cout << '[' << i << "]:" << m[i] << '\t';
	}
	cout << endl;
}
int main()
{
	system("chcp 1251");
	const int size = 10;
	double ar[size] = { 1.5, 0.7, 9.87, 5.3, 0.01, -7.35, 9.87, -0.0908, 23.7, 6.22 };
	printMas(ar, size);
	double k;
	cout << "Введите значение для поиска в массиве: ";
	cin >> k;
	int index = findElementInMas(ar, size, k);
	if (index == -1)
	{
		cout << "Искомое значение " << k << " не обнаружено в массиве.\n";
	}
	else
	{
		cout << "Искоемое значение " << k << " обнаружено в массиве по номеру: " << index << endl;
	}
	bubbleSort(ar, size);
	printMas(ar, size);
	cout << "Если массив отсортирован по возрастанию, введите значение для бинарного поиска в массиве: ";
	cin >> k;
	index = binaryFindElementInMas(ar, size, k);
	if (index == -1)
	{
		cout << "Искомое значение " << k << " не обнаружено в массиве.\n";
	}
	else
	{
		cout << " Искомое значение " << k << " обнаружено в массиве по номеру: " << index << endl;
	}
	system("pause");
	return 0;
}