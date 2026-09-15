#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    double a = 0.1;
    double b = 1;
    int n = 100;
    long double primer;
    double h = (b - a) / n;
    cout << "|\tNumber\t|\tx\t|\tY(x)\t|\tS(x)\t" << endl;
    for (double x = a, i = 0; x <= b && i <= n; x += h, i++)
    {
        double y = exp(2 * x);

        long double s = 1.0;
        int m;
        for (int stepen = 1; stepen <= m; stepen++)
        {
            unsigned long long int f = 1;
            for (int j = 1; j <= stepen; j++)
            {
                f = f * j;
            }
            primer = pow((2 * x), stepen) / f;
            s = s + primer;
        }
        cout << "|\t" << i << "\t|\t" << x << "\t|\t" << y << "\t|\t" << s << endl;
    }
    system("pause");
    return 0;
}