#include <iostream>
#include <regex>
using namespace std;

int main()
{
	system("chcp 1251");
	char st[80];
	cout << "\nВведите email: ";// например, на английском "ivan_petrov2021@gmail.com"
	cin.getline(st, 256);
	regex reg("\\w+\@+\\w+.+\\w");//создаем конструктором регулярное выражениеб даем ему
	//имя reg и передать ему "формулу" для английского текста для поиска, то есть наше
	//регулярное выражение не воспримет кириллицу, знак тире- и иные символы препинания,
	//но воспримет нижнее подчеркивание_, а также если адрес почты будет встроен в адрес другой почты
	if (regex_match(st, reg))
	{
		cout << "Email правильный.\n";
	}
	else
	{
		cout << "Email НЕправильный.\n";
	}
	main();
	system("pause");
	return 0;
}