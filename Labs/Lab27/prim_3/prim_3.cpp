#include <iostream>
using namespace std;
struct Spis
{
	int info;
	Spis* Next;
};
void Create(Spis** begin, Spis** end, int inf)
{
	Spis* t = new Spis();
	if (!t)
	{
		cout << "No memory.\n";
		system("pause");
		return;
	}
	t->info = inf;
	t->Next = NULL;
	if (*begin == NULL)
	{
		*begin = *end = t;
	}
	else
	{
		(*end)->Next = t;
		*end = t;
	}
}
void DeleteFirst(Spis** begin, Spis** end)
{
	if (*begin == NULL)
	{
		cout << "The Queue is already empty.\n";
		return;
	}
	Spis* t = *begin;
	cout << "Delete element " << t << " with info: " << t->info << " and t->Next: " << t->Next << endl;
	*begin = (*begin)->Next;
	delete t;
}
void DeleteQueue(Spis** begin, Spis** end)
{
	while (*begin != NULL)
	{
		DeleteFirst(begin, end);
	}
}
void ViewElemQueue(Spis** begin, Spis** end)
{
	if (*begin == NULL)
	{
		cout << "The Queue is empty.\n";
		return;
	}
	cout << "Element " << *begin << " with info: " << (*begin)->info << " and t->Next: " << (*begin)->Next << endl;
}
void ViewQueue(Spis** begin, Spis** end)
{
	if (*begin == NULL)
	{
		cout << "The Queue is empty.\n";
		return;
	}
	Spis* t = *begin;
	while (t != NULL)
	{
		ViewElemQueue(&t, end);
		t = t->Next;
	}
}
int main()
{
	system("chcp 1251");
	Spis* begin = NULL, * end = NULL;
	Spis* t = new Spis();
	if (!t)
	{
		cout << "No memory.\n";
		system("pause");
		return 0;
	}
	int inf;
	cout << "Enter integer: ";
	cin >> inf;
	t->info = inf;
	t->Next = NULL;
	begin = end = t;
	t = new Spis();
	if (!t)
	{
		cout << "No memeory.\n";
		system("pause");
		return 0;
	}
	cout << "Enter integer: ";
	cin >> inf;
	t->info = inf;
	t->Next = NULL;
	end->Next = t;
	end = t;
	int repeat = 1;
	while (repeat)
	{
		cout << "Enter integer: ";
		cin >> inf;
		Create(&begin, &end, inf);
		cout << "0-Stop programm, 1-Repeat, Enter: ";
		cin >> repeat;
	}
	ViewQueue(&begin, &end);
	int r = 1;
	do
	{
		cout << "0-Завершить программу\n1-добавить элемент в конец очереди\n2-прочитать элемент из начала очереди\n3-прочитать всю очередь\n4-удалить элемент из начала очереди\n5-Удалить всю очередь\nВведите пункт в меню: ";
		cin >> r;
		switch (r)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			int inf;
			cout << "Какое значение сохранить в новый элемент в начало очереди: ";
			cin >> inf;
			Create(&begin, &end, inf);
			cout << "Значение сохранено, проверьте.\n";
			break;
		}
		case 2:
		{
			ViewElemQueue(&begin, &end);
			break;
		}
		case 3:
		{
			ViewQueue(&begin, &end);
			break;
		}
		case 4:
		{
			DeleteFirst(&begin, &end);
			break;
		}
		case 5:
		{
			DeleteQueue(&begin, &end);
			break;
		}
		}
	} while (r != 0);
	system("pause");
	return 0;

}