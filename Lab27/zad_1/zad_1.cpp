#include <iostream>
#include <string>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
struct book
{
	int RegNumBook;
	char author[50];
	char name[50];
	int year;
	char publishingHouse[50];
	int countPage;
};
struct stack
{
	book* mas = nullptr;
	int size = 0;
	book* change_size(book* Mold, int Osize, int Nsize)
	{
		book* NewMas = new book[Nsize];
		for (int i = 0; i < ((Osize < Nsize) ? Osize : Nsize); i++)
		{
			NewMas[i] = Mold[i];
		}
		delete[] Mold;
		Mold = NULL;
		return NewMas;
	}
	void push()//добавление
	{
		mas = change_size(mas, size, size + 1);
		book x;
		cout << "Введите регистрационный номер книги: ";
		cin >> x.RegNumBook;
		char NewAuthor[50];
		cout << "Ввведите автора: ";
		cin.ignore();
		cin.getline(NewAuthor, 50);
		strcpy_s(x.author, 50, NewAuthor);
		char NewName[50];
		cout << "Ввведите название книги: ";
		cin.getline(NewName, 50);
		strcpy_s(x.name, 50, NewName);
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
		x.year = Provyear;
		char NewPublish[50];
		cout << "Ввведите издателя: ";
		cin.ignore();
		cin.getline(NewPublish, 50);
		strcpy_s(x.publishingHouse, 50, NewPublish);
		cout << "Введите кол-во страниц: ";
		cin >> x.countPage;
		mas[size] = x;
		size++;
	}
	void change()
	{
		if (size != 0)
		{
			int Choose;
			do
			{
				cout << "Выберите что хотите поменять в последней введенной книге:" << endl;
				{
					cout << "0. Ничего" << endl;
					cout << "1. Регистрационный номер книги" << endl;
					cout << "2. Автор" << endl;
					cout << "3. Название" << endl;
					cout << "4. Год издания" << endl;
					cout << "5. Издательство" << endl;
					cout << "6. Количество страниц" << endl;
					cout << "Напишите пункт меню: ";
					cin >> Choose;
					switch (Choose)
					{
					case 0:
					{
						break;
					}
					case 1:
					{
						cout << "Введите новый регистрационный номер книги: ";
						cin >> mas[size-1].RegNumBook;
						break;
					}
					case 2:
					{
						char NewAuthor[50];
						cout << "Ввведите нового автора: ";
						cin.getline(NewAuthor, 50);
						strcpy_s(mas[size-1].author, 50, NewAuthor);
						break;
					}
					case 3:
					{
						char NewName[50];
						cout << "Ввведите новое название книги: ";
						cin.getline(NewName, 50);
						strcpy_s(mas[size-1].name, 50, NewName);
						break;
					}
					case 4:
					{
						cout << "Введите новый год издания: ";
						cin >> mas[size-1].year;
						break;
					}
					case 5:
					{
						char NewPublish[50];
						cout << "Ввведите нового издателя: ";
						cin.getline(NewPublish, 50);
						strcpy_s(mas[size-1].publishingHouse, 50, NewPublish);
						break;
					}
					case 6:
					{
						cout << "Введите новое кол-во страниц: ";
						cin >> mas[size-1].countPage;
						break;
					}
					}
				}
			} while (Choose != 0);
		} 
		else
		{
			cout << "Создано 0 книг. Создайте минимум 1 книгу для работы с ней" << endl;
		}
	}
	void pop_book()
	{
		if (size != 0)
		{
			int Choose;
			do
			{
				cout << "Выберите что хотите удалить в последней введенной книге:" << endl;
				{
					cout << "0. Ничего" << endl;
					cout << "1. Регистрационный номер книги" << endl;
					cout << "2. Автор" << endl;
					cout << "3. Название" << endl;
					cout << "4. Год издания" << endl;
					cout << "5. Издательство" << endl;
					cout << "6. Количество страниц" << endl;
					cout << "7. Удалить всю книгу" << endl;
					cout << "Напишите пункт меню: ";
					cin >> Choose;
					switch (Choose)
					{
					case 0:
					{
						break;
					}
					case 1:
					{
						mas[size - 1].RegNumBook = 0;
						break;
					}
					case 2:
					{
						strcpy_s(mas[size - 1].author, 50, "[ Данные удалены ]");
						break;
					}
					case 3:
					{
						strcpy_s(mas[size - 1].name, 50, "[ Данные удалены ]");
						break;
					}
					case 4:
					{
						mas[size - 1].year = 0;
						break;
					}
					case 5:
					{
						strcpy_s(mas[size - 1].publishingHouse, 50, "[ Данные удалены ]");
						break;
					}
					case 6:
					{
						mas[size - 1].countPage = 0;
						break;
					}
					case 7:
					{
						if (size != 0)
						{
							mas = change_size(mas, size, size - 1);
							size--;
							cout << "Успешно удалена книга" << endl;
						}
						else
						{
							cout << "В массиве нет книг!" << endl;
						}
					}
					}
				}
			} while (Choose != 0);
		}
		else
		{
			cout << "Создано 0 книг. Создайте минимум 1 книгу для работы с ней" << endl;
		}
	}
	void showOne()
	{
		if (size != 0)
		{
			cout << "Вывод данных последней введенной книги: " << endl;
			cout << "Регистрационный номер книги: " << mas[size - 1].RegNumBook << endl;
			cout << "Автор: " << mas[size - 1].author << endl;
			cout << "Название книги: " << mas[size - 1].name << endl;
			cout << "Год издания: " << mas[size - 1].year << endl;
			cout << "Издательство: " << mas[size - 1].publishingHouse << endl;
			cout << "Кол-во страниц: " << mas[size - 1].countPage << endl;
		}
		else
		{
			cout << "Создано 0 книг. Создайте минимум 1 книгу для работы с ней" << endl;
		}
	}
	void showAll()
	{
		if (size != 0)
		{
			for (int i = size - 1; i >= 0; i--)
			{
				cout << "Вывод данных последней введенной книги: " << endl;
				cout << "Регистрационный номер книги: " << mas[i].RegNumBook << endl;
				cout << "Автор: " << mas[i].author << endl;
				cout << "Название книги: " << mas[i].name << endl;
				cout << "Год издания: " << mas[i].year << endl;
				cout << "Издательство: " << mas[i].publishingHouse << endl;
				cout << "Кол-во страниц: " << mas[i].countPage << endl;
			}
		}
		else
		{
			cout << "Создано 0 книг. Создайте минимум 1 книгу для работы с ней" << endl;
		}
	}
	void countBook()
	{
		cout << "Кол-во книг: " << size << endl;
	}
	void countYear()
	{
		if (size != 0)
		{
			int year = 2026 - mas[size - 1].year;
			cout << "Возраст книги равен: " << year << endl;
		}
		else
		{
			cout << "Создано 0 книг. Создайте минимум 1 книгу для работы с ней" << endl;
		}
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choose;
	stack one;
	do
	{
		cout << "Меню:" << endl;
		cout << "0. Завершить работу программы." << endl;
		cout << "1. Добавить книгу." << endl;
		cout << "2. Изменить данные последней введенной книги." << endl;
		cout << "3. Удалить данные последней введенной книги." << endl;
		cout << "4. Вывод последней введенной книги." << endl;
		cout << "5. Вывод всех книг." << endl;
		cout << "6. Кол-во книг." << endl;
		cout << "7. Кол-во лет книге." << endl;
		cin >> choose;
		switch (choose)
		{
		case 0:
		{
			break;
		}
		case 1:
		{
			one.push();
			break;
		}
		case 2:
		{
			one.change();
			break;
		}
		case 3:
		{
			one.pop_book();
			break;
		}
		case 4:
		{
			one.showOne();
			break;
		}
		case 5:
		{
			one.showAll();
			break;
		}
		case 6:
		{
			one.countBook();
			break;
		}
		case 7:
		{
			one.countYear();
			break;
		}
		}
	} while (choose != 0);
	system("pause");
	return 0;
}