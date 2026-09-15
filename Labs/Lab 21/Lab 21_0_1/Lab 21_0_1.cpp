#include <iostream>
using namespace std;

class Counter
{
private:
	int count;
public:
	Counter()
	{
		count = 0;
	}
	Counter(int a)
	{
		count = a;
	}
	Counter(const Counter& obj)
	{
		this->count = obj.count;
		cout << "Copy constructor of class Counter.\n";
	}
	int GetCount()
	{
		return count;
	}
	Counter operator++()
	{
		cout << "++Counter.\n";
		count++;
		return (*this);
	}
	Counter operator++(int)/////////////////////////////
	{
		cout << "Counter++.\n";
		count++;
		return *this;
	}
	void operator--()
	{
		this->count++;
		return;
	}
	Counter operator--(int)
	{
		Counter temp;
		temp.count = this->count;
		(temp.count)--;
		return temp;
	}
	Counter operator+(Counter object)
	{
		cout << "Slozhenie.\n";
		this->count = this->count + object.GetCount();
		return *this;
	}
	Counter operator-(Counter obj)
	{
		cout << "Vichitanie.\n";
		return Counter(this->count - obj.GetCount());
	}
	bool operator<(Counter ob)const
	{
		return ((this->count < ob.GetCount()) ? true : false);
	}
	Counter& operator=(const Counter& ob)
	{
		if (this == &ob)
		{
			cout << "Samoprisvaivanie.\n";
			return *this;
		}
		cout << "Prisvaivanie.\n";
		this->count = ob.count;
		return *this;
	}
};
	int main()
	{
		Counter c1, c2;
		cout << c1.GetCount() << ' ' << c2.GetCount() << endl;
		c1++;
		cout << c1.GetCount() << ' ' << c2.GetCount() << endl;
		++c1;
		cout << c1.GetCount() << ' ' << c2.GetCount() << endl;
		c2 = c2++;
		cout << c1.GetCount() << ' ' << c2.GetCount() << endl;
		Counter c3 = ++c2;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' '  << c3.GetCount() << endl;
		c1 + c2;
		cout << c1.GetCount() << ' ' << c2.GetCount() <<  ' ' << c3.GetCount() << endl;
		c1 - c2;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << endl;
		Counter c4 = (c2 - c3);
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount()<< ' ' << c4.GetCount() << endl;
		if (c4 < c3)
		{
			cout << "True: c4 < c3.\n";
		}
		else
		{
			cout << "False: c4 < c3.\n";
		}
		if (c3 < c2)
		{
			cout << "True: c3 < c2.\n";
		}
		else
		{
			cout << "False: c3 < c2.\n";
		}
		if (c2 < c1)
		{
			cout << "True: c2 < c1.\n";
		}
		else
		{
			cout << "False: c2 < c1.\n";
		}
		c4 = c1;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << ' ' << c4.GetCount() << endl;
		c4 = c4;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << ' ' << c4.GetCount() << endl;
		Counter c5 = c1;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << ' ' << c4.GetCount() << ' ' << c5.GetCount() << endl;
		c5 = c1 + c2;
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << ' ' << c4.GetCount() << ' ' << c5.GetCount() << endl;
		Counter c6(c4);
		cout << c1.GetCount() << ' ' << c2.GetCount() << ' ' << c3.GetCount() << ' ' << c4.GetCount() << ' ' << c5.GetCount()<< ' ' << c6.GetCount() << endl;
		system("pause");
		return 0;




	}