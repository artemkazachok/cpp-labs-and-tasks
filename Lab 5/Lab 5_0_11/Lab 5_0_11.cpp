#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	unsigned long long int n = 0;
	long double x, eps;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите требуемую точность вычислений: ";
	cin >> eps;
	long double ch = 1, y = ch;
	for (; fabs(ch) > eps; n++)//Пока кусочки не стали очень маленькими, продолжай добавлять.
	{//цикл выполняется, пока очередное слагаемое (член ряда) не станет по модулю меньше требуемой пользователем точности 
		cout << "Итерация № " << n << ", Слагаемое: " << ch << "\t\t\t\tПромежуточная сумма: " << y << endl;
		ch = ch * pow(x, 2) / ((2 * n + 1) * (2 * n + 2));
		y = y + ch;//добавление очередного рассчитанного члена ряда к "итоговой"сумме 
	}
	long double y2 = (exp(x) + exp(-x)) / 2;
	cout << endl << "x: " << x << ", Точность: " << eps << ",Итоговая сумма: " << y << ", Сумма2: " << y2 << endl;
	cout << "К-во итераций n = " << n << endl;
	system("pause");
	return 0;
}