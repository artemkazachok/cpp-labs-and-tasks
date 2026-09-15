#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int a = 100;
    char* X = new char[a];
    cin.ignore();
    cout << "¬ведите текст: ";
    cin.get(X, a);
    int count = 0;
    int* pcount = &count;
    int start = 0, end = 0;
    int* pstart = &start;
    int* pend = &end;
    int word = 3;
    int* pword = &word;
    for (int i = 0; i < a; i++)
    {
        if (X[i] == ' ' || (*(X + i) == ' ' || *(X + i) == ',' || *(X + i) == ';' || *(X + i) == ':' || *(X + i) == '!' || *(X + i) == '?' ))
        {
            (*pcount)++;
        }
        if (*pcount == 2 && (*(X + i) == ' ' || *(X + i) == ',' || *(X + i) == ';' || *(X + i) == ':' || *(X + i) == '!' || *(X + i) == '?'))
        {
            *pstart = i + 1;
        }
        if (*pcount == 2 && X[i] == '\0')
        {
            cout << *pword << " слово: ";
            for (int j = *pstart; X[j] != '\0'; j++)
            {
                cout << X[j];
            }
        }
        if (*pcount == 3 && (*(X + i) == ' ' || *(X + i) == ',' || *(X + i) == ';' || *(X + i) == ':' || *(X + i) == '!' || *(X + i) == '?'))
        {
            *pend = i - 1;
            cout << *pword << " слово: ";
            for (int j = *pstart; j < *pend + 1; j++)
            {
                cout << X[j];
            }
            cout << endl;
            *pcount = 0;
            *pword = word + 3;
        }
    }
}