#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	do
	{
		cout << "Выберите пункт в меню: " << endl;
		cout << "1. 1 задание" << endl;
		cout << "2. 2 задание" << endl;
		cout << "3. 3 задание" << endl;
		cout << "4. 4 задание" << endl;
		cout << "5. 5 задание" << endl;
		cout << "0. Завершить работу программы." << endl;
		cout << "Введите пункт в меню: ";
		cin >> n;
		cout << '\n';
		switch (n)
		{
		case 1:
		{
			struct city
			{
				int population[2];// 0 - муж 1 - жен
			    double area;
				char namecity[50];
				bool isCapital;

			};
			city a;
			cout << "Введите название города: ";
			cin.ignore();
			cin.getline(a.namecity, 50);
			cout << "Это столица? 1-Да 0-Нет: ";
			cin >> a.isCapital;
			cout << "Численность насселения мужчин: ";
			cin >> a.population[0];
			cout << "Численность насселения женщин: ";
			cin >> a.population[1];
			cout << "Введите площадь города: ";
			cin >> a.area;
			cout << "Название: " << a.namecity << endl;
			cout << "Cтолица? " << (a.isCapital ? "Да" : "Нет") << endl;
			cout << "Численность мужчин: " << a.population[0] << '\n' << "Численность женщин: " << a.population[1] << endl;
			cout << "Площадь: " << a.area << endl;
			cout << "\n";
			break;
		}
		case 2:
		{
			struct student
			{
				char name[50];
				char surname[50];
				int age;
				int grade;
			};
			student a{ "Artem", "Kazachok", 17, 2 };
			student b;
			strcpy_s(b.name, "Mark");
			strcpy_s(b.surname, "Karchevski");
			b.age = 17;
			b.grade = 2;
			cout << a.name << " | " << a.surname << " | " << a.age << " | " << a.grade << endl;
			cout << b.name << " | " << b.surname << " | " << b.age << " | " << b.grade << endl;
			cout << '\n';
			break;
		}
		case 3:
		{
			struct car
			{
				char name[50];
				char model[50];
				int year;
				int mileage;
				int power;// будем измерять в лошадиных силах
			};
			car a;
			cout << "Введите название вашей машины: ";
			cin.ignore();
			cin.getline(a.name, 50);
			cout << "Введите модель вашей машины: ";
			cin.ignore();
			cin.getline(a.model, 50);
			cout << "Введите год выпуска машины: ";
			cin >> a.year;
			cout << "Введите пробег вашей машины: ";
			cin >> a.mileage;
			cout << "Введите кол-во лошадиные сил: ";
			cin >> a.power;
			cout << a.name << " | " << a.model << " | " << a.year << " | " << a.mileage << " | " << a.power << endl;
			cout << '\n';
			break;
		}
		case 4:
		{
			struct product
			{
				char name[50];
				char doman[12];//дата изготовления
				char bfdate[12];//срок годности
				double price;
			};
			product a;
			product* pa = &a;
			strcpy_s(pa->name,"Хлеб");
			strcpy_s(pa->doman, "01.01.2026");
			strcpy_s(pa->bfdate, "15.01.2026");
			pa->price = 1.20;
			cout << pa->name << " | " << pa->doman << " | " << pa->bfdate << " | " << pa->price << endl;
			cout << '\n';
			break;
		}
		case 5:
		
		{
			struct studkol
			{
				char name[50];
				char surname[50];
				char spec[50];
				double gpa;
			};
			studkol a;
			studkol& la = a;
			strcpy_s(la.name, "Артём");
			strcpy_s(la.surname, "Казачок");
			strcpy_s(la.spec, "Программист");
			la.gpa = 6.4;
			cout << la.name << " | " << la.surname << " | " << la.spec << " | " << la.gpa << endl;
			cout << '\n';
			break;
		}
		}
		}while (n != 0);
	system("pause");
	return 0;
}