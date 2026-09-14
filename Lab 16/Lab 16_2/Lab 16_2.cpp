#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char f[1000];
	char filename[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\Казачок16лаб2задание.txt";
	ifstream read(filename, ios::in);
	char filenametwo[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\Казачок16лаб2заданиеТире.txt";
	ofstream add(filenametwo, ios::out | ios::app);
	if (!read and !add)
	{
		cout << "Файл " << filename << "для записи не удалось открыть.\n";
		system("pause");
		return 0;
	}
	read.getline(f, 1000);
	while (!read.eof())
	{
		if (f[0] == '-')
		{
			add << f << endl;
		}
		read.getline(f, 1000);
	}
	read.close();
	read.open(filename);
	read.getline(f, 1000);
	while (!read.eof())
	{
		if (f[0] != '-')
		{
			add << f << endl;
		}
		read.getline(f, 1000);
	}
	read.close();
	add.close();
	cout << "Файл" << filename << "успешно прочитан и закрыт." << endl;
	cout << "Вывод готового файла: " << endl;
	ifstream readtire(filenametwo, ios::in);
	if (!readtire)
	{
		cout << "Файл " << filename << "для записи не удалось открыть.\n";
		system("pause");
		return 0;
	}
	readtire.getline(f, 1000);
	while (!readtire.eof())
	{
		cout << f << endl;
		readtire.getline(f, 1000);
	}
	readtire.close();
	cout << "Файл " << filenametwo << "прочитан и закрыт" << endl;
	system("pause");
	return 0;
}