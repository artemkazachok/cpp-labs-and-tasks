#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;

struct Human
{
	int age;
	double height;
	char fam[20];
	char name[15];
	bool sex; //0 - женский 1 - мужской
}h;
bool f = false;// заполнен ли human или нет

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char binFileName[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\BinFileWithStructs.dat";//сразу создадим символьный массив, в который поместим имя бинарного файла
	char textfileName[] = "D:\\Нужное мне\\оаип мое\\Lab 16\\TextFileWithStructs.dat";//сразу создадим символьный массив, в который поместим имя текстового файла
	int p = -1;
	while (p != 0)//Цикл остановится, когда пользователь введет пункт меню 0
	{
		cout << "Меню:\n0-Завершить программу\n1-Ввести данные о следующем человеке в оперативную память\n2-Записать (дописать в конец бинарного файла) данные о текущем человеке из оперативной памяти \
\n3-Читать и поочередно распечатывать на консоль данные из бинарного файла о всех записанных в нем людях\n4-Записать (дописать в конец текстового файла) данные о текущем человеке\
\n5-Читать и поочередно распечатывать на консоль данные из текстового файла о всех записанных в нем людях\nВведите номер нужного вам пункта в меню: ";
		cin >> p;
		switch (p)
		{
		case 0:
		{
			cout << "Завершение работы программы.\n";
			break;
		}
		case 1://ввод данных о человеке
		{
			cout << "Введите возраст человека (полных лет): ";
			cin >> h.age;
			cout << "Введите рост человека (в метрах): ";
			cin >> h.height;
			cout << "Введите фамилию человека (можно с пробелами): ";
			cin.ignore();
			cin.getline(h.fam, 20);
			cout << "Введите имя человека: ";
			cin >> h.name;
			cout << "Введите пол человека (0 - женский, 1 - мужской): ";
			cin >> h.sex;
			cout << "Вы ввели данные:\n" << h.fam << "\t|\t" << h.name << "\t|\t" << h.age << "\t|\t" << h.height << "\t|\t";
			if (h.sex == 0)
			{
				cout << "женский\n";
			}
			else
			{
				cout << "мужской\n";
			}
			f = true;
			break;
		}
		case 2:// записать дописать файл
		{
			if (f == false)// проверка на содержании информации
			{
				cout << "Нет даннных для записи.\n";
				break;
			}
			ofstream wbf(binFileName, ios::out | ios::app | ios::binary);// ios::binary для работы с бинарным файлом
			if (!wbf)
			{
				cout << "Error.\n";
				break;
			}
			wbf.write((char*)&h, sizeof(h));// у потока wbf вызываем функцию (метод) write() для бинарной записи всей структуры h размером sizeof(h) или sizeof(Human) в файл
			wbf.close();
			cout << "Файл " << binFileName << " записан (дозаписан) и закрыт.\n";
			break;
		}
		case 3://Читать и поочередно распечатывать на консоль данные из бинарного файла о всех записанных в нем людях
		{
			Human h0;
			ifstream rbf(binFileName, ios::in | ios::binary);
			if (!rbf)
			{
				cout << "Error.\n";
				break;
			}
			rbf.read((char*)&h0, sizeof(Human));
			while (!rbf.eof())
			{
				cout << h0.fam << "\t|\t" << h0.name << "\t|\t" << h0.age << "\t|\t" << h0.height << "\t|\t";
				if (h0.sex == 0)
				{
					cout << "женский\n";
				}
				else
				{
					cout << "мужской\n";
				}
				rbf.read((char*)&h0, sizeof(Human));
			}
			rbf.close();
			cout << "Файл " << binFileName << " прочитан и закрыт.\n";
			break;
		}
		case 4://кейс для записи структуры типа Human в текстовый файл в текстовом режиме в нотации C++
		{
			if (f == false)
			{
				cout << "Нет данных для записи.\n";
				break;
			}
			ofstream wtf(textfileName, ios::out | ios::app);
			if (!wtf)
			{
				cout << "Error.\n";
				break;
			}
			wtf << h.fam << ' ' << h.name << ' ' << h.age << ' ' << h.height << ' ' << h.sex << endl;//записываем данные в текстовый файл в текстовом режиме записи
			wtf.close();
			cout << "Данные записаны в текстовый файл: " << textfileName << ". Файл закрыт.\n";
			break;
		}
		case 5://кейс чтения структура типа Human из текстового файла. Программа не знает, сколько именно структур записано в файле
		{
			ifstream rtf(textfileName, ios::in);
			if (!rtf)
			{
				cout << "Не удалось открыть файл " << textfileName << " для чтения.\n";
				break;
			}
			Human h1;
			rtf >> h1.fam >> h1.name >> h1.age >> h1.height >> h1.sex;
			while (!rtf.eof())
			{
				cout << h1.fam << '|' << h1.name << '|' << h1.age << "|" << h1.height << '|' << h1.sex << endl;//печатаем содержимое полей переменной h1 типа структуры Human
				rtf >> h1.fam >> h1.name >> h1.age >> h1.height >> h1.sex;
			}
			rtf.close();
			cout << "Данные прочитаны из текстового файла: " << textfileName << ". Файл закрыт.\n";
			break;
		}
		default:
		{
			cout << "Вы ввели неверный номер пункта меню. Перечитайте меню:\n";
			break;
		}
		}
	}
	system("pause");
	return 0;
}