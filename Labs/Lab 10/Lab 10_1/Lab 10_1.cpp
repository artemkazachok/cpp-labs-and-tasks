#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	unsigned int x = 3;
	unsigned int* px = &x;//указатель
	unsigned int& lx = x;//ссылка
	cout << "Адрес переменной x: " << &x << endl;
    cout << "Значение по адресу px: " << *px << endl;
    cout << "Значение через ссылку lx: " << lx << endl;
    cout << "Адрес, хранящийся в указателе px: " << px << endl;
    cout << "Адрес, на который ссылается lx: " << &lx << endl;
	cout << "Введите значение: ";
	cin >> x;
	cout << x << '\t' << *px << '\t' << lx << endl;
	x += 2;
	*px += 2;
	lx += 2;
	cout << x << '\t' << *px << '\t' << lx << endl;
	system("pause");
	return 0;
}