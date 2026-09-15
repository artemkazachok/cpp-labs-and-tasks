#include <iostream>
using namespace std;
int HashFunction(int k)
{
	return (k % 10);
}
void main()
{
	system("chcp 1251");
	int key;
	for (int i = 0; i < 10; i++)
	{
		cout << "Ключ: ";
		cin >> key;
		cout << "HashFunction(" << key << ")=" << HashFunction(key) << endl;
	}
}