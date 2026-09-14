#include <iostream>
using namespace std;
struct Stack
{
	char info;
	Stack* Next;
};
Stack* Push(Stack* begin1, char i)
{
	Stack* t = new Stack();
	t->info = i;
	t->Next = begin1;
	return t;
}
void Pop(Stack** begin1)
{
	if (*begin1 == NULL)
	{
		cout << "Стек пуст. Удалять нечего.\n";
		return;
	}
	Stack* t = *begin1;
	cout << "Удаляем элемент со значением " << t->info << endl;
	*begin1 = t->Next;
	delete t;
}
void ViewStack(Stack* begin1)
{
	Stack* t = begin1;
	if (begin1 == NULL)
	{
		cout << "Стек пустой.\n";
		return;
	}
	cout << "Распечатываем стек:\n";
	while (t != NULL)
	{
		cout << "Элемент с адресом " << t << " хранит значение: " << t->info << endl;
		t = t->Next;
	}
}
char Peek(Stack* begin1)
{
	Stack* t = begin1;
	if (begin1 == NULL)
	{
		cout << "Стек пустой.\n";
		return ' ';
	}
	cout << "Распечатываем элемент из вершины стека:\n";
	cout << "Элемент с адресом " << t << " хранит значение: " << t->info << endl;
	return t->info;
}
void DeleteStack(Stack** begin1)
{
	if (*begin1 == NULL)
	{
		cout << "Стек пустой, удалять нечего.\n";
		return;
	}
	Stack* t;
	while (*begin1 != NULL)
	{
		t = *begin1;
		*begin1 = (*begin1)->Next;
		delete t;
	}
}
bool CorrectBrackets(char* s)
{
	Stack* begin1 = NULL;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == '(')
		{
			if (begin1 == NULL | (begin1 != NULL & Peek(begin1) == '('))
			{
				begin1 = Push(begin1, '(');
			}
			if (begin1 != NULL & Peek(begin1) == ')')
			{
				Pop(&begin1);
			}
		}
		if (s[i] == ')' & begin1 == NULL)
		{
			return false;
		}
		if (s[i] == ')' & Peek(begin1) == '(')
		{
			Pop(&begin1);
		}
	}
	return (begin1 != NULL) ? false : true;
}
int Prior(char a)
{
	switch (a)
	{
	case '*':
	case '/':
	{
		return 3;
	}
	case '-':
	case '+':
	{
		return 2;
	}
	case '(':
	{
		return 1;
	}
	}
	return 0;
}
Stack* InS(Stack* t, char s)
{
	Stack* t1 = new Stack();
	if (!t1)
	{
		cout << "No memory for new element of stack.\n";
		return NULL;
	}
	t1->info = s;
	t1->Next = t;
	return t1;
}
Stack* OutS(Stack* t, char* s)
{
	Stack* t1 = t;
	*s = t->info;
	t = t->Next;
	delete t1;
	t1 = NULL;
	return t;
}
char* PolishStack(char* In, char* Out, Stack* t, Stack* Op)
{
	char a;
	int i = 0, j = 0;
	while (In[i] != '\0')
	{
		if (In[i] != '\0')
		{
			while ((Op->info) != '(')
			{
				Op = OutS(Op, &a);
				if (!Op)
				{
					a = '\0';
				}
				Out[j++] = a;
			}
			t = Op;
			Op = Op->Next;
			delete t;
			t = NULL;
		}
		if (In[i] >= 'a' & In[i] <= 'z')
		{
			Out[j++] = In[i];
		}
		if (In[i] == '(')
		{
			Op = InS(Op, In[i]);
		}
		if (In[i] == '+' | In[i] == '-' | In[i] == '*' | In[i] == '/')
		{
			while (Op != NULL && Prior(Op->info) >= Prior(In[i]))
			{
				Op = OutS(Op, &a);
				Out[j++] = a;
			}
			Op = InS(Op, In[i]);
		}
		i++;
	}
	while (Op != NULL)
	{
		Op = OutS(Op, &a);
		Out[j++] = a;
	}
	Out[j] = '\0';
	return Out;
}
int main()
{
	system("chcp 1251");
	Stack* begin1 = NULL;
	Stack* t;
	t = new Stack();
	t->info = 'A';
	t->Next = begin1;
	begin1 = t;
	t = new Stack();
	t->info = 'B';
	t->Next = begin1;
	begin1 = t;
	int repeat = 1;
	char inf;
	while (repeat != 0)
	{
		cout << "Ввведите хранимое значение: ";
		cin >> inf;
		begin1 = Push(begin1, inf);
		cout << "0-Завершить, 1-продолжить: ";
		cin >> repeat;
	}
	ViewStack(begin1);
	DeleteStack(&begin1);
	if (begin1 == NULL)
	{
		cout << "Стек пустой.\n";
	}
	int r = 1;
	do
	{
		cout << "0-завершить программу\n1-добавить элемент в стек\n2-прочитать элемент из вершины стека\n3-прочитать весь стек\n4-удалить элемент из стека\n5-удалить весь стек\nВведите пункт в меню: ";
		cin >> r;
		switch (r)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			char inf;
			cout << "Какое значение (символ) сохранить в новый элемент стека (в текущую вершину): ";
			cin >> inf;
			begin1 = Push(begin1, inf);
			cout << "Значение сохранено, проверьте.\n";
			break;
		}
		case 2:
		{
			Peek(begin1);
			break;
		}
		case 3:
		{
			ViewStack(begin1);
			break;
		}
		case 4:
		{
			Pop(&begin1);
			break;
		}
		case 5:
		{
			DeleteStack(&begin1);
			break;
		}
		}
	} while (r != 0);
	cout << "Введите арифметическое выражение с круглыми(), причем их может быть больше одной пары: ";
	const int n = 50;
	char* s = new char[n];
	if (!s)
	{
		cout << "No memory for you string of arifmetic characters!\n";
		system("pause");
		return 0;
	}
	cin.ignore();
	cin.getline(s, n);
	cout << "Ваше арифметическое выражения: " << s << endl;
	cout << (CorrectBrackets(s) == true ? "Все круглые скобки парные." : "Ошибка расстановки круглых скобок.") << endl;
	delete[] s;
	s = NULL;
	Stack* T = NULL, * Op = NULL;
	char In[n];
	char* Out = new char[n];
	if (!Out)
	{
		cout << "No memory for string of " << n << " characters.\n";
		return 0;
	}
	cout << "Enter arithmetic expession (without spaces; variable one-character-name only): ";
	cin.getline(In, n);
	cout << "You enter:" << In << endl;
	Out = PolishStack(In, Out, T, Op);
	cout << "Reserve Polish notation: " << Out << endl;
	system("pause");
	return 0;

}