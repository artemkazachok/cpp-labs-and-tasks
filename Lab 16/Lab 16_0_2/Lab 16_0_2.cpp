#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	ofstream f("D:\\Нужное мне\\оаип мое\\Lab 16\\A1.txt", ios::out | ios::trunc);
	if (!f)
	{
		cout << "Error.\n";
		system("pause");
		return 0;
	}
	cout << "Number of random numbers: ";
	int n;
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		f << (rand() % 100) << ' ';
	}
	f.close();
	cout << "file with random numbers ready.\nThis numbers are:\n";
	ifstream f0("D:\\Нужное мне\\оаип мое\\Lab 16\\A1.txt", ios::in);
	if (!f0)
	{
		cout << "Error0.\n";
		system("pause");
		return 0;
	}
	int k;
	f0 >> k;
	while (!f0.eof())
	{
		cout << k << ' ';
		f0 >> k;
	}
	f0.close();
	cout << "\nFile was read.\n";
	ofstream f1("D:\\Нужное мне\\оаип мое\\Lab 16\\A2.txt", ios::out | ios::trunc);
	if (!f1)
	{
		cout << "Error1.\n";
		system("pause");
		return 0;
	}
	ifstream f2("D:\\Нужное мне\\оаип мое\\Lab 16\\A1.txt", ios::in);
	if (!f2)
	{
		cout << "Error2.\n";
		system("pause");
		return 0;
	}
	f2 >> k;
	while (f2)
	{
		if (k % 2 == 0)
		{
			f1 << k << ' ';
		}
		f2 >> k;
	}
	_fcloseall();//закрыть все файлы
	cout << "\nResult file ready.\n";
	ifstream f3("d:\\A2.txt", ios::in);
	if (!f3)
	{
		cout << "Error3.\n";
		system("pause");
		return 0;
	}
	f3 >> k;
	while (f3)
	{
		cout << k << ' ';
		f3 >> k;
	}
	f3.close();
	cout << "\nResult file was read.\n";
	system("pause");
	return 0;
}