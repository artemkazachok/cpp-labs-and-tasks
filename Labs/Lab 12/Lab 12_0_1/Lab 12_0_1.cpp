#include <iostream>;
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char c, d, e;
	cout << "1) ¬ведите один символ: ";
	c = cin.get();//функци€ get() из потока(класса) ввода cin возращает символ, который нужно поместить в символьную переменную
	cin.ignore();//функци€ ignore() из потока ввода cin "чистит" поток от последнего введенного перед этим символа (нажати€ Enter), который может помещать последующей функции
	cout << "2) ¬ведите один сивол: ";
	cin.get(d);
	cin.ignore();
	cout << "3) ¬ведите один символ: ";
	cin.get(e);
	cout << "1: " << c << "\n2: " << d << "\n3: " << e << endl;
	system("pause");
	return 0;
}