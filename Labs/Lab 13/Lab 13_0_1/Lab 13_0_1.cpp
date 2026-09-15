#include <iostream>
using namespace std;
void printStar(int);//прототип функции
void printRowStars(int);//прототип функции
//задача: распечатать перевернутый треугольник из заданного количества "звездочек" *, использу€ рекурсивные функции
int main()
{
	int a;
	do
	{
		cout << "Enter a: ";//зарпашиваем количество строк, которое будет ровн€тьс€ и количеству "звездочек"
		cin >> a;
		printRowStars(a);
	} while (a != 0);
	system("pause");
	return 0;
}
void printStar(int x)
{
	if (x < 0)
	{
		x = -x;
		cout << "The sign of X is changed.\n";
	}
	if (x == 0)//условие окончани€ рекурсивных вызовов
	{
		cout << endl;
		return;
	}
	else//если x больше 0
	{
		cout << '*';
		return printStar(x - 1);
	}
}
void printRowStars(int y)//определение рекурсивной функции printRowStars()
{
	if (y < 0)
	{
		y = -y;
		cout << "The sign of Y is changed.\n";
	}
	if (y == 0)//это условие окончани€ рекурсивных вызовов
	{
		return;
	}
	else//если больше нул€,
	{
		printStar(y);
		y = y - 1;
		printRowStars(y);
	}
}