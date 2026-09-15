#include <iostream>
#include <Windows.h>
#include <math.h>
#include <string.h>
using namespace std;
struct city
{
	int population[2];// 0 - муж 1 - жен
	double area;
	char namecity[50];
	bool isCapital;

};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int r;
	do
	{
		cout << "Выберите пункт в меню: " << endl;
		cout << "1. 1-4 задание" << endl;
		cout << "2. 5 задание" << endl;
		cout << "3. 6 задание" << endl;
		cout << "0. Завершить работу программы." << endl;
		cout << "Введите пункт в меню: ";
		cin >> r;
		switch (r)
		{
		case 1:
		{
			const int n = 3;
			city X[n];
			for (int i = 0; i < n; i++)
			{
				cout << "Введите данные " << i + 1 << " города" << endl;
				cout << "Введите название города: ";
				cin.ignore();
				cin.getline(X[i].namecity, 50);
				cout << "Это столица? 1-Да 0-Нет: ";
				cin >> X[i].isCapital;
				cout << "Численность насселения мужчин: ";
				cin >> X[i].population[0];
				cout << "Численность насселения женщин: ";
				cin >> X[i].population[1];
				cout << "Введите площадь города: ";
				cin >> X[i].area;
				cout << '\n';
			}
			for (int i = 0; i < n; i++)
			{
				cout << X[i].namecity << " | " << (X[i].isCapital ? "Да" : "Нет") << " | " << X[i].population[0] << " | " << X[i].population[1] << " | " << X[i].area << endl;
			}
			int count = 0;
			double x;
			cout << '\n';
			cout << "Введите значение площади: ";
			cin >> x;
			for (int i = 0; i < n; i++)
			{
				if (X[i].area >= x)
				{
					count++;
				}
			}
			cout << "Кол-во подошедших объектов: " << count << endl;
			cout << '\n';
			break;
		}
		case 2:
		{
			int y;
			do
			{
				cout << "Сколько городов вы хотите ввести: ";
				cin >> y;
			} while (y < 1);
			city* Y = new city[y];
			if (Y == NULL)
			{
				cout << "Не удалось выдедить память.";
			}
			cin.ignore();
			for (int i = 0; i < y; i++)
			{
				cout << "Введите данные " << i + 1 << " города" << endl;
				cout << "Введите название города: ";
				cin.getline((Y + i)->namecity, 50);
				cout << "Это столица? 1-Да 0-Нет: ";
				cin >> (Y + i)->isCapital;
				cout << "Численность насселения мужчин: ";
				cin >> (Y + i)->population[0];
				cout << "Численность насселения женщин: ";
				cin >> (Y + i)->population[1];
				cout << "Введите площадь города: ";
				cin >> (Y + i)->area;
				cout << '\n';
				cin.ignore();
			}
			cout << '\n';
			for (int i = 0; i < y; i++)
			{
				cout << (Y + i)->namecity << " | " << ((Y + i)->isCapital ? "Да" : "Нет") << " | " << (Y + i)->population[0] << " | " << (Y + i)->population[1] << " | " << (Y + i)->area << endl;
			}
			delete[] Y;
			Y = NULL;
			cout << '\n';
			break;
		}
		case 3:
		{
			struct TRAIN
			{
				char namepoint[50];
				int numbertrain;
				int hours;
				int minutes;
			};
			TRAIN path[10];

			// ВВОД ИНФОРМАЦИИ
			for (int i = 0; i < 10; i++)
			{
				cout << "Введите название пункта назначения: ";
				cin.ignore();
				cin.getline(path[i].namepoint, 50);
				cout << "Введите номер поезда: ";
				cin >> path[i].numbertrain;
				do
				{
					cout << "Введите точное время отправление (часы): ";
					cin >> path[i].hours;
					path[i].hours = abs(path[i].hours);
					if (path[i].hours > 23)
					{
						cout << "Максимум 23 часа. Введите значение снова." << endl;
					}
				} while (path[i].hours > 23);
				do
				{
					cout << "Введите точное время отправление (минуты): ";
					cin >> path[i].minutes;
					path[i].minutes = abs(path[i].minutes);
					if (path[i].minutes > 59)
					{
						cout << "Максимум 59 минут. Введите значение снова." << endl;
					}
				} while (path[i].minutes > 59);
			}

			//РАСПРЕДЕЛЕНИЕ ПО ВОЗРАСТАНИЮ
			for (int j = 0; j < 9; j++)
			{
				for (int i = 0; i < 9 - j; i++)
				{
					if ((path[i].hours * 60) + path[i].minutes > (path[i + 1].hours * 60) + path[i + 1].minutes)
					{
						TRAIN copy;
						copy = path[i];
						path[i] = path[i + 1];
						path[i + 1] = copy;
					}
				}
			}

			//ПОИСК НУЖНОГО ПОЕЗДА
			char peoplewant[50];
			cout << "Куда вы хотите поехать: ";
			cin.ignore();
			cin.getline(peoplewant, 50);
			bool provwant = false;
			for (int i = 0; i < 9; i++)
			{
				if (strcmp(path[i].namepoint, peoplewant) == 0)
				{
					provwant = true;
					cout << path[i].namepoint << '\t' << path[i].numbertrain << '\t' << path[i].hours << ':' << path[i].minutes << endl;
				}
			}
			if (provwant == false)
			{
				cout << "Таких поездов нет :(" << endl;
			}
			cout << '\n';
			break;
		}
		}
	} while (r != 0);
	system("pause");
	return 0;
}