#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
class Element
{
public:
	virtual void Show() = 0;
	virtual void length() = 0;
	virtual ~Element() {}
};
class Point : public Element
{
protected:
	double x, y;
public:
	Point() {}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	double getX()
	{
		return x;
	}
	void setX(double x)
	{
		this->x = x;
	}
	double getY()
	{
		return y;
	}
	void setY(double y)
	{
		this->y = y;
	}
	void Show() override
	{
		cout << "\nX: " << getX() << "\nY: " << getY();
	}
	void length() override
	{
	}
	virtual ~Point(){}
};
class Circle : public Point
{
protected:
	double rad;
public:
	Circle() {}
	Circle(double x, double y, double rad) : Point(x, y)
	{
		this->rad = rad;
	}
	double getRad()
	{
		return rad;
	}
	void setRad(double rad)
	{
		this->rad = rad;
	}
	void length() override
	{
		double l = 2 * 3.14 * getRad();
		cout << "Lenght: " << l << endl;
	}
	void Show() override
	{
		Point::Show();
		cout << "\nРадиус: " << getRad();
	}
};
void Mediana(Point* one, Point* two, Point* three)
{
	double a = sqrt(pow(three->getX() - two->getX(), 2) + pow(three->getY() - two->getY(), 2));
	double b = sqrt(pow(three->getX() - one->getX(), 2) + pow(three->getY() - one->getY(), 2));
	double c = sqrt(pow(two->getX() - one->getX(), 2) + pow(two->getY() - one->getY(), 2));
	double ma = 0.5 * sqrt((2 * pow(b, 2)) + (2 * pow(c, 2)) - pow(a, 2));
	double mb = 0.5 * sqrt((2 * pow(a, 2)) + (2 * pow(c, 2)) - pow(b, 2));
	double mc = 0.5 * sqrt((2 * pow(a, 2)) + (2 * pow(b, 2)) - pow(c, 2));
	cout << "Стороны треугольника:\na= " << a << "\nb= " << b << "\nc= " << c << endl;
	cout << "Медиана a: " << ma << endl;
	cout << "Медиана b: " << mb << endl;
	cout << "Медиана с: " << mc << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Point** mas = new Point*[5];
	mas[0] = new Point(2, 3);
	mas[1] = new Point(4, 5);
	mas[2] = new Circle(6, 7, 8);
	mas[3] = new Circle(9, 10, 11);
	mas[4] = new Circle(12, 15, 14);

	Mediana(mas[2], mas[3], mas[4]);
	for (int i = 0; i < 5; i++)
	{
		delete mas[i];
	}
	delete[] mas;
	system("pause");
	return 0;
}