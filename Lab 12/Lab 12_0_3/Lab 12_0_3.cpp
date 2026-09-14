#include <iostream>
#include <stdio.h>//подключить библиотеку с функциями ввода-вывода gets_s, puts//раюотает и без нее
using namespace std;

int main()
{
	const int n = 10;
	char s[n];//строка символов размером n символов, в которую можно поместить n-1 символов, т.к. один будет занят ноль-терминатором '\0'
	cin.getline(s, sizeof(s));
	puts(s);
	system("pause");
	return 0;
}