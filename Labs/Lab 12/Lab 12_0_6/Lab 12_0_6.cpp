#include <iostream>
using namespace std;

int main()
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz123456789";//26 символов и ноль-терминатор (27-й символ)
	int sz = strlen(alpha);
	cout << "Size: " << sz << endl;
	for (int i = 0; i < sz; i++)
	{
		char ch = alpha[i];
		int x = (int)ch;//явное проведение символьной переменной к целому типу и сохранение результата в целочисленную переменную
		cout << '\'' << ch << '\'' << " =\t" << x << "\t= 0";
		cout.unsetf(ios::dec);//десятичный формат вывода для чисел отменяем
		cout.setf(ios::oct);//восьмеричный формат вывода для чисел усанавливаем
		cout << x << " =\t0x";//число то же самое, но в восьмеричном формате выводиться
		cout.unsetf(ios::oct);//восьмеричный формат вывода для чисел отменяем
		cout.setf(ios::hex);//шестнадцатеричный формат вывода для чисел устанавливаем
		cout << x << '\n';//число то же самое, но в шестнадцатеричном формате выводится
		cout.unsetf(ios::hex);
		cout.setf(ios::dec);
	}
	system("pause");
	return 0;
}