#define _CRT_SECURE_NO_WARNINGS//пишется в ПЕРВОЙ строке программы, чтобы работали "небезопасные" в плане взлома программы функции
#include <iostream>
using namespace std;

int main()
{
	char v[9];
	//v = "a string";// ошибка
	strcpy_s(v, "a string");//можно помещать значение в char'овский массив с помощью функций 
	cout << v << endl;
	system("pause");
	return 0;
}