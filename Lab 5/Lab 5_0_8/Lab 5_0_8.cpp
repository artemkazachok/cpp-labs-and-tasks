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
	cout << "Введите x:";
	cin >> x;
	cout << "Введите требуемую точность вычислений:";
	cin >> eps;
	long double ch = 1, y = ch;//первый член ряда и начальное значение суммы
	for (; fabs(ch) > eps; n++)//итерационная переменная создана и проинициализирована заранее, поэтому выражение декларации "пустое"
	{//цикл повторяется, пока очередное слагаемое (член ряда) не станет по модулю меньше требуемой пользователем точности
		cout << "Итерация № " << n << ", Слагаемое: " << ch << "\t\t\t\tПромежуточная сумма: " << y << endl;
		ch = ch * pow(x, 2) / ((2 * n + 1) * (2 * n + 2));
		y = y + ch;//добавление очередного рассчитанного члена ряда к "итоговой"сумме 
	}
	cout << endl << "x = " << x << ", Итоговая сумма =  " << y << endl;
	cout << "К-во итераций n = " << n << endl;
	system("pause");
	return 0;

}