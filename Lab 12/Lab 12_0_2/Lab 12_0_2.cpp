#include <iostream>
#include <stdlib.h>
using namespace std;

void main()
{
	char s[] = "2593";//создадим строку символов, в которую поместим фразу "2593" (это символы)
	int i = atoi(s);//преобразуем строку сиволов s в целое число, которое поместим в переменную i
	cout << "The string \"" << s << "\" changes into int = " << i << "\nThis value - 593 = " << i - 593 << endl;
	system("pause");
	return;
}