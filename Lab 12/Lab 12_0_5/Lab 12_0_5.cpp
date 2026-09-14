#include <iostream>
using namespace std;

int main()
{
	const int n = 80;
	char s[n];
	while (cin.getline(s, n))
	{
		cout << "Print string: " << s << endl;
		//здесь может быть код по обработке строки
	}
	system("pause");
	return 0;
}