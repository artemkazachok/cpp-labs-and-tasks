#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int HashFunction(int otdel, int year)
{
    return (otdel * 31 + year * 17) % 100;
}
struct Employee
{
    char name[15];
    int otdel;
    char dolz[10];
    int year;
    Employee* Prev;
    Employee* Next;
    int hashValue;
};
struct HashNode
{
    int hashValue;        // вычисленное хеш-значение
    HashNode* NextHash;   // указатель на следующий хеш в цепочке коллизий
    Employee* employee;   // указатель на сотрудника

    HashNode() : hashValue(0), NextHash(nullptr), employee(nullptr) {}
};

class HashTable
{
private:
    HashNode* table[100];

public:
    HashTable()
    {
        for (int i = 0; i < 100; i++)
        {
            table[i] = nullptr;
        }
    }
    // Добавление узла в хеш-таблицу
    void AddNode(int hashVal, Employee* emp)
    {
        HashNode* newNode = new HashNode();
        if (!newNode)
        {
            cout << "No memory for hash node.\n";
            return;
        }
        newNode->hashValue = hashVal;
        newNode->employee = emp;
        newNode->NextHash = nullptr;
        if (table[hashVal] == nullptr)
        {
            table[hashVal] = newNode;
        }
        else
        {
            newNode->NextHash = table[hashVal];
            table[hashVal] = newNode;
        }
    }
    Employee* FindByHash(int hashVal, int otdel, int year)
    {
        HashNode* current = table[hashVal];
        while (current != nullptr)
        {
            // Проверка на случай коллизии
            if (current->employee->otdel == otdel && current->employee->year == year)
            {
                return current->employee;
            }
            current = current->NextHash;
        }
        return nullptr;
    }

    void RemoveNode(int hashVal, Employee* emp)
    {
        if (table[hashVal] == nullptr)
        {
            return;
        }
        HashNode* current = table[hashVal];
        HashNode* prev = nullptr;
        while (current != nullptr)
        {
            if (current->employee == emp)
            {
                if (prev == nullptr)
                {
                    table[hashVal] = current->NextHash;
                }
                else
                {
                    prev->NextHash = current->NextHash;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->NextHash;
        }
    }
    // Очистка таблицы
    void Clear()
    {
        for (int i = 0; i < 100; i++)
        {
            HashNode* current = table[i];
            while (current != nullptr)
            {
                HashNode* toDelete = current;
                current = current->NextHash;
                delete toDelete;
            }
            table[i] = nullptr;
        }
    }

    void PrintHashTable()
    {
        cout << "\nХеш-таблица\n";
        for (int i = 0; i < 100; i++)
        {
            if (table[i] != nullptr)
            {
                cout << "Индекс " << i << ": ";
                HashNode* current = table[i];
                while (current != nullptr)
                {
                    cout << current->employee->name << " (отд." << current->employee->otdel << " г." << current->employee->year << ") -> ";
                    current = current->NextHash;
                }
                cout << "NULL\n";
            }
        }
        cout << endl;
    }
};

HashTable globalHashTable;

void AddElemInEnd(Employee** begin, Employee** end, int otdel, int year, char name[15], char dolz[20])
{
    Employee* t = new Employee();
    if (!t)
    {
        cout << "No memory.\n";
        system("pause");
        return;
    }
    t->otdel = otdel;
    t->year = year;
    strcpy_s(t->name, 15, name);
    strcpy_s(t->dolz, 10, dolz);
    t->Next = NULL;
    t->Prev = *end;
    t->hashValue = HashFunction(otdel, year);
    if (*begin == NULL && *end == NULL)
    {
        *begin = *end = t;
    }
    else
    {
        (*end)->Next = t;
        *end = t;
    }
    globalHashTable.AddNode(t->hashValue, t); //Добавляем в хеш-таблицу
}

void PrintElement(Employee* t)
{
    if (t == NULL)
    {
        cout << "Элемент не найден!\n";
        return;
    }
    int staz = 2026 - t->year;
    cout << "Otdel: " << t->otdel << " name: " << t->name << " dolz: " << t->dolz << " year: " << t->year << " staz: " << staz << " hash: " << t->hashValue << endl;
}

void ViewFromBegin(Employee** begin)
{
    Employee* t = *begin;
    while (t != NULL)
    {
        PrintElement(t);
        t = t->Next;
    }
}

void ViewFromEnd(Employee** end)
{
    Employee* t = *end;
    while (t != NULL)
    {
        int staz = 2026 - t->year;
        cout << "Otdel: " << t->otdel << " name: " << t->name << " dolz: " << t->dolz << " year: " << t->year << " staz: " << staz << " hash: " << t->hashValue << endl;
        t = t->Prev;
    }
}

Employee* FindFromBegin(Employee* begin, int key)
{
    Employee* t = begin;
    while (t != NULL)
    {
        if (t->otdel == key)
        {
            return t;
        }
        t = t->Next;
    }
    return NULL;
}

Employee* FindByHashTable(int otdel, int year)//поичк через хеш-таблицу
{
    int hashVal = HashFunction(otdel, year);
    return globalHashTable.FindByHash(hashVal, otdel, year);
}

Employee* FindFromEnd(Employee* end, int key)
{
    Employee* t = end;
    while (t != NULL)
    {
        if (t->otdel == key)
        {
            return t;
        }
        t = t->Prev;
    }
    return NULL;
}

void DeleteElem(Employee** begin, Employee** end, int key)
{
    Employee* toDel = FindFromBegin(*begin, key);
    if (toDel == NULL || *begin == NULL)
    {
        cout << "No find element to delete or Employee is empty.\n";
        return;
    }
    globalHashTable.RemoveNode(toDel->hashValue, toDel);
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

void AddElem(Employee** begin, Employee** end, int key, int otdel, int year, char name[15], char dolz[20])
{
    Employee* old = FindFromBegin(*begin, key);
    if (old == NULL)
    {
        cout << "No find element to add new element after its.\n";
        return;
    }
    Employee* t = new Employee();
    if (!t)
    {
        cout << "No memory.\n";
        system("pause");
        return;
    }
    t->otdel = otdel;
    t->year = year;
    strcpy_s(t->name, 15, name);
    strcpy_s(t->dolz, 10, dolz);
    t->hashValue = HashFunction(otdel, year);
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
    globalHashTable.AddNode(t->hashValue, t);
}

void DeleteFirst(Employee** begin, Employee** end)
{
    if (*begin == NULL)
    {
        cout << "Список пуст. Удалять нечего.\n";
        return;
    }
    Employee* t = *begin;
    globalHashTable.RemoveNode(t->hashValue, t);
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

void DeleteEmployee(Employee** begin, Employee** end)
{
    while (*begin != NULL)
    {
        DeleteFirst(begin, end);
    }
    globalHashTable.Clear(); //очищаем польностью хеш-таблицу при удалении всего списка сотрудников
}

int main()
{
    system("chcp 1251");
    Employee* begin = NULL, * end = NULL;
    Employee* t = new Employee();
    if (!t)
    {
        cout << "No memory.\n";
        system("pause");
        return 0;
    }
    cout << "Первый элемент для добавления\n";
    cout << "Номер отдела: ";
    cin >> t->otdel;
    cout << "Год начала работы(Пример: 2008): ";
    cin >> t->year;
    cout << "Имя(15): ";
    cin.ignore();
    cin.getline(t->name, 15);
    cout << "Должность(10): ";
    cin.getline(t->dolz, 10);
    t->hashValue = HashFunction(t->otdel, t->year);
    t->Prev = t->Next = NULL;
    begin = end = t;
    globalHashTable.AddNode(t->hashValue, t);
    int r = 0, otdel, key;
    char name[15];
    char dolz[10];
    do
    {
        int year;
        cout << "\n0-завершить программу\n1-добавить элемент в конец списка\n2-прочитать список с начала\n3-прочитать список с конца\n4-найти элемент с искомым отделом(проход с начала)\n5-найти элемент с искомым отделом(проход с конца)\n6-удалить элемент из начала списка\n7-удалить элемент с искомым отделом\n8-добавить элемент за элементом с искомым отделом\n9-удалить весь список\n10-поиск через хеш-таблицу\n11-вывести хеш-таблицу\nВведите пункт меню: ";
        cin >> r;
        switch (r)
        {
        case 0:
        {
            break;
        }
        case 1:
        {
            cout << "Номер отдела: ";
            cin >> otdel;
            cout << "Год начала работы(Пример: 2008): ";
            cin >> year;
            cout << "Имя(15): ";
            cin.ignore();
            cin.getline(name, 15);
            cout << "Должность(10): ";
            cin.getline(dolz, 10);
            AddElemInEnd(&begin, &end, otdel, year, name, dolz);
            cout << "Сотрудник сохранен, проверьте.\n";
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
            cout << "Какой отдел ищете: ";
            cin >> otdel;
            Employee* t = FindFromBegin(begin, otdel);
            PrintElement(t);
            break;
        }
        case 5:
        {
            cout << "Какой отдел ищете: ";
            cin >> otdel;
            PrintElement(FindFromEnd(end, otdel));
            break;
        }
        case 6:
        {
            DeleteFirst(&begin, &end);
            break;
        }
        case 7:
        {
            cout << "Какой отдел ищете, чтобы удалить сотрудника: ";
            cin >> otdel;
            DeleteElem(&begin, &end, otdel);
            break;
        }
        case 8:
        {
            cout << "Какой отдел ищете, за которым хотите добавить нового сотрудника: ";
            cin >> key;
            if (FindFromBegin(begin, key) == NULL)
            {
                cout << "Такого значения в списке нет.\n";
                break;
            }
            cout << "Какого сотрудника добавить\n";
            cout << "Номер отдела: ";
            cin >> otdel;
            cout << "Год начала работы(Пример: 2008): ";
            cin >> year;
            cout << "Имя(15): ";
            cin.ignore();
            cin.getline(name, 15);
            cout << "Должность(10): ";
            cin.getline(dolz, 10);
            AddElem(&begin, &end, key, otdel, year, name, dolz);
            break;
        }
        case 9:
        {
            DeleteEmployee(&begin, &end);
            break;
        }
        case 10:
        {
            int searchOtdel, searchYear;
            cout << "Введите номер отдела: ";
            cin >> searchOtdel;
            cout << "Введите год начала работы: ";
            cin >> searchYear;
            Employee* found = FindByHashTable(searchOtdel, searchYear);
            if (found)
            {
                cout << "Найден через хеш-таблицу:\n";
                PrintElement(found);
            }
            else
            {
                cout << "Сотрудник с отдела " << searchOtdel << " и годом " << searchYear << " не найден.\n";
            }
            break;
        }
        case 11:
        {
            globalHashTable.PrintHashTable();
            break;
        }
        }
    } while (r != 0);

    system("pause");
    return 0;
}