#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;
int sizemas = 0;//для динамического массива
struct product
{
	char name[50];
	int nomer;
	double price;
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choice = -1;
	while (choice != 0)
	{
		cout << "1. 1 Задание (ввод)" << endl;
		cout << "2. 1 Задание (распечатать)" << endl;
		cout << "3. 2 Задание (ввод)" << endl;
		cout << "4. 2 Задание (распечатать)"  << endl;
		cout << "5. 3 Задание (ввод)" << endl;
		cout << "6. 3 Задание (распечатать)" << endl;
		cout << "7. 4 Задание (ввод)" << endl;
		cout << "8. 4 Задание (распечатать)" << endl;
		cout << "9. 5 Задание (ввод)" << endl;
		cout << "10. 5 Задание (распечатать)" << endl;

		cout << "0. Завершить работу программы" << endl;
		cout << "Введите пункт меню: ";
		cin >> choice;
		cout << '\n';
		switch (choice)
		{
		case 0:
		{
			cout << "Завершение работы." << endl;
			system("pause");
			return 0;
		}
		case 1:
		{
			char textfile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16.txt";
			ofstream f(textfile, ios::out | ios::trunc);
			if (!f)
			{
				cout << "Файл " << textfile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			cout << "Введите строку до 100 символов: ";
			cin.ignore();
			char one;
			while (cin.get(one) && one != '\n')
			{
				f << one;
			}
			f.close();
			cout << "Файл " << textfile << "записан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 2:
		{
			char textfile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16.txt";
			ifstream f(textfile, ios::in);
			if (!f)
			{
				cout << "Файл " << textfile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			char one;
			while (f.get(one))
			{
				cout << one;
			}
			f.close();
			cout << '\n';
			cout << "Файл " << textfile << " успешно прочитан и закрыт.\n";
			break;
		}
		case 3:
		{
			do
			{
				cout << "Введите размер массива: ";
				cin >> sizemas;
			} while (sizemas < 1);
			int* X = new int[sizemas];
			if (X == NULL)
			{
				cout << "Не удалось выделить память под массив" << endl;
				system("pause");
				return 0;
			}
			for (int i = 0; i < sizemas; i++)
			{
				cout << "X[" << i << "]: ";
				cin >> X[i];
			}
			char namefile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_0.txt";
			ofstream f(namefile, ios::out | ios::trunc);
			if (!f)
			{
				cout << "Файл " << namefile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			for (int i = 0; i < sizemas; i++)
			{
				f << X[i] << '^';
			}
			f.close();
			delete[] X;
			X = NULL;
			cout << "Файл " << namefile << "записан и закрыт." << endl;
			cout << '\n';
			break;
		}
		case 4:
		{
			char filename[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_0.txt";
			ifstream f(filename, ios::in);
			if (!f)
			{
				cout << "Файл " << filename << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			int* X = new int[sizemas];
			char forchar;
			for (int i = 0; i < sizemas; i++)
			{
				f >> X[i];
				f >> forchar;
				cout << X[i] << ' ';
			}
			f.close();
			delete[] X;
			X = NULL;
			cout << '\n';
			cout << "Файл " << filename << " успешно прочитан и закрыт.\n";
			break;
		}
		case 5:
		{
			product X1;
			cout << "Введите название товара: ";
			cin.ignore();
			cin.getline(X1.name, 50);
			cout << "Введите номенклатурный номер: ";
			cin >> X1.nomer;
			cout << "Введите цену товара: ";
			cin >> X1.price;
			char namefile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_1.txt";
			ofstream f(namefile, ios::out | ios::app);
			if (!f)
			{
				cout << "Файл " << namefile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			f << X1.name << ' ' << X1.nomer << ' ' << X1.price << endl;
			f.close();
			cout << "Файл " << namefile << "записан и закрыт.\n";
			cout << '\n';
			break;

		}
		case 6:
		{
			char namefile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_1.txt";
			ifstream f(namefile, ios::in);
			if (!f)
			{
				cout << "Файл " << namefile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			product h1;
			f >> h1.name >> h1.nomer >> h1.price;
			while(!f.eof())
			{
				cout << h1.name << '|' << h1.nomer << '|' << h1.price << endl;
				f >> h1.name >> h1.nomer >> h1.price;
			}
			f.close();
			cout << "Файл " << namefile << " успешно прочитан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 7:
		{
			product X1;
			cout << "Введите название товара: ";
			cin.ignore();
			cin.getline(X1.name, 50);
			cout << "Введите номенклатурный номер: ";
			cin >> X1.nomer;
			cout << "Введите цену товара: ";
			cin >> X1.price;
			char namefile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_2.bin";
			ofstream f(namefile, ios::out | ios::app | ios::binary);
			if (!f)
			{
				cout << "Файл " << namefile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			f.write((char*)&X1, sizeof(X1));
			f.close();
			cout << "Файл " << namefile << " записан (дозаписан) и закрыт.\n";
			break;

		}
		case 8:
		{
			product h0;
			char namefile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_2.bin";
			ifstream f(namefile, ios::in | ios::binary);
			if (!f)
			{
				cout << "Файл " << namefile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			f.read((char*)&h0, sizeof(product));
			while (!f.eof())
			{
				cout << h0.name << ';' << h0.nomer << ';' << h0.price << endl;
				f.read((char*)&h0, sizeof(product));
			}
			f.close();
			cout << "Файл " << namefile << " успешно прочитан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 9:
		{
			char s[200];
			char textfile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_3.txt";
			ofstream f(textfile, ios::out | ios::app);
			if (!f)
			{
				cout << "Файл " << textfile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			cin.ignore();
			cout << "Введите строку до 200 символов: ";
			cin.getline(s, 200);
			f << s << endl;
			f.close();
			cout << "Файл " << textfile << "записан и закрыт.\n";
			cout << '\n';
			break;
		}
		case 10:
		{
			char s[200];
			char textfile[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\КазачокЛаб16_3.txt";
			ifstream f(textfile, ios::in);
			if (!f)
			{
				cout << "Файл " << textfile << "для записи не удалось открыть.\n";
				system("pause");
				return 0;
			}
			f.getline(s, 200, '\n');
			while (!f.eof())
			{
				cout << s << endl;
				f.getline(s, 200, '\n');
			}
			f.close();
			cout << "Файл " << textfile << " успешно прочитан и закрыт.\n";
			break;
		}
		}
	}
}