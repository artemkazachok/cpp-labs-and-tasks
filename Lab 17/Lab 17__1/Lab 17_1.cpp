#include <iostream>
#include <set>
#include <regex>
#include <Windows.h>
#include <string.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char text[100];

	cout << "Введите предложение: ";
	cin.getline(text, 100);
	regex reg("a\\\\a");
	if (regex_search(text,reg))
	{
		string result = regex_replace(text,reg,"!");
		cout << result;
	}
	else
	{
		cout << text;
	}

}