#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double x; 
    double y;
    cout << "¬ведите x: ";
    cin >> x;
    cout << "¬ведите y: ";
    cin >> y;

    double term1 = pow(cos(x), 4);            // cos^4(x)
    double term2 = pow(sin(y), 2);            // sin^2(y)
    double term3 = (1.0 / 4) * pow(sin(2 * x), 2);  // (1/4)*sin^2(2x)
    double result = term1 + term2 + term3 - 1;    // сумма всех членов

    cout << "–езультат: " << result << endl;
    return 0;
}
