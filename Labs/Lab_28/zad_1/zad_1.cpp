#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
using namespace std;
struct book
{
	int RegNumBook;
	char author[50];
	char name[50];
	int year;
	char publishingHouse[50];
	int countPage;
};
int countBook = 0;
struct HashNode
{
	book all;// книга
	int hash_code;// код книги
	HashNode* next;
};
HashNode* mas[10]{ nullptr };
HashNode* lastAddedNode = nullptr;
int generate_code(book one)
{
	int code = 1;
	for (int i = 0; one.author[i] != '\0'; i++)
	{
		code += (one.author[i] * (i + 1));
	}
	for (int i = 0; one.name[i] != '\0'; i++)
	{
		code += (one.name[i] * (i + 1));
	}
	return abs(code % 10);
}
void createMas()
{
	int count;
	cout << "Введите кол-во книг (не больше 10): ";
	cin >> count;
	book* masBook = new book[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Введите регистрационный номер книги: ";
		cin >> masBook[i].RegNumBook;
		char NewAuthor[50];
		cout << "Ввведите автора: ";
		cin.ignore();
		cin.getline(NewAuthor, 50);
		strcpy_s(masBook[i].author, 50, NewAuthor);
		char NewName[50];
		cout << "Ввведите название книги: ";
		cin.getline(NewName, 50);
		strcpy_s(masBook[i].name, 50, NewName);
		int Provyear;
		do
		{
			cout << "Введите год издания: ";
			cin >> Provyear;
			if (Provyear > 2026)
			{
				cout << "Год издания не может быть больше текущего (2026). Ввведите год заново" << endl;
			}
		} while (Provyear > 2026);
		masBook[i].year = Provyear;
		char NewPublish[50];
		cout << "Ввведите издателя: ";
		cin.ignore();
		cin.getline(NewPublish, 50);
		strcpy_s(masBook[i].publishingHouse, 50, NewPublish);
		cout << "Введите кол-во страниц: ";
		cin >> masBook[i].countPage;
		int index = generate_code(masBook[i]);
		HashNode* NewNode = new HashNode;
		NewNode->all = masBook[i];
		NewNode->hash_code = index;
		NewNode->next = mas[index];
		mas[index] = NewNode;
		lastAddedNode = NewNode; 
		countBook++;
	}
	delete[] masBook;
}
void Show()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Ячейка [" << i << "]: ";
		if (mas[i] == nullptr)
		{
			cout << "Нет значений" << endl;
			continue;
		}
		HashNode* current = mas[i];
		int num = 1;
		while (current != nullptr)
		{
			cout << "\nВывод данных " << num << "-й книги в этой ячейке: " << endl;
			cout << "Регистрационный номер книги: " << current->all.RegNumBook << endl;
			cout << "Автор: " << current->all.author << endl;
			cout << "Название книги: " << current->all.name << endl;
			cout << "Год издания: " << current->all.year << endl;
			cout << "Издательство: " << current->all.publishingHouse << endl;
			cout << "Кол-во страниц: " << current->all.countPage << endl;
			num++;
			current = current->next;
		}
	}
}
void addOne()
{
	if (countBook != 10)
	{
		book one;
		cout << "Введите регистрационный номер книги: ";
		cin >> one.RegNumBook;
		char NewAuthor[50];
		cout << "Ввведите автора: ";
		cin.ignore();
		cin.getline(NewAuthor, 50);
		strcpy_s(one.author, 50, NewAuthor);
		char NewName[50];
		cout << "Ввведите название книги: ";
		cin.getline(NewName, 50);
		strcpy_s(one.name, 50, NewName);
		int Provyear;
		do
		{
			cout << "Введите год издания: ";
			cin >> Provyear;
			if (Provyear > 2026)
			{
				cout << "Год издания не может быть больше текущего (2026). Ввведите год заново" << endl;
			}
		} while (Provyear > 2026);
		one.year = Provyear;
		char NewPublish[50];
		cout << "Ввведите издателя: ";
		cin.ignore();
		cin.getline(NewPublish, 50);
		strcpy_s(one.publishingHouse, 50, NewPublish);
		cout << "Введите кол-во страниц: ";
		cin >> one.countPage;
		int index = generate_code(one);
		HashNode* NewNode = new HashNode;
		NewNode->all = one;
		NewNode->hash_code = index;
		NewNode->next = mas[index];
		mas[index] = NewNode;
		lastAddedNode = NewNode; 
		countBook++;
	}
}
void deleteBook()
{

	Show();
	int chooseDel;
	cout << "Выберите книгу которую вы хотите удалить: ";
	cin >> chooseDel;
	if (mas[chooseDel] != nullptr)
	{
		HashNode* current = mas[chooseDel];
		int num = 0;
		while (current != nullptr)
		{
			num++;
			current = current->next;
		}
		cout << "Всего " << num << " книги с одинаковыми значениями." << endl;
		int chodelpov;
		do 
		{
			cout << "Какую книгу вы хотите удалить: ";
			cin >> chodelpov;
			if (0 > chodelpov || chodelpov > num)
			{
				cout << "Такой книги нет. Ввведите снова" << endl;
			}

		} while (1 > chodelpov || chodelpov > num);
		current = mas[chooseDel];     
		HashNode* previous = nullptr;
		int currentNum = 1;          
		while (current != nullptr && currentNum != chodelpov)
		{
			previous = current;       
			current = current->next;   
			currentNum++;           
		}
		if (previous == nullptr)
		{
			mas[chooseDel] = current->next;
		}
		else
		{
			previous->next = current->next;
		}
		delete current;
		countBook--;
		cout << "Книга успешно удалена из памяти!" << endl;
	}
	else
	{
		cout << "Эта ячейка пустая!" << endl;
	}

}
void change()
{
	if (countBook == 0 || lastAddedNode == nullptr)
	{
		cout << "Создано 0 книг.Создайте минимум 1 книгу для работы с ней!" << endl;
		return;
	}
	int Choose;
	do
	{
		cout << "Редактирование последнего элемента" << endl;
		cout << "0. Выход из редактирования" << endl;
		cout << "1. Регистрационный номер книги" << endl;
		cout << "2. Автор" << endl;
		cout << "3. Название" << endl;
		cout << "4. Год издания" << endl;
		cout << "5. Издательство" << endl;
		cout << "6. Количество страниц" << endl;
		cout << "Напишите пункт меню: ";
		cin >> Choose;
		cin.ignore(); 
		switch (Choose)
		{
		case 0:
			break;
		case 1:
			cout << "Введите новый регистрационный номер книги: ";
			cin >> lastAddedNode->all.RegNumBook;
			cin.ignore();
			break;
		case 2:
			cout << "Введите нового автора: ";
			cin.getline(lastAddedNode->all.author, 50);
			lastAddedNode->hash_code = generate_code(lastAddedNode->all);
			break;
		case 3:
			cout << "Введите новое название: ";
			cin.getline(lastAddedNode->all.name, 50);
			lastAddedNode->hash_code = generate_code(lastAddedNode->all);
			break;
		case 4:
		{
			int Provyear;
			do
			{
				cout << "Введите новый год издания: ";
				cin >> Provyear;
				if (Provyear > 2026) cout << "Год не может быть больше 2026!" << endl;
			} while (Provyear > 2026);
			lastAddedNode->all.year = Provyear;
			cin.ignore();
			break;
		}
		case 5:
			cout << "Введите нового издателя: ";
			cin.getline(lastAddedNode->all.publishingHouse, 50);
			break;
		case 6:
			cout << "Введите новое кол-во страниц: ";
			cin >> lastAddedNode->all.countPage;
			cin.ignore();
			break;
		default:
			cout << "Неверный пункт меню! Попробуйте еще раз." << endl;
		}
	} while (Choose != 0);

	cout << "\nРедактирование завершено успешно!" << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choose;
	do
	{
		cout << "Меню:" << endl;
		cout << "0. Завершить работу программы." << endl;
		cout << "1. Создать массив с книгами." << endl;
		cout << "2. Добавить одну книгу." << endl;
		cout << "3. Изменить данные последней введенной книги." << endl;
		cout << "4. Удалить книгy." << endl;
		cout << "5. Вывод всех книг." << endl;
		cin >> choose;
		switch (choose)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			createMas();
			break;
		}
		case 2:
		{
			addOne();
			break;
		}
		case 3:
		{
			change();
			break;
		}
		case 4:
		{
			deleteBook();
			break;
		}
		case 5:
		{
			Show();
			break;
		}
		}
	} while (choose != 0);
	system("pause");
	return 0;
}