#include <iostream>
#include <Windows.h>
using namespace std;

class Prim
{
private:
	int m, n;
public:
	Prim()
	{

	}
	Prim(int m, int n)
	{
		this->m = m;
		this->n = n;
	}
	void Show()
	{
		cout << "M: " << m << "\nN: " << n << endl;
	}
	Prim operator!()
	{
		cout << "ѕриведение дроби к несократимому виду: " << endl;
		int a = m;
		int b = n;
		while (b != 0)
		{
			a %= b;
			int temp = a;
			a = b;
			b = temp;
		}
		int nod = a;
		m /= nod;
		n /= nod;
		return *this;
		
	}
	Prim operator/(int a)
	{
		n *= a;
		!(*this);
		return *this;
	}
	Prim operator++()
	{
		m+=n;
		!(*this);
		return(*this);
	}
	bool operator<=(Prim& two)
	{
		if ((double)this->m/(double)this->n <= (double)two.m / (double)two.n)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Prim one(36,12);
	Prim two(45, 13);
	!one;
	bool prov = one <= two;
	if (prov)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	one / 2;
	two / 2;
	one.Show();
	two.Show();
	system("pause");
	return 0;
}