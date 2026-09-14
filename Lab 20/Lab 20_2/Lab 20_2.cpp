#include <iostream>
#include <Windows.h>
using namespace std;
class ÊÂÀÄĞÀÒ
{
private:
	double a;
public:
	ÊÂÀÄĞÀÒ()
	{
	}
	ÊÂÀÄĞÀÒ(double a)
	{
		this->a = a;
	}
	double getA()
	{
		return a;
	}
	void setA(double a)
	{
		this->a = a;
	}
	virtual double getB() { return 0; }
	virtual void setB(double b){}
	virtual double getC() { return 0; }
	virtual void setC(double c){}
	virtual void Show()
	{
		cout << "A:" << getA()  << ' ';
	}
	virtual void Perimetr()
	{
		double P = 4 * getA();
		cout << "Ïåğèìåòğ: " << P << endl;
	}
	virtual void Square()
	{
		double S = getA() * getA();
		cout << "S:" << S << endl;
	}
	virtual void Volume()
	{

	}
	virtual ~ÊÂÀÄĞÀÒ() { }
};
class ÏĞßÌÎÓÃÎËÜÍÈÊ : public ÊÂÀÄĞÀÒ
{
private:
	double b;
public:
	ÏĞßÌÎÓÃÎËÜÍÈÊ()
	{
	}
	ÏĞßÌÎÓÃÎËÜÍÈÊ(double a, double b) : ÊÂÀÄĞÀÒ(a)
	{
		this->b = b;
	}
	double getB() override
	{
		return b;
	}
	void setB(double b) override
	{
		this->b = b;
	}
	void Show() override
	{
		ÊÂÀÄĞÀÒ::Show();
		cout << "B:" << getB() << ' ';
	}
	void Perimetr() override
	{
		double P = 2 * (getA() + getB());
		cout << "Ïåğèìåòğ: " << P << endl;
	}
	void Square() override
	{
		double S = getA() * getB();
		cout << "Ïëîùàäü: " << S << endl;
	}
};
class ÊÓÁ : public ÏĞßÌÎÓÃÎËÜÍÈÊ
{
private:
	double c;
public:
	ÊÓÁ()
	{
	}
	ÊÓÁ(double a, double b, double c) : ÏĞßÌÎÓÃÎËÜÍÈÊ(a,b)
	{
		this->c = c;
	}
	double getC() override
	{
		return c;
	}
	void setC(double c) override
	{
		this->c = c;
	}
	void Show() override
	{
		ÏĞßÌÎÓÃÎËÜÍÈÊ::Show();
		cout << "C:" << getC() << endl;
	}
	void Perimetr() override
	{
		double P = 4 * (getA() + getB() + getC());
		cout << "Ïåğèìåòğ: " << P << endl;
	}
	void Square() override
	{
		double S = 2 * ((getA() * getB()) + (getB() * c) + (getA() * getC()));
		cout << "Ïëîùàäü: " << S << endl;
	}
	void Volume() override
	{
		double V = getA() * getB() * getC();
		cout << "Îáúåì: " << V << endl;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	ÊÂÀÄĞÀÒ Sone(4);
	ÊÂÀÄĞÀÒ* Done = new ÊÂÀÄĞÀÒ(5);
	Sone.Perimetr();
	Sone.Square();
	Sone.Show();
	cout << '\n';
	Done->Perimetr();
	Done->Square();
	Done->Show();
	cout << '\n';
	ÏĞßÌÎÓÃÎËÜÍÈÊ Stwo(6,7);
	ÏĞßÌÎÓÃÎËÜÍÈÊ* Dtwo = new ÏĞßÌÎÓÃÎËÜÍÈÊ(8, 9);
	Stwo.Perimetr();
	Stwo.Square();
	Stwo.Show();
	cout << '\n';
	Dtwo->Perimetr();
	Dtwo->Square();
	Dtwo->Show();
	cout << '\n';
	ÊÓÁ Sthree(10, 11, 12);
	ÊÓÁ* Dthree = new ÊÓÁ(13, 14, 15);
	Sthree.Perimetr();
	Sthree.Square();
	Sthree.Volume();
	Sthree.Show();
	cout << '\n';
	Dthree->Perimetr();
	Dthree->Square();
	Dthree->Volume();
	Dthree->Show();
	cout << '\n';
	delete Done;
	Done = NULL;
	delete Dtwo;
	Dtwo = NULL;
	delete Dthree;
	Dthree = NULL;
	const int n = 3;
	ÊÂÀÄĞÀÒ* figure[n];
	figure[0] =  new ÊÂÀÄĞÀÒ(5);
	figure[1] = new ÏĞßÌÎÓÃÎËÜÍÈÊ(5, 6);
	figure[2] =  new ÊÓÁ(7, 8, 9);
	for (int i = 0; i < n; i++)
	{
		figure[i]->Perimetr();
		figure[i]->Square();
		figure[i]->Volume();
		figure[i]->Show();
		cout << '\n';
	}
	for (int i = 0; i < n; i++)
	{
		delete[] figure[i];
		figure[i] = NULL;
	}
	int n2;
	cout << "Ñêîëüêî âû õîòèòå ôèãóğ:";
	cin >> n2;
	const int np = n2;
	ÊÂÀÄĞÀÒ** choiceUS = new ÊÂÀÄĞÀÒ*[np];
	for (int i = 0; i < n2; i++)
	{
		int choice;
		cout << i + 1 << "ôèãóğà" << endl;
		cout << "Êàêóş ôèãóğó âû õîòèòå ñîçäàòü?" << endl;
		cout << "1. ÊÂÀÄĞÀÒ" << endl;
		cout << "2. ÏĞßÌÎÓÃÎËÜÍÈÊ" << endl;
		cout << "3. ÊÓÁ" << endl;
		cout << "Ââåäèòå ïóíêò: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			choiceUS[i] = new ÊÂÀÄĞÀÒ();
			double a;
			cout << "Ââåäèòå çíà÷åíèå a: ";
			cin >> a;
			choiceUS[i]->setA(a);
			break;
		}
		case 2:
		{
			choiceUS[i] = new ÏĞßÌÎÓÃÎËÜÍÈÊ;
			double a, b;
			cout << "Ââåäèòå çíà÷åíèå a: ";
			cin >> a;
			choiceUS[i]->setA(a);
			cout << "Ââåäèòå çíà÷åíèå b: ";
			cin >> b;
			choiceUS[i]->setB(b);
			break;
		}
		case 3:
		{
			choiceUS[i] = new ÊÓÁ;
			double a, b, c;
			cout << "Ââåäèòå çíà÷åíèå a: ";
			cin >> a;
			choiceUS[i]->setA(a);
			cout << "Ââåäèòå çíà÷åíèå b: ";
			cin >> b;
			choiceUS[i]->setB(b);
			cout << "Ââåäèòå çíà÷åíèå c: ";
			cin >> c;
			choiceUS[i]->setC(c);
			break;
		}
		}
	}
	for (int i = 0; i < n2; i++)
	{
		choiceUS[i]->Perimetr();
		choiceUS[i]->Square();
		choiceUS[i]->Volume();
		choiceUS[i]->Show();
		cout << '\n';

	}
	for (int i = 0; i < n2; i++)
	{
		delete[] choiceUS[i];
		choiceUS[i] = NULL;
	}
	system("pause");
	return 0;
}


