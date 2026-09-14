#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

class Human
{
protected:
	int age = 0;
	double salary = 0;
public:
	virtual double TakeSalary(double) = 0;
	virtual int CelebrateBirthday() = 0;
	virtual void Show() = 0;
	Human(int a, double b) : age(a), salary(b)
	{
		cout << "Конструктор Человека с параметрами.\n";
	}
	Human() {}
	virtual ~Human()
	{
		cout << "Деструктор уничтожил объект Человек.\n";
	}
};
class Nomad : public Human
{
protected:
	int countAnimals = 0;
public:
	double TakeSalary(double a)override
	{
		return 0;
	}
	int CelebrateBirthday() override
	{
		age = age + 1;
		return age;
	}
	void Show()override
	{
		cout << age << ' ' << salary << ' ' << countAnimals << endl;
	}
	Nomad(int a0, double b0, int c0) : Human(a0, b0), countAnimals(c0)
	{
		cout << "Конструктор Кочевника с параметрами.\n";
	}
	Nomad() :Human(){}
	virtual ~Nomad()
	{
		cout << "Деструктор уничтожил объект Кочевник.\n";
	}
};
class Soldier : public Nomad
{
public:
	double TakeSalary(double a)override
	{
		srand(time(NULL));
		salary = salary + a + rand() % 50;
		return salary;
	}
	Soldier(int a1, double b1, int c1) : Nomad(a1, b1, c1)
	{
		cout << "Конструктор Воина с параметрами.\n";
	}
	Soldier() : Nomad(){}
	virtual ~Soldier()
	{
		cout << "Деструктор уничтожил объект Воин.\n";
	}
};
class Peasant : public Nomad
{
protected:
	double area = 0;
public:
	void Show() override
	{
		cout << area << ' ';
		Nomad::Show();
	}
	Peasant(int a2, double b2, int c2, double d2) : Nomad(a2, b2, c2), area(d2)
	{
		cout << "Конструктор Крестьянина с параметрами.\n";
	}
	Peasant():Nomad(){ }
	virtual ~Peasant()
	{
		cout << "Деструктора уничтожил объект Крестьянин.\n";
	}
};
class Citizen : public Peasant
{
public:
	double TakeSalary(double a)override
	{
		salary = salary + a;
		return salary;
	}
	Citizen(int a3, double b3, int c3, double d3) : Peasant(a3, b3, c3, d3)
	{
		cout << "Конструктор Горожанина с параметрами.\n";
	}
	Citizen():Peasant(){}
	virtual ~Citizen()
	{
		cout << "Деструктор уничтожил объект Горожанин.\n";
	}
};
class Astronaut : public Citizen
{
public:
	double TakeSalary(double a)override
	{
		salary = 1.5 * salary + a * 3;
		return salary;
	}
	Astronaut(int a4, double b4, int c4, double d4) : Citizen(a4, b4, c4, d4)
	{
		cout << "Конструктор Космонавта с параметрами.\n";
	}
	Astronaut() : Citizen() {}
	virtual ~Astronaut()
	{
		cout << "Деструктор уничтожил объект Космонавт.\n";
	}
};

double SumAllSalary(Human**, int);
double SumAllSalary(Human** array, int size)
{
	double summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += array[i]->TakeSalary(5.5);
	}
	return summa;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Human* a = new Soldier(19, 50.96, 1);
	if (a == nullptr)
	{
		cout << "Объект типа класса Солдат не удалось создать.\n";
		system("pause");
		return 0;
	}
	a->CelebrateBirthday();
	a->TakeSalary(12.87);
	a->Show();
	Citizen b(17, 123.21, 0, 0.987);
	Human& c = b;
	c.CelebrateBirthday();
	c.TakeSalary(134.56);
	c.Show();
	int n, p, d, e, f, g;
	double h, k;
	do
	{
		cout << "Массив на сколько объектов создать: ";
		cin >> n;
	} while (n < 1);
	Human** mas = new Human * [n];
	if (mas == nullptr)
	{
		cout << "Массив указелей типа абстрактного класса Человек не удалось создать.\n";
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "0-Солдат, 1-Крестьянин, 2-Горожанин, 3-Космонавт. Кого создать: ";
		cin >> p;
		switch (p)
		{
		case 0:
		{
			cout << "Возраст (age, int): ";
			cin >> d;
			cout << "Зарплата (double, salary): ";
			cin >> h;
			cout << "Количество скота (int, countAnimals): ";
			cin >> g;
			mas[i] = new Soldier(d, h, g);
			if (mas[i] == nullptr)
			{
				cout << "Объект типа класса Воин не удалось создать.\n";
				system("pause");
				return 0;
			}
			break;
		}
		case 1:
		{
			cout << "Возраст (age, int): ";
			cin >> d;
			cout << "Зарплата (double, salary): ";
			cin >> h;
			cout << "Количество скота (int, countAnimals): ";
			cin >> g;
			cout << "Площадь надела (double, area): ";
			cin >> k;
			mas[i] = new Peasant(d, h, g, k);
			if (mas[i] == nullptr)
			{
				cout << "Объект типа класса Крестьянин не удалось создать.\n";
				system("pause");
				return 0;
			}
			break;
		}
		case 2:
		{
			cout << "Возраст (age, int): ";
			cin >> d;
			cout << "Зарплата (double, salary): ";
			cin >> h;
			cout << "Количество скота (int, countAnimals): ";
			cin >> g;
			cout << "Площадь надела (double, area): ";
			cin >> k;
			mas[i] = new Citizen(d, h, g, k);
			if (mas[i] == nullptr)
			{
				cout << "Объект типа класса Горожанин не удалось создать.\n";
				system("pause");
				return 0;
			}
			break;
		}
		case 3:
		{
			cout << "Возраст (age, int): ";
			cin >> d;
			cout << "Зарплата (double, salary): ";
			cin >> h;
			cout << "Количество скота (int, countAnimals): ";
			cin >> g;
			cout << "Площади надела (double, area): ";
			cin >> k;
			mas[i] = new Astronaut(d, h, g, k);
			if (mas[i] == nullptr)
			{
				cout << "Объект типа класса Космонавт не удалось создать.\n";
				system("pause");
				return 0;
			}
			break;
		}
		}
		mas[i]->Show();
		mas[i]->CelebrateBirthday();
		mas[i]->TakeSalary(55.66);
	}
	double sum = SumAllSalary(mas, n);
	cout << "Суммарная зарплата всех людей в массиве: " << sum << " рублей.\n";
	sum = SumAllSalary(&a, 1);
	cout << "Суммарная зарплата одного человека (воина): " << sum << " рублей.\n";
	a->~Human();
	c.~Human();
	for (int i = 0; i < n; i++)
	{
		delete[] mas[i];
	}
	cout << "-------------------\n";
	delete[] mas;
	cout << "+++++++++++++++++++\n";
	system("pause");
	return 0;
}
