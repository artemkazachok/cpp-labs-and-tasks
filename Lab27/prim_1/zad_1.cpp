#include <iostream>
using std::cout;
using std::cin;
using std::endl;
struct stack
{
	int* arr = new int[0];
	int head = 0;
	int* change_size_array(int* old_arr, int size, int change_size)
	{
		int* change_arr = new int[change_size];
		for (int i = 0; i < ((size < change_size) ? size : change_size); i++)
		{
			change_arr[i] = old_arr[i];
		}
		delete[] old_arr;
		return change_arr;
	}
	void push(int x)
	{
		arr = change_size_array(arr, head, head + 1);
		arr[head] = x;
		head++;
	}
	int pop()
	{
		if (head - 1 != -1)
		{
			int tmp = arr[head - 1];
			arr = change_size_array(arr, head, head - 1);
			head--;
			return tmp;
		}
		else
		{
			cout << "Ошибка, попытка извлечь элемент из пустого стека.\n";
			return -1;
		}
	}
	bool is_empty()
	{
		return head - 1 == -1;
	}
};
void function_stack()
{
	stack my_stack;
	int element_stack;
	int menu = 0;
	bool exit_menu = true;
	while (exit_menu)
	{
		cout << "\n1-Enter add element stack\n2-Enter to extract element from stack\n3-Enter check empty stack?\n0-Enter number: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Enter element stack: ";
			cin >> element_stack;
			my_stack.push(element_stack);
			break;
		}
		case 2:
		{
			element_stack = my_stack.pop();
			cout << "Element stack: " << element_stack << endl;
			break;
		}
		case 3:
		{
			cout << "Stack is empty: " << ((my_stack.is_empty() == true) ? "true" : "false") << endl;
			break;
		}
		default:
		{
			exit_menu = false;
			break;
		}
		}
	}
}
struct queue
{
	int* arr = new int[NULL];
	int head = 0;
	int tail = 0;
	int* change_size_array(int* old_arr, int size, int change_size)
	{
		int* change_arr = new int[change_size];
		for (int i = 0; i < ((size < change_size) ? size : change_size); i++)
		{
			change_arr[i] = old_arr[i];
		}
		delete[] old_arr;
		return change_arr;
	}
	void push(int x)
	{
		arr = change_size_array(arr, tail, tail + 1);
		arr[tail] = x;
		tail++;
	}
	int pop()
	{
		if (head != tail)
		{
			int tmp = arr[head];
			for (int i = 0; i < tail; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr = change_size_array(arr, tail, tail - 1);
			tail--;
			return tmp;
		}
		else
		{
			cout << "Ошибка, попытка извлечь элемент из пустой очереди.\n";
		}
	}
	bool is_empty()
	{
		return head == tail;
	}
};
void function_queue()
{
	queue my_queue;
	int element_queue;
	int menu = 0;
	bool exit_menu = true;
	while (exit_menu)
	{
		cout << "\n1-Enter add element in queue\n2-Enter to extract element queue\n3-Enter check empty queue?\n0-Enter exit\nEnter number: ";
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Enter element stack: ";
			cin >> element_queue;
			my_queue.push(element_queue);
			break;
		}
		case 2:
		{
			element_queue = my_queue.pop();
			cout << "Element queue: " << element_queue << endl;
			break;
		}
		case 3:
		{
			cout << "Queue is empty: " << ((my_queue.is_empty() == true) ? "true" : "false") << endl;
			break;
		}
		default:
		{
			exit_menu = false;
			break;
		}
		}
	}
}
	struct list
	{
		int field;
		list* next;
		list* prev;
	};
	list* init(int number_a)
	{
		list* new_unit_list = new list[1];
		new_unit_list->field = number_a;
		new_unit_list->next = new_unit_list;
		new_unit_list->prev = new_unit_list;
		return new_unit_list;
	}
	list* addelem(list* lst, int number_a)
	{
		list* temp, * p;
		temp = new list[1];
		p = lst->next;
		lst->next = temp;
		temp->field = number_a;
		temp->next = p;
		temp->prev = lst;
		p->prev = temp;
		return temp;
	}
	list* deletelem(list* lst)
	{
		list* prev, * next;
		prev = lst->prev;
		next = lst->next;
		prev->next = lst->next;
		next->prev = lst->prev;
		delete lst;
		return prev;
	}
	void listprint(list* lst)
	{
		list* p;
		p = lst;
		do
		{
			cout << p->field << "  ";
			p = p->next;
		} while (p != lst);
	}
	void listprintr(list* lst)
	{
		list* p;
		p = lst;
		do
		{
			p = p->prev;
			cout << p->field << "  ";
		} while (p != lst);
	}
	list* swap(list* lst1, list* lst2, list* head)
	{
		list* prev1, * prev2, * next1, * next2;
		prev1 = lst1->prev;
		prev2 = lst2->prev;
		next1 = lst1->next;
		next2 = lst2->next;
		if (lst2 == next1)
		{
			lst2->next = lst1;
			lst2->prev = prev1;
			lst1->next = next2;
			lst1->prev = lst2;
			next2->prev = lst1;
			prev1->next = lst2;
		}
		else if (lst1 == next2)
		{
			lst1->next = lst2;
			lst1->prev = prev2;
			lst2->next = next1;
			lst2->prev = lst1;
			next1->prev = lst2;
			prev2->next = lst1;
		}
		else
		{
			prev1->next = lst2;
			lst2->next = next1;
			prev2->next = lst1;
			lst1->next = next2;
			lst2->prev = prev1;
			next2->prev = lst1;
			lst1->prev = prev2;
			next1->prev = lst2;
		}
		if (lst1 == head)
		{
			return lst2;
		}
		if (lst2 == head)
		{
			return lst1;
		}
		return head;
	}
	void function_list()
	{
		list* my_list, * head, * unit;
		int element_list;
		int menu = 0;
		bool exit_menu = true;
		cout << "Enter initilization element list: ";
		cin >> element_list;
		head = init(element_list);
		my_list = head;
		while (exit_menu)
		{
			cout << "\n2-Enter add element to list\n3-Enter print list\n4-Enter swap 2 and 3 element\n5-Enter delete element 3\n0-Enter exit\nExit number: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
			{
				break;
			}
			case 2:
			{
				cout << "Enter element list: ";
				cin >> element_list;
				my_list = addelem(my_list, element_list);
				break;
			}
			case 3:
			{
				listprint(head);
				break;
			}
			case 4:
			{
				head = swap(head->next, head->next->next, head);
				break;
			}
			case 5:
			{
				deletelem(head->next->next);
				break;
			}
			default:
			{
				exit_menu = false;
				break;
			}
			}
		}
	}
	int main()
	{
		system("chcp 1251");
		int menu = 0;
		bool exit_menu = true;
		while (exit_menu)
		{
			cout << "\n***** Menu *****\n1-Enter stack\n2-Enter queue\n3-Enter list\n0-Enter list\n0-Enter exit\nEnter number: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
			{
				function_stack();
				break;
			}
			case 2:
			{
				function_queue();
				break;
			}
			case 3:
			{
				function_list();
				break;
			}
			default:
			{
				exit_menu = false;
				break;
			}
			}
		}
		system("pause");
		return 0;
	}
