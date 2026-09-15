#include <iostream>
#include <Windows.h>
using namespace std;
unsigned long long int factorial(unsigned long long int);//прототип рекурсивной функции рассчета факториала

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    unsigned long long int a;//поскольку фактроиал рассчитываетс€ дл€ неотрицательных чисел, то можно вз€ть этот тип
    bool f;//деклараци€ логической переменной-флага дл€ определени€ момента прекращени€ цикла do-while
    do
    {
        cout << "¬ычислить факториал числа: ";//запрашиваем значение дл€ рассчета фактрориала
        cin >> a;
        cout << factorial(a) << endl;
        cout << "¬ычислить факториал ещЄ раз (1 - ƒа, 0 - Ќет)? ";
        cin >> f;
    } while (f == true);
    system("pause");
    return 0;

}
unsigned long long int factorial(unsigned long long int x)
{
    if (x < 2)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}