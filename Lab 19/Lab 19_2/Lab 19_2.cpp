#include <iostream>
#include <Windows.h>
using namespace std;
class ЛИНИЯ/////
{
protected:
	double L;//длина линии
public:
	ЛИНИЯ(double L)
	{
		this->L = L;
	}
	void show()
	{
		cout << "Длина линии: " << getL() << endl;
	}
	double getL()
	{
		return L;
	}
};
class РОМБ : public ЛИНИЯ
{
protected://////////////////////////
	double H;//высота ромба
public:
РОМБ(double L, double H) : ЛИНИЯ(L)// делегирующий конструктор
{
	this->H = H;
}
void show()
{
	ЛИНИЯ::show();
	cout << "Высота ромба: " << H << endl;
}
void perimetr()
{
	double P;
	P = 4 * L;
	cout << "Периметр ромба: " << P << endl;	
}
void square()
{
	double S = L * H;
	cout << "Площадь ромба: " << S << endl;
}
};
class КУБ : public РОМБ
{
protected:
	double W;//ширина
public:
	КУБ(double L, double H, double W) : РОМБ(L,H)
	{
		this->W = W;
	}
	void show()
	{
		РОМБ::show();
		cout << "Ширина: " << W << ' ';
	}
	~КУБ()
	{
		cout << "Удалены классы по адресу: " << this << endl;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ЛИНИЯ one(4.567);
	РОМБ two(4.567, 3.456);
	КУБ three(4.567, 3.456, 9.344);
	cout << "Характеристики линии: " << endl;
	one.show();
	cout << '\n';
	cout << "Характеристики ромба: " << endl;
	two.show();
	two.perimetr();
	two.square();
	cout << '\n';
	cout << "Характеристики куба: " << endl;
	three.show();
	cout << '\n';
	three.~КУБ();
	system("pause");
	return 0;
}