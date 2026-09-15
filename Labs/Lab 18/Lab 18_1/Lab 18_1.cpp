#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

class Clock
{
private:
	int year;
	double price;
	char sex;
	bool waterproof;// 1-да 0-нет
	char model[50];
	int size[3];//ширина, высота/длина, толщина
public:
	Clock(int year, double price, char sex, bool waterproof, char* model, int* size)
	{
		cout << "Создан конструктор с параметрами." << endl;
	}
	int getYear()
	{
		return year;
	}
	int setYear(int year)
	{
		if (year >= 1200 && year <= 2026)
		{
			this->year = year;
		}
		else
		{
			this->year = -404;
		}
		return this->year;
	}
	double getPrice()
	{
		return price;
	}
	double setPrice(double price)
	{
		if (price > 0)
		{
			this->price = price;
		}
		else
		{
			this->price = -404;
		}
		return this->price;
	}
	char getSex()
	{
		return sex;
	}
	char setSex(char sex)
	{
		this->sex = sex;
		return this->sex;
	}
	bool getWaterproof()
	{
		return waterproof;
	}
	bool setWaterproof(bool waterproof)
	{
		this->waterproof = waterproof;
		return this->waterproof;
	}
	char* getModel()
	{
		return model;
	}
	char* setModel(char* model)
	{
		if (strlen(model) < 50)
		{
			strcpy_s(this->model, 50, model);
		}
		return this->model;
	}
	int* getSize()
	{
		return size;
	}
	int* setSize(int* size)
	{
		for (int i = 0; i < 3; i++)
		{
			if (size[i] > 0)
			{
				this->size[i] = size[i];
			}
			else
			{
				this->size[i] = -404;
			}
		}

		return this->size;
	}
	void Print()
	{
		if (getYear() != -404)
		{
			cout << "Год выпуска часов: " << getYear() << endl;
		}
		else
		{
			cout << "Год выпуска часов: Вы ввели неправильное значение!" << endl;
		}
		if (getPrice() != -404)
		{
			cout << "Цена: " << getPrice() << " руб" << endl;
		}
		else
		{
			cout << "Цена: Вы ввели неправильное значение!" << endl;
		}
		cout << "Пол: " << getSex() << endl;
		if (getWaterproof())
		{
			cout << "Часы водонепроницаемые" << endl;
		}
		else
		{
			cout << "Часы НЕ водонепроницаемые" << endl;
		}
		cout << "Модель: " << getModel() << endl;
		if (size[0] != -404)
		{
			cout << "Ширина: " << getSize()[0] << endl;
		}
		else
		{
			cout << "Ширина: Вы ввели неправильное значение!" << endl;
		}
		if (size[1] != -404)
		{
			cout << "Высота/длина: " << getSize()[1] << endl;
		}
		else
		{
			cout << "Высота/длина: Вы ввели неправильное значение!" << endl;
		}
		if (size[2] != -404)
		{
			cout << "Толщина: " << getSize()[2] << endl;
		}
		else
		{
			cout << "Толщина: Вы ввели неправильное значение!" << endl;
		}
	}
	void fault()
	{
		int days;
		double resfault, userfault;
		cout << "Введите кол-во дней работы часов: ";
		cin >> days;
		cout << "Введите погрешность часов(сек): ";
		cin >> userfault;
		resfault = 60 * 60 * 24 * (days + (days * userfault) / 86400.0);
		cout << "Погрешность равна: " << resfault << endl;
		double resClearFault = clearfault(days, resfault);
		cout << "Чистая погрешность равна: " << resClearFault << " сек" << endl;
	}
	double clearfault(int days, double resfault)
	{
		double secAllDay = days * 86400.0;
		double clearfault = resfault - secAllDay;
		return clearfault;
	}
	Clock()
	{
		cout << "Созданы часы по адресу: " << this << endl;
	}
	Clock(int year, double price, char sex, bool waterproof, char* model, int* size)
	{
		setYear(year);
		setPrice(price);
		setSex(sex);
		setWaterproof(waterproof);
		setModel(model);
		setSize(size);
		cout << "Созданы часы конструктора с параметрами. Адрес этих часов: " << this << endl;
	}
	~Clock()
	{
		cout << "Удалены часы по адресу: " << this << endl;
	}
};

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Clock one;
	int year;
	cout << "Введите год выпуcка часов: ";
	cin >> year;
	one.setYear(year);
	double price;
	cout << "Введите цену часов: ";
	cin >> price;
	one.setPrice(price);
	char sex;
	cout << "Введите пол часов (М-мужской Ж-женский): ";
	cin >> sex;
	one.setSex(sex);
	bool waterproof;
	cout << "Ваши часы водонепроницаемые? (1-Да 0-Нет): ";
	cin >> waterproof;
	one.setWaterproof(waterproof);
	char model[50];
	cout << "Введите модель часов: ";
	cin.ignore();
	cin.getline(model, 50);
	one.setModel(model);
	one.~Clock();
	int size[3];
	cout << "Введите ширину часов: ";
	cin >> size[0];
	cout << "Введите высоту/длину часов: ";
	cin >> size[1];
	cout << "Введите толщину часов: ";
	cin >> size[2];
	one.setSize(size);
	bool fault;
	cout << "Хотите узнать погрешность часов? (1-Да 0-Нет): ";
	cin >> fault;
	if (fault)
	{
		one.fault();
	}
	one.Print();
	Clock two;
	two.Print();
	two.setYear(2025);
	two.setPrice(1000.99);
	two.setSex('W');
	two.setWaterproof(true);
	char twoModel[50]{ "Rolex" };
	two.setModel(twoModel);
	int twoSize[3]{ 12,13,14 };
	two.setSize(twoSize);
	two.Print();
	//Clock three = one;- просто копия сетера
	Clock three(one.getYear(), one.getPrice(), one.getSex(), one.getWaterproof(), one.getModel(), one.getSize());//буквально берем значения из сетера часов который ввел пользователь
	three.Print();
	int n;
	cout << "Сколько часов вы хотите: ";
	cin >> n;
	Clock* X = new Clock[n];
	if (X == NULL)
	{
		cout << "Не удалось выделить память!" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите характеристики " << i + 1 << " часов: " << endl;
		int year;
		cout << "Введите год выпуcка часов: ";
		cin >> year;
		X[i].setYear(year);
		double price;
		cout << "Введите цену часов: ";
		cin >> price;
		X[i].setPrice(price);
		char sex;
		cout << "Введите пол часов (М-мужской Ж-женский): ";
		cin >> sex;
		X[i].setSex(sex);
		bool waterproof;
		cout << "Ваши часы водонепроницаемые? (1-Да 0-Нет): ";
		cin >> waterproof;
		X[i].setWaterproof(waterproof);
		char model[50];
		cout << "Введите модель часов: ";
		cin.ignore();
		cin.getline(model, 50);
		X[i].setModel(model);
		int size[3];
		cout << "Введите ширину часов: ";
		cin >> size[0];
		cout << "Введите высоту/длину часов: ";
		cin >> size[1];
		cout << "Введите толщину часов: ";
		cin >> size[2];
		X[i].setSize(size);
		bool fault;
		cout << "Хотите узнать погрешность " << i + 1 << " часов? (1 - Да 0 - Нет): ";
		cin >> fault;
		if (fault)
		{
			X[i].fault();
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << " часы:" << endl;
		X[i].Print();
	}
	const int n1 = 2;
	int onesize[3]{ 13,12,11 };
	char onemodel[50]{ "Rolex" };
	char twomodel[50]{ "Casio" };
	int twosize[3]{ 10,9,8 };
	Clock* Y = new Clock[n1]{ Clock(2026, 1234, 'M', true, onemodel, onesize), Clock(2023, 5678, 'W', false, twomodel, twosize) };
	for (int i = 0; i < n1; i++)
	{
		bool fault;
		cout << "Хотите узнать погрешность " << i + 1 << " часов? (1 - Да 0 - Нет): ";
		cin >> fault;
		if (fault)
		{
			Y[i].fault();
		}
	}
	for (int i = 0; i < n1; i++)
	{
		cout << i + 1 << " часы:" << endl;
		Y[i].Print();
	}
	Clock* pointer2 = &two;
	Clock* pointer4 = &Y[0];
	pointer2->Print();
	pointer4->Print();
	Clock& link2 = two;
	Clock& link4 = Y[0];
	link2.fault();
	link4.fault();
	one.~Clock();
	two.~Clock();
	three.~Clock();
	delete[] X;
	X = NULL;
	delete[] Y;
	Y = NULL;
	system("pause");
	return 0;

}
