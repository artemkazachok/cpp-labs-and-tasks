#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    do
    {
        cout << "1. 1 задание" << endl;
        cout << "2. 2 задание" << endl;
        cout << "3. 3 задание" << endl;
        cout << "4. 4 задание" << endl;
        cout << "0. Завершить работу программы." << endl;
        cout << "\nВведите номер из списка: ";
        cin >> n;
        switch (n)
        {
        case 1:
        {
            int n = 100;
            int* pn = &n;
            int* X = new int[*pn] { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
                -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
                -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
                30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
                -97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
                -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
                88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
                -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
                98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
                78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };
            int first = 0, last = 0;
            int* pfirst = &first, * plast = &last;
            for (int i = 0; i < *pn; i++)//ищем первый 0
            {
                if (*(X + i) == 0)// X[i]
                {
                    *pfirst = i;
                    break;
                }

            }
            for (int i = 0; i < *pn; i++)// ищем самый последний 0
            {
                if (*(X + i) == 0)// X[i]
                {
                    *plast = i;
                }
            }
            int sum = 0;
            int* psum = &sum;
            *psum = (*plast - *pfirst) - 1;
            cout << "Количество элементов между первым и последним нулем: " << *psum << endl;
            delete[] X;
            X = NULL;
            cout << endl;
            break;
        }
        case 2:
        {
            int k = 100;
            int* pk = &k;
            int* Y = new int[*pk] { 16, 78, 99, 6, -29, 19, -52, 65, -88, 51,
                -79, -22, 32, -25, -62, -69, -2, -59, -75, 89,
                -87, 95, -22, 85, -49, -75, 76, 73, -59, -52,
                30, 49, -28, -48, 0, 57, -6, -85, 0, -18,
                -97, -21, -95, 64, 22, -2, 69, -84, -1, -71,
                -25, 47, 72, 43, 15, -44, 44, 61, 4, 74,
                88, -61, 0, -64, -83, 97, 0, 90, 15, 8,
                -54, 19, 73, 35, -67, -87, 85, -99, -70, 10,
                98, 58, -10, -29, 95, 62, 77, 89, 36, -32,
                78, 60, -79, -18, 30, -13, -34, -92, 1, -38 };
            if (Y == NULL)
            {
                cout << "Не удалось найти массив: ";
                system("pause");
                return 0;
            }
            int m = 10, n = 10;
            int* pm = &m;
            int* pn = &n;
            int** X = new int* [*pm];
            if (X == NULL)
            {
                cout << "Не удалось найти массив: ";
                system("pause");
                return 0;
            }
            for (int i = 0; i < *pm; i++)
            {
                *(X + i) = new int[*pn];
                if (*(X + i) == NULL)
                {
                    cout << "Не удалось найти массив: ";
                    delete[] X;
                    X == NULL;
                    system("pause");
                    return 0;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    *(*(X + i) + j) = *(Y + (i * 10 + j));// i * 10 - строка + j - столбец
                }
            }
            int sum = 0;
            int* psum = &sum;
            for (int i = 0; i < *pm; i++)
            {
                for (int j = i + 1; j < *pn; j++)
                {
                    *psum += *(*(X + i) + j);
                }
            }
            cout << "Сумма: " << *psum;
            delete[] Y;
            Y = NULL;
            for (int i = 0; i < *pn; i++)
            {
                delete[] *(X + i);
                *(X + i) = NULL;
            }
            delete[] X;
            X = NULL;
            cout << endl;
            break;

        }
        case 3:
        {
            int m = 5, n = 10, r = 7;
            int* pm = &m, * pn = &n, * pr = &r;
            char*** X = new char** [*pm];
            if (X == NULL)
            {
                cout << "Не удалось найти массив: ";
                system("pause");
                return 0;
            }
            srand(time(NULL));
            for (int i = 0; i < *pm; i++)
            {
                *(X + i) = new char* [*pn];
                if (*(X + i) == NULL)
                {
                    cout << "Не удалось найти массив: ";
                    system("pause");
                    return 0;
                }
                for (int j = 0; j < *pn; j++)
                {
                    *(*(X + i) + j) = new char[*pr];
                    if (*(*(X + i)+ j) == NULL)
                    {
                        cout << "Не удалось найти массив: ";
                        system("pause");
                        return 0;
                    }
                }
            }
            for (int i = 0; i < *pm; i++)
            {
                for (int j = 0; j < *pn; j++)
                {
                    for (int k = 0; k < *pr; k++)
                    {
                        *(*(*(X + i) + j) + k) = 'A' + rand() % 26;
                    }
                }
            }
            for (int i = 0; i < *pm; i++)
            {
                for (int j = 0; j < *pn; j++)
                {
                    for (int k = 0; k < *pr; k++)
                    {
                        cout << *(*(*(X + i) + j) + k);
                    }
                    cout << '\t';
                }
                cout << endl;
                cout << endl;
            }
            int count = 0;
            int* pcount = &count;
            for (int i = 0; i < *pm; i++)
            {
                for (int j = 0; j < *pn; j++)
                {
                    bool proverka = true;
                    for (int k = 0; k < *pr; k++)
                    {

                        if (*(*(*(X + i) + j) + k) == 'Q')
                        {
                            proverka = false;
                            break;
                        }
                    }
                    if (proverka == true)
                    {
                        (*pcount)++;
                    }
                }
            }
            cout << endl;
            cout << *pcount << endl;
            for (int i = 0; i < *pm; i++)
            {
                for (int j = 0; j < *pn; j++)
                {
                    delete[] *(*(X + i) + j);
                    *(*(X + i) + j) = NULL;
                }
                delete[] *(X + i);
                *(X + i) = NULL;
            }
            delete[] X;
            X = NULL;
            cout << endl;
            break;
        }
        case 4:
        {
            int a = 100;
            char* X = new char[a];
            cin.ignore();
            cout << "Введите текст: ";
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
                if (X[i] == ' ' || (*(X + i) == ' ' || *(X + i) == ',' || *(X + i) == ';' || *(X + i) == ':' || *(X + i) == '!' || *(X + i) == '?'))
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
            cout << endl;
            break;
        }
        }
    } while (n != 0);
}