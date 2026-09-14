#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n0 = 20;
	struct karandash
	{
		char name[n0];// название модели карандаша (20 букв)
		double length;//длина карандаша в сантиметрах
		float weight[2];//weight[0] - вес нового карандаша ( в граммах); weight[2] - вес карандаша сейчас (в граммах)
	};//внутри структуры struct могут быть поля-массивы, как weight
	int n;
	cout << "Сколько у вас карандашей? ";
	cin >> n;
	if (n < 0)
	{
		n = -n;
		cout << "Количество карандашей может быть только неотрицательным: " << n << endl;
	}
	karandash* pachka = new karandash[n];//пачка из n карандашей (динамический массив)
	if (pachka == NULL)
	{
		cout << "Программа завершает работу ввиду проблем с памятью.\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите название модели (до " << n0 << " символов без пробелов): ";
		cin >> pachka[i].name;
		cout << "Введите длину карандаша (в см): ";
		cin >> pachka[i].length;
		cout << "Введите вес нового карандаша и потом введите его вес сейчас (в граммах): ";
		for (int j = 0; j < 2; j++)
		{
			cin >> pachka[i].weight[j];
		}
	}
		cout << "\nКарандаши:\n";
		for (int i = 0; i < n; i++)
		{
			cout << pachka[i].name << " | " << pachka[i].length << " | ";
			for (int j = 0; j < 2; j++)
			{
				cout << pachka[i].weight[j] << " | ";
			}
			cout << endl;
		}
		char name0[n0];
		int z = 0;//счетчик совпадений
		cout << "\nКарандаш с каким названием вы ищете: ";
		cin >> name0;
		for (int i = 0; i < n; i++)
		{
			int w = strcmp(pachka[i].name, name0);
			if (w == 0)
			{
				z++;
			}
		}
		if (z == 0)
		{
			cout << "Карандаша с таким названием в пачке нет.\n";
		}
		else
		{
			cout << "В пачке есть " << z << " карандашей с точно таким же названием.\n";
		}
		delete[] pachka;//удаляем динамический одномерный массив
		system("pause");
		return 0;
}