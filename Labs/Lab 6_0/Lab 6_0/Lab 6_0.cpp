#include <iostream>
#include <Windows.h>
#include <time.h>//подключить библиотеку дл€ работы со временем и датами
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));//рандомизируем генерацию рандомных значений измен€ющимс€ значением текущего времени
	const int n = 10;
	int Y[n], a, b;
	cout << "¬ каком диапозоне генерировать случайные числа ?\n ¬ключительно от : ";
	cin >> a;
	cout << "¬ключительно до: ";
	cin >> b;
	for (int i = 0; i < n; i++)
	{
		Y[i] = a + rand() % (b - a + 1);//выкчить формулу генерации случайного числа в диапозоне от a до b включительно
		cout << "Y[" << i << "]: " << Y[i] << endl;
	}
	system("pause");
	return 0;
}