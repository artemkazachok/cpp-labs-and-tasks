#include <iostream>
#include <Windows.h>
using namespace std;

class Dot
{
protected:
	int x, y;
public:
	virtual void show()//этот метод может быть переопределен в дочерних классах
	{
		cout << "Don't with koordinates X: " << x << ", Y: " << y << endl;
	}
	Dot(int x0, int y0) :x(x0), y(y0)
	{
		
	}
	Dot()
	{

	}
	virtual ~Dot()
	{
		cout << "—работал виртуальный деструктор объекта класса Dot.\n";
	}
};

class Line : public Dot
{
protected:
	int x1, y1;
public:
	void show() override
	{
		cout << "Line between 1";
		Dot::show();
		cout << "\tand 2Dot with koordinates X1: " << x1 << ", Y1 : " << y1 << endl;
	}
	Line(int x0, int y0, int x2, int y2) : Dot(x0, y0), x1(x2), y1(y2)//////
	{}
	~Line()
	{
		cout << "—работал виртуальный деструктор объекта класса Line.\n";
	}
};
int main()
{
	setlocale(LC_ALL, "RU");
	Dot a(0, 1);
	Dot* b = new Dot(2, 3);
	if (b == nullptr)
	{
		cout << "Ёкзепмл€р класса Dot создать не удалось.\n";
		system("pause");
		return 0;
	}
	Line c(4, 5, 6, 7);
	Line* d = new Line(8, 9, 10, 11);
	if (d == nullptr)
	{
		cout << "Ёкземплр класса Line создать не удалось.\n";
		system("pause");
		return 0;
	}
	a.show();//статический
	b->show();//динамический
	c.show();//статический
	d->show();//динамический
	int n, f, xA, xB, yA, yB;
	do
	{
		cout << "—колько экземпл€ров объектов Dot и (или) Line поместить в массив? ";
		cin >> n;
	} while (n < 1);
	Dot** mas = new Dot * [n];
	for (int i = 0; i < n; i++)
	{
		cout << "\n„то создать (0-Dot, 1-Line): ";
		cin >> f;
		cout << "x1: ";
		cin >> xA;
		cout << "x2: ";
		cin >> yA;
		if (f == 0)
		{
			mas[i] = new Dot(xA, yA);
			if (mas[i] == nullptr)
			{
				cout << "Ёкземпл€р класса Dot создать не удалось.\n";
				system("pause");
				return 0;
			}
		}
		else
		{
			cout << "x2: ";
			cin >> xB;
			cout << "y2: ";
			cin >> yB;
			mas[i] = new Line(xA, yA, xB, yB);
			if (mas[i] == nullptr)
			{
				cout << "Ёкзепл€р класса Line создать не удалось.\n";
				system("pause");
				return 0;
			}
		}
		mas[i]->show();
	}
	Dot* ptr;
	ptr = new Line(11, 12, 13, 14);
	if (ptr == nullptr)
	{
		cout << "Ёкземпл€р класса Line создать не удалось.\n";
		system("pause");
		return 0;
	}
	ptr->show();
	delete ptr;
	Dot e(15, 16);
	ptr = &e;
	ptr->show();
	Line g(17, 18, 19, 20);
	ptr = &g;
	ptr->show();
	system("pause");
	return 0;
}