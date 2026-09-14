#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;
class figure
{
public:
	virtual double getX() { return 0; }
	virtual double getY() { return 0; }
	virtual double getZ() { return 0; }
	virtual double getH() { return 0; }
	virtual double getA() { return 0; }
	virtual double getR() { return 0; }
	virtual void Volume(){}
	virtual void Show(){}
	virtual ~figure(){ }
};
class parall : public figure
{
private:
	double x, y, z;
public:
	parall(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double getX() override
	{
		return x;
	}
	double getY() override
	{
		return y;
	}
	double getZ() override
	{
		return z;
	}
	void Volume() override
	{
		double V = getX() * getY() * getZ();
		cout << "Объем параллелепипеда: " << V << endl;
	}
};
class pyaramid : public figure
{
private:
	double x, y, h;
public:
	pyaramid(double x, double y, double h)
	{
		this->x = x;
		this->y = y;
		this->h = h;
	}
	double getX() override
	{
		return x;
	}
	double getY() override
	{
		return y;
	}
	double getH() override
	{
		return h;
	}
	void Volume() override
	{
		double V = getX() * getY() * getH();
		cout << "Объем пирамиды: " << V << endl;
	}
};
class tetra : public figure
{
private:
	double a;
public:
	tetra(double a)
	{
		this->a = a;
	}
	double getA() override
	{
		return a;
	}
	void Volume() override
	{
		double V = (getA() / 12) * sqrt(2);
		cout << "Объем тетраэдра: " << V << endl;
	}
};
class ball : public figure
{
private:
	double r;
public:
	ball(double r)
	{
		this->r = r;
	}
	double getR() override
	{
		return r;
	}
	void Volume() override
	{
		double V = (4 * pow(getR(), 3)) / 3;
		cout << "Объем шара: " << V << endl;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int n = 4;
	figure* mas[n];
	mas[0] = new parall(1, 2, 3);
	mas[1] = new pyaramid(4, 5, 6);
	mas[2] = new tetra(7);
	mas[3] = new ball(8);
	for (int i = 0; i < n; i++)
	{
		mas[i]->Volume();
	}
	for (int i = 0; i < n; i++)
	{
		delete mas[i];
		mas[i] = NULL;
	}
	system("pause");
	return 0;
}