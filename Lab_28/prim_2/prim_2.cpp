#include <iostream>
using namespace std;
int HashFunction(int k)
{
	int N = 13;
	double A = 0.618033;
	return N * fmod(k * A, 1);
}
void main()
{
	system("chcp 1251");
	int key;
	for (int i = 0; i < 13; i++)
	{
		cout << "Ключ: ";
		cin >> key;
		cout << "HashFunction(" << key << ")=" << HashFunction(key) << endl;
	}
	system("pause");
}