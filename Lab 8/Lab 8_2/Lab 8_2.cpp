#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int m;
	do
	{
		cout << "Введите размер массива: ";
		cin >> m;
	} 
	while (m <= 0);
	int* A = new int[m];
	if (A == NULL)
	{
		cout << "Не удалось выделить память под массив.\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < m; i++)
	{
		cout << "A[" << i << "]: ";
		cin >> A[i];
	}
	int finmin = -1;
	for (int i = 0; i < m; i++)
	{
		if (A[i] < 0)
		{
			finmin = i;
		}
	}
	int result = 0;
	if (finmin != -1)
	{
		for (int i = finmin + 1; i < m; i++)
		{
			result += A[i];
		}
	}
	else
	{
		result = 0;
	}
	cout << "Сумму элементов массива, расположенных после последнего отрицательного элемента: " << result << endl;
	delete[] A;
	A = NULL;
	system("pause");
	return 0;
}