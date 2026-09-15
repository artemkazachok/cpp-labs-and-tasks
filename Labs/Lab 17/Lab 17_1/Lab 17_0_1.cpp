#include <iostream>
#include <set>
#include <iterator>
#include <cstdlib>
#include <windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	set<int>mySet;
	for (int i = 0; i < 10; i++)
	{
		mySet.insert(rand() % 100);
	}
	cout << "Элементы множества: ";
	copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
	int del = 0;
	cout << "\nКакой элемент удалить? ";
	cin >> del;
	cout << "Элемент " << *mySet.find(del) << " -удален!" << endl;
	mySet.erase(del);

	int add = 0;
	cout << "Какой элемент добавить?";
	cin >> add;

	cout << "Новый элемент добавлен на место старого - " << *mySet.lower_bound(add) << endl;
	mySet.insert(add);

	cout << "Мы удалили элемент " << del << " и добавили " << add << ".\nВот что получилось: " << endl;
	copy(mySet.begin(), mySet.end(), ostream_iterator<int>(cout, " "));
	system("pause");
	return 0;
}