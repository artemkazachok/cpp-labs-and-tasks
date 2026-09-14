#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char c, d, e;
	cout << "Введите один символ и нажмите клавишу \"Enter\": ";//если в строке нужны кавычки как символ, то их можно экранировать обратным слэшем
	cin >> c;
	cout << "Введите ещё два символа (ввод каждого символа заканчивается нажатием клавиши ""Enter""): ";//два подряд расположенных спецсимвола становятся одним "обычным" символом
	cin >> d >> e;
	cout << "Результат: " << c << ' ' << d << ' ' << e << endl;
	system("pause");
	return 0;
}