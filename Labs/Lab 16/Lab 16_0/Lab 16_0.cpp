#include <iostream>
#include <Windows.h>
#include <fstream>//подключить библиотеку fsteam для чтения-записи файлов в нотации C++
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choice;
	do
	{
		cout << "Выберите пункт в меню: " << endl;
		cout << "1. 1 Пример" << endl;
		cout << "2. 2 Пример" << endl;
		cout << "3. 3 Пример" << endl;
		cout << "4. 4 Пример" << endl;
		cout << "0. Завершить работу программы" << endl;
		cout << "Введит пункт: ";
		cin >> choice;
		cout << '\n';
		switch (choice)
		{
		case 1:
		{
			ofstream f("D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt", ios::out | ios::trunc);//создать поток f для записи файла (output stream - поток для выхода данных из оперативной память в файл)
			if (!f)//не удалось создать поток для записи в файл
			{
				cout << "Файл D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			int n;
			do
			{
				cout << "Введите количество чисел (>0), которые вы хотите записать в файл: ";
				cin >> n;
			} while (n < 1);
			double x;
			for (int i = 0; i < n; i++)
			{
				cout << "Введите число № " << i + 1 << " для записи в файл: ";
				cin >> x;
				f << x << ' ';//собственно запись информации в текстовый файл в нотации C++
			}
			f.close();
			cout << "Файл D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt записан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 2:
		{
			ifstream f("D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt", ios::in);
			if (!f)//не удалось создать поток для записи в файл
			{
				cout << "Файл D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			double y;
			f >> y;
			while (!f.eof())//выполнять тело цикла, пока курсор чтения не достигнет конца файла
			{
				cout << y << endl;
				f >> y;
			}
			f.close();
			cout << "Файл D:\\Нужное мне\\оаип мое\\Lab 16\\File.txt прочитан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 3:
		{
			int n;
			do
			{
				cout << "Сколько строк (абзацев) текста вы хотите ввести (>0): ";
				cin >> n;
			} while (n < 1);
			char s[100];
			char file[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\Strings.txt";
			ofstream f(file, ios::out | ios::app);//ios - поток записи app - дозаписи
			if (!f)
			{
				cout << "Файл " << file << " для записи (дозаписи) не удалось открыть.\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			for (int i = 0; i < n; i++)
			{
				cout << "Введите строку № " << i + 1 << " размером до 100 символов:\n";
				cin.getline(s, 100);
				f << s << endl;
			}
			f.close();
			cout << "Файл " << file << " записан (дозаписан) и закрыт.\n";
			cout << '\n';
			break;
		}
		case 4:
		{
			char str[100];
			char file[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\Strings.txt";
			ifstream f(file, ios::in);
			if (!f)
			{
				cout << "Файл " << file << " для записи (дозаписи) не удалось открыть.\n";
				system("pause");
				return 0;
			}
			f.getline(str, 100, '\n');
			while (!f.eof())
			{
				cout << str << endl;
				f.getline(str, 100, '\n');
			}
			f.close();
			cout << "Файл " << file << "прочитан и закрыт.\n";
			cout << '\n';
			break;
		}
		}
	} while (choice != 0);
	system("pause");
	return 0;
}