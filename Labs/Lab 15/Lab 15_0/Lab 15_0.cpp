#include <iostream>
#include <Windows.h>
using namespace std;

void bubleSort(int*, int);//прототип функции сортировки "пузырьком" по ВОЗРАСТАНИЮ
void print(int*, int);//прототип функции печати содержимого элементов одномерного целочисленного массива на консоль
void printStr(char*, int);//прототип функции печати содержимого элементов одномерного символьного массива на консоль
void swap(int&, int&);//прототип функции обмена значениями между двумя элементами
int minimumFrom(int*, int, int);//прототип функции для нахождения индекса (номера) элемента с минимальным значением на участке массива
void selectionSort(int*, int);//прототип функции сортировки целочисленного одномерного массива выбором наименьшеного элемента
void insertSort(char*, int);//прототип функции сортировки по ВОЗРАСТАНИЮ одномерного символьного массива методом вставок
void quickSort(int*, int, int);//прототип функции быстрой сортировки (рекурсивной сортировки, сортировки Хоара)
void shellSort(int*, int);//прототип функции сортировки методом Шелла
int binarySearch(int*, int, int);//прототип функции бинарного поиска значения в одномерном массиве передаваемого размера. Массив ДОЛЖЕН БЫТЬ ОТСОРТИРОВАН по ВОЗРАСТАНИЮ

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int size = 10;
	int ar[size] = { 9,0,8,1,7,2,6,3,5,4 };
	print(ar, size);
	bubleSort(ar, size);
	cout << "Печать отсортированного массива методом ""пузырька"" по ВОЗРАСТАНИЮ:\n";
	print(ar, size);
	int mas[size] = { 9,8,7,6,5,4,3,2,1,0 };//{ 9,0,8,1,7,2,6,3,5,4 };
	print(mas, size);
	selectionSort(mas, size);
	cout << "Печать отсортированного массива методом выбора наименьшего значения по ВОЗРАСТАНИЮ:\n";
	print(mas, size);
	char s[size] = { 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a' };
	printStr(s, size);
	insertSort(s, size);
	cout << "Печать отсортированного массива методом вставок по ВОЗРАСТАНИЮ:\n";
	printStr(s, size);
	int vector[size] = { 9,0,8,1,7,2,6,3,5,4 };
	print(vector, size);
	quickSort(vector, 0, size - 1);
	cout << "Печать отсортированного массива методом быстрой рекурсивной сортировки Хоара по ВОЗРАСТАНИЮ:\n";
	print(vector, size);
	int vect[size] = { 11,23,99,76,5,49,31,92,61,0 };
	print(vect, size);
	shellSort(vect, size);
	cout << "Печать отсортированного массива методом сортировки Шелла по ВОЗРАСТАНИЮ:\n";
	print(vect, size);
	int k;
	cout << "Введите значение для поиска в массиве: ";
	cin >> k;
	int r = binarySearch(vect, size, k);
	if (r < 0)
	{
		cout << "Искомое значение-ключ " << k << " в массиве не найден или массив не отсортирован по возрастанию.\n";
	}
	else
	{
		cout << "Искомое значение-ключ " << k << " найдено в массиве в элементе с индексом [" << r << "].\n";
	}
	system("pause");
	return 0;
}

void bubleSort(int* m, int n)//функция сортировки одномерного целочисленного массива методом "пузырька" по ВОЗРАСТАНИЮ
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (m[i] > m[j + 1])//для сортировки по ВОЗРАСТАНИЮ
			{
				int t = m[j];
				m[j] = m[j + 1];
				m[j + 1] = t;
			}
		}
	}
}
void print(int* m, int n)//функция печати содержимого элементов одномерного целочисленного массива на консоль
{
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << ' ';
	}
	cout << endl;
}
void printStr(char* m, int n)//функция печати содержимого элементов одномерного символьного массива на консоль
{
	for (int i = 0; i < n; i++)
	{
		cout << m[i] << ' ';
	}
	cout << endl;
}
void swap(int& first, int& second)//функция обмена значениями между двумя элементами. Чтобы обменять значения у ОРИГИНАЛОВ значений в main'e, эта функция принимает ссылки на 
{//элементы,   то есть константные указатели на адреса элементов
	int t = first;
	first = second;
	second = t;
}
int minimumFrom(int* m, int position, int length)//функция для нахождения индекса (номера) элемента с минимальным значением на участке массива, начиная с элемента с индексом
{//position до элемента с индексом length-1. Эта функция нужна для функции selectionSort()
	int minIndex = position;
	for (int i = position + 1; i < length; i++)
	{
		if (m[i] < m[minIndex])
		{
			minIndex = i;
		}
	}
	return minIndex;

}
void selectionSort(int* m, int length)//функция сортировки по ВОЗРАСТАНИЮ целочисленного одномерного массива выбором наименьшего элемента
{
	for (int i = 0; i < length - 1; i++)
	{
		swap(m[i], m[minimumFrom(m, i, length)]);
	}
}
void insertSort(char* m, int n)//функция сортировки по ВОЗРАСТАНИЮ одномерного символьного массива методом вставок. Этот алгоритм сортировки обладает свойством устойчивости, то 
{// есть при совпадении значений в ключевом поле объекты НЕ меняются местами
	for (int i = 1; i < n; i++)
	{
		char t = m[i];
		for (int j = i - 1; j > -1 & t < m[j]; j--)
		{
			m[j + 1] = m[j];
			m[j] = t;
		}
	}
}
void quickSort(int* m, int left, int right)//функция быстрой сортировки (рекурсивной сортировки, сортировки Хоара)
{
	int leftArrow = left, rightArrow = right, pivot = m[(left + right) / 2];
	do
	{
		while (m[rightArrow] > pivot)
		{
			rightArrow--;
		}
		while (m[leftArrow] < pivot)
		{
			leftArrow++;
		}
		if (leftArrow <= rightArrow)
		{
			swap(m[leftArrow], m[rightArrow]);
			leftArrow++;
			rightArrow--;
		}
	} 
	while (rightArrow >= leftArrow);
	if (left < rightArrow)
	{
		quickSort(m, left, rightArrow);
	}
	if (leftArrow < right)
	{
		quickSort(m, leftArrow, right);
	}
}
void shellSort(int* m, int n)//функция сортировки методом Шелла. Это неустойчивая сортировка 
{
	for (int i = n / 2; i > 0; i = i / 2)
	{
		for (int j = 0; j < n - i; j++)
		{
			for (int k = j; k > -1; k = k - i)
			{
				if (m[k] > m[k + i])
				{
					int t = m[k];
					m[k] = m[k + i];
					m[k + i] = t;
				}
				else
				{
					k = 0;
				}
			}
		}
	}
}
int binarySearch(int* m, int n, int x)
{
	int low = 0, high = n - 1, middle = (low + high) / 2;
	while (high >= low)
	{
		if (m[middle] == x)
		{
			return middle;
		}
		else
		{
			if (x > m[middle])
			{
				low = middle + 1;
			}
			else
			{
				high = middle + 1;
			}
			middle = (low + high) / 2;
		}
	}
	return -1;
}