#include <iostream>
using namespace std;
struct List
{
	int info;
	List* Prev;
	List* Next;
};
void AddElemInEnd(List** begin, List** end, int inf)
{
	List* t = new List();
	if (!t)
	{
		cout << "No memory.\n;";
		system("pause");
		return;
	}
	t->info = inf;
	t->Next = NULL;
	t->Prev = *end;
	if (*begin == NULL & *end == NULL)
	{
		*begin = *end = t;
	}
	else
	{
		(*end)->Next = t;
		*end = t;
	}
}
void PrintElement(List* t)
{
	if (t == NULL)
	{
		return;
	}
	cout << "Element " << t << " with info: " << t->info << ", t->Prev: " << t->Prev << " and t->Next: " << t->Next << endl;
}
void ViewFromBegin(List** begin)
{
	List* t = *begin;
	while (t != NULL)
	{
		PrintElement(t);
		t = t->Next;
	}
}
void ViewFromEnd(List** end)
{
	List* t = *end;
	while (t != NULL)
	{
		cout << "Element " << t << " with info: " << t->info << ", t->Prev: " << t->Prev << " and t->Next: " << t->Next << endl;
		t = t->Prev;
	}
}
List* FindFromBegin(List* begin, int key)
{
	List* t = begin;
	while (t != NULL)
	{
		if (t->info == key)
		{
			return t;
		}
		t = t->Next;
	}
	return NULL;
}
List* FindFromEnd(List* end, int key)
{
	List* t = end;
	while (t != NULL)
	{
		if (t->info == key)
		{
			return t;
		}
		t = t->Prev;
	}
	return NULL;
}
void DeleteElem(List** begin, List** end, int key)
{
	List* toDel = FindFromBegin(*begin, key);
	if (toDel == NULL | *begin == NULL)
	{
		cout << "No find element to delete or list is empty.\n";
		return;
	}
	if (toDel == *begin)
	{
		if ((*begin)->Next != NULL)
		{
			*begin = (*begin)->Next;
			(*begin)->Prev = NULL;
		}
		else
		{
			*begin = *end = NULL;
		}
	}
	else
	{
		if (toDel == *end)
		{
			if ((*end)->Prev != NULL)
			{
				*end = (*end)->Prev;
				(*end)->Next = NULL;
			}
			else
			{
				*begin = *end = NULL;
			}
		}
		else
		{
			(toDel->Prev)->Next = toDel->Next;
			(toDel->Next)->Prev = toDel->Prev;
		}
	}
	delete toDel;
	toDel = NULL;
}
void AddElem(List** begin, List** end, int key, int inf)
{
	List* old = FindFromBegin(*begin, key);
	if (old == NULL)
	{
		cout << "Ni find element to add new element after its.\n";
		return;
	}
	List* t = new List();
	if (!t)
	{
		cout << "No memory.\n";
		system("pause");
		return;
	}
	t->info = inf;
	t->Prev = old;
	t->Next = old->Next;
	old->Next = t;
	if (old != *end)
	{
		(t->Next)->Prev = t;
	}
	else
	{
		*end = t;
	}
}
void DeleteFirst(List** begin, List** end)
{
	if (*begin == NULL)
	{
		cout << "Список пуст. Удалять нечего.\n";
		return;
	}
	List* t = *begin;
	if (*begin == *end)
	{
		*begin = *end = NULL;
	}
	else
	{
		*begin = t->Next;
		(*begin)->Prev = NULL;
	}
	delete t;
	t = NULL;
}
void DeleteList(List** begin, List** end)
{
	while (*begin != NULL)
	{
		DeleteFirst(begin, end);
	}
}
int main()
{
	system("chcp 1251");
	List* begin = NULL, * end = NULL;
	List* t = new List();
	if (!t)
	{
		cout << "No memory.\n";
		system("pause");
		return 0;
	}
	cout << "Enter integer: ";
	cin >> t->info;
	t->Prev = t->Next = NULL;
	begin = end = t;
	int r = 1, inf, k;
	do
	{
		cout << "0-завершить программу\n1-добавить элемент в конец списка\n2-прочитать список с наачала\n3-прочитать список с конца\n4-найти элемент с искомым значением (проход с начала)\n5-найти элемент с искомым значением (проход с конца\
\n6-удалить эдемент из начала списка\n7-удалить элемент с искомым значением\n8-добавить элемент за элементом с искомым значением\n9-удалить весь список\nВведите пункт меню: ";
		cin >> r;
		switch (r)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			cout << "Какое значение сохранить в новый элемент в конец очереди: ";
			cin >> inf;
			AddElemInEnd(&begin, &end, inf);
			cout << "Значение сохранено, проверьте.\n";
			break;
		}
		case 2:
		{
			ViewFromBegin(&begin);
			break;
		}
		case 3:
		{
			ViewFromEnd(&end);
			break;
		}
		case 4:
		{
			cout << "Какое значение ищете: ";
			cin >> inf;
			List* t = FindFromBegin(begin, inf);
			PrintElement(t);
			break;
		}
		case 5:
		{
			cout << "Какое значение ищете: ";
			cin >> inf;
			PrintElement(FindFromEnd(end, inf));
			break;
		}
		case 6:
		{
			DeleteFirst(& begin, & end);
			break;
		}
		case 7:
		{
			cout << "Какое значение ищете, чтобы удалить: ";
			cin >> inf;
			DeleteElem(&begin, &end, inf);
			break;
		}
		case 8:
		{
			cout << "Какое значение ищете, за которым хотите добавить новый элемент: ";
			cin >> k;
			if (FindFromBegin(begin, k) == NULL)
			{
				cout << "Такого значения в списке нет.\n";
				break;
			}
			cout << "Какое значение добавить: ";
			cin >> inf;
			AddElem(&begin, &end, k, inf);
			break;
		}
		case 9:
		{
			DeleteList(&begin, &end);
			break;
		}
		}
	} while (r != 0);
	system("pause");
	return 0;
}