#include <iostream>
#include <set>
using namespace std;
void showSet(set<int>&);

int main()
{
	system("chcp 1251");
	set<int>s;
	cout << "Адрем множества s: " << &s << endl;
	if (s.empty() == true)// метод empty() проверяет s на пустоту и возращает ИСТИНА или ЛОЖЬ
	{
		cout << "Пустое множество.\n";
	}
	else
	{
		cout << "НЕпустое множество.\n";
	}
	cout << "Размер множества (сколько в нем значений): " << s.size() << " штук.\nМаксимальный размер множества (его максимальная емкость): " << s.max_size() << " штук.\n";
	int n, x;
	cout << "Сколько хотите сохранить значений в множество: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Какое значение искать: ";
	cin >> x;
	cout << "В этом множестве хранится " << s.count(x) << " штук назначения " << x << endl;
	set<int>::iterator i1;
	if ((i1 = s.find(x)) == s.end())
	{
		cout << "Значения " << x << " в этом множестве нет.\n";
	}
	else
	{
		cout << "Значение " << *i1 << " есть в этом множестве.\n";
		cout << "Вы искали значение: " << *s.find(x) << endl;
	}
	cout << "Найти в множестве значение, большее или равное: ";
	cin >> n;
	if (s.lower_bound(n) != s.end())
	{
		cout << "Найдено " << *s.lower_bound(n) << endl;
	}
	else
	{
		cout << "Нет такого.\n";
	}
	cout << "Найти в множестве значение большее: ";
	cin >> x;
	if (s.upper_bound(x) != s.end())
	{
		cout << "Найдено: " << *s.upper_bound(x) << endl;
	}
	else
	{
		cout << "Нет такого.\n";
	}
	if (s.lower_bound(n) != s.end() & s.upper_bound(x) != s.end())
	{
		cout << "\nВсе значения, от не меньшего, чем " << n << " до равного " << x << ":\n";
		copy(s.lower_bound(n), s.upper_bound(x), ostream_iterator<int>(cout, "\n"));
	}
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	set<int>s2;
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		s2.insert(*i * 10);
	}
	s.swap(s2);
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Печать содержимого множества s2:\n";
	for (set<int>::iterator i = s2.begin(); i != s2.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Адрес множества s: " << &s << "Адрес множества s2: " << &s2 << endl;
	showSet(s);
	showSet(s2);
	s.clear();
	s = s2;
	cout << "Адрес множества s: " << &s << " Алрес множества s2: " << &s2 << endl;
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Какое значение удалить из множества: ";
	cin >> x;
	s.erase(x);//удалить значение x из множества (если такое в нем найдет)
	cout << "Сколько в этом множестве всего хранится значений: " << s.size() << " штук.\n";
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, "\n"));
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Пройдем по множеству с конца:\n";
	for (set<int>::reverse_iterator i = s.rbegin(); i != s.rend(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	s.clear();
	cout << "Множество очищено методом clear().\n";
	cout << "Печать содержимого множества s:\n";
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << ' ' << &i << endl;
	}
	cout << "Сколько в этом множестве всего хранится значений: " << s.size() << " штук.\n";
	multiset<double> s3;
	cout << "Максимально возможное количество значений в мультимножестве s2: " << s3.max_size() << ", но сейчас в нем значений: " << s3.size() << endl;
	s3.clear();
	system("pause");
	return 0;
}

void showSet(set<int>& m)
{
	cout << "Печать содержимого множества, находящегося по адресу: " << &m << ":\n";
	for (set<int>::iterator i = m.begin(); i != m.end(); i++)
	{
		cout << *i << '\t';
	}
	cout << endl;
}