#include <iostream>
#include <list>
using namespace std;

struct Car
{
	int x;
	Car() {}
	Car(int)
	{
		this->x = x;
	}
	void show()
	{
		cout << this->x << " ";
	}
};

void main()
{
	list<Car>li;
	Car c(0);
	li.push_back(c);
	Car c0(1);
	li.push_back(c0);
	Car c1(2);
	li.push_back(c1);
	Car c2(3);
	li.push_front(c2);
	Car c3(4);
	li.push_front(c3);
	Car c4(5);
	li.push_front(c4);
	list<Car>::iterator j;
	for (list<Car>::iterator i = li.begin(); i != li.end(); i++)
	{
		i->show();
		if (i->x == 3)
		{
			j = i;
		}
	}
	cout << endl;
	li.pop_back();
	li.pop_front();
	li.erase(j);
	for (list<Car>::iterator i = li.begin(); i != li.end(); i++)
	{
		(*i).show();
	}
	cout << endl;
	li.clear();
}