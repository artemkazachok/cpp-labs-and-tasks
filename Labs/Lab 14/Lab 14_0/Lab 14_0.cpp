#include <iostream>
#include <Windows.h>
using namespace std;
//////// для 4 примера
typedef double veschestvennoe;
typedef int tseloe;
const int m = 15, n = 20, p = 4;
typedef struct beta // начало выражения typedef
{
	unsigned int key;
	char name[m];
}mas[n]; // конец выражения typedef
//////// конец

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int v;
	do
	{
		cout << "Выберите пример: " << endl;
		cout << "1. 1 пример" << endl;
		cout << "2. 2 пример" << endl;
		cout << "3. 3 пример" << endl;
		cout << "4. 4 пример" << endl;
		cout << "5. 5 пример" << endl;
		cout << "Введите желаемый пример: ";
		cin >> v;
		switch (v)
		{
		case 1:
		{
			struct emp//объявим новый тип данных - структуру emp
			{
				int empNo;//поле для хранения табельного номера работника (это целое число)
				char name[80];//поле для хранения имени работника
				double salary;//поле для хранения заработка работника за месяц
			};
			emp engineer, teacher, professor;//объявление трех переменных типа структуры emp
			emp professor0 = { 121, "Складовская", 710000.95 };
			professor0.empNo = 121;
			strcpy_s(professor0.name, 80, "Перова");
			professor0.salary = 710000.95;
			emp eng = { 123, "Иванов", 65000 }, teach = { 124, "Петров", 45000 }, prof = { 127, "Сидоров", 790000 };
			struct myStruct//совмещение декларации структуры myStruct и одновременной декларации трех переменных типа этой структуры
			{
				double re;
				int im;
			} c1, c2, c3;//декларация переменных

			struct enyStruct
			{
				double re;
				int im;
			} x1 = { 0.5, 0 }, x2 = { 1.99, -2 }, x3 = { -6.09, 1 };
			// вторая часть
			engineer.empNo = 34;
			strcpy_s(engineer.name, 80, "Попов");
			engineer.salary = 67000.92;
			cout << "Введите номер работника1: ";
			cin >> teacher.empNo;
			cout << "Введите имя работника1: ";
			cin >> teacher.name;
			teacher.salary = engineer.salary / 2;
			cout << "Введите номер работника2: ";
			cin >> professor.empNo;
			cout << "Введите полные Фамилию Имя и Отчество работника2: ";
			cin.ignore();
			cin.getline(professor.name, 80);
			professor.salary = teacher.salary * 1.5;
			cout << professor0.empNo << "\t|\t" << professor0.name << "\t|\t" << professor0.salary << endl << eng.empNo << "\t|\t" << eng.name << "\t|\t" << eng.salary << endl
				<< teach.empNo << "\t|\t" << teach.name << "\t|\t" << teach.salary << endl << prof.empNo << "\t|\t" << prof.name << "\t|\t" << prof.salary << endl
				<< engineer.empNo << "\t|\t" << engineer.name << "\t|\t" << engineer.salary << endl << teacher.empNo << "\t|\t" << teacher.name << "\t|\t" << teacher.salary << endl
				<< professor.empNo << "\t|\t" << professor.name << "\t|\t" << professor.salary << endl << "--------+---------------+---------------------\n";
			c1.re = 12.5;
			c1.im = -24;
			c2.re = c1.re * c1.re + c1.im * c1.im;
			c2.im = pow(c1.im, 3);
			cout << x1.re << "\t|\t" << x1.im << "\t|\t" << endl << x2.re << "\t|\t" << x2.im << "\t|\t" << endl << x3.re << "\t|\t" << x3.im << "\t|\t" << endl
				<< c1.re << "\t|\t" << c1.im << "\t|\t" << endl << c2.re << "\t|\t" << c2.im << "\t|\t" << endl;
			cout << '\n';
			break;

		}
		case 2:
		{
			struct emp
			{
				int empNo;//поле для хранения табельного номера работника (это целое число)
				char name[80];//поле для хранения имени работника
				double salary;//поле для хранения заработка работника за месяц
			};
			struct date
			{
				unsigned short int year;
				unsigned short int month;
				unsigned short int day;
			};
			struct formData// декларируется структура formData, поля которой имеют тип структур date и emp, поэтому эти две структуры должны быть объявлены раньше структуры formData 
			{
				date birthday;//поле типа date, само состоящее из трех подполей: year, month и day
				emp employment;//поле типа emp, само состоящее из трех подполей: empNo, name и salary
			};
			formData a = { 1933, 5, 19, 123, "Petrova", 456.78 };// сплошным текстом 
			formData b = { { 1933, 5, 19 }, { 123, "Petrova", 456.78} };// разделяем {} чтобы было более понятно
			cout << a.birthday.year << "\t|\t" << a.birthday.month << "\t|\t" << a.birthday.day << "\t|\t" << a.employment.empNo << "\t|\t" << a.employment.name << "\t|\t"
				<< a.employment.salary << endl << b.birthday.year << "\t|\t" << b.birthday.month << "\t|\t" << b.birthday.day << "\t|\t" << b.employment.empNo << "\t|\t"
				<< b.employment.name << "\t|\t" << b.employment.salary << endl;//распечатываем значения в полях. Доступ осуществляется с указания самого большого объекта и далее
			//посредством оператора доступа "точка" проникает внутрь объекта и идем к самому низовому значению (полю, подстроку), которое нас интересует
			a.birthday.year = 1961;//обращение к полю year внутри поля birthday у переменной a
			a.birthday.month = 4;//обращение к полю month внутри поля birthday у переменной a
			a.birthday.day = 26;//обращение к полю day внутри поля birthday у переменной a
			b.birthday = a.birthday;//копирование значение из поля birthday переменной а в поле birthday переменной b. Скопируется значения всех подполей (year, month и day)
			// из поля birthday переменной а в соотвествующие по именам подполя поля birthday переменной b
			cout << a.birthday.year << "\t|\t" << a.birthday.month << "\t|\t" << a.birthday.day << "\t|\t" << a.employment.empNo << "\t|\t" << a.employment.name << "\t|\t"
				<< a.employment.salary << endl << b.birthday.year << "\t|\t" << b.birthday.month << "\t|\t" << b.birthday.day << "\t|\t" << b.employment.empNo << "\t|\t"
				<< b.employment.name << "\t|\t" << b.employment.salary << endl;
			cout << '\n';
			break;
		}
		case 3:
		{
			const int m = 15, n = 20, p = 4;
			struct student
			{
				int number;//номер студента по списку группы
				char name[m];//имя студента размером до m символов (проблемы НЕ предполагаются)
				char surname[n];//фамилия студента
				double srBall;//поле для хранения среднего балла
			};
			student group[p];//создаем статический массив из p студентов (в машине можно поместить 4 студента или меньше)
			for (int i = 0; i < p; i++)
			{
				cout << "Введите номер студента: ";
				cin >> group[i].number;
				cout << "Введите имя студента: ";
				cin >> group[i].name;
				cout << "Введите фамилию студента: ";
				cin >> group[i].surname;
				cout << "Введите средний балл студента: ";
				cin >> group[i].srBall;
			}
			cout << "Номер\t|\tФамилия\t|\tИмя\t|\tСредний балл\n--------+---------------+---------------+----------------------\n";
			for (int i = 0; i < p; i++)
			{
				cout << group[i].number << "\t|\t" << group[i].surname << "\t|\t" << group[i].name << "\t|\t" << group[i].srBall << endl;
			}
			cout << '\n';
			break;
		}
		case 4:
		{
			veschestvennoe a = 2.98;// компилятор знает,что тип "veschestvennoe" - это тоже самое, что и тип double, то есть написан код: double a = 2.98;
			tseloe b = -7; // компилятор знает, что тип "tseloe" - это тоже самое, что и тип int, то есть написан код : int b = -7;
			cout << pow(b, 2) << endl << sqrt(a) << endl;
			mas g;//ввиду переопределения типа ранее, на самом деле мы создадим массив из n элементов типа структуры beta
			g[0].key = 100;//поскольку это массив, то обращаемся к его элементам
			strcpy_s(g[0].name, m, "Japan");
			cout << g[0].key << ' ' << g[0].name << endl;
			for (int i = 1; i < n; i++)
			{
				g[i].key = i;
				_itoa_s(pow(i, 3), g[i].name, m, 10);
				cout << g[i].key << ' ' << g[i].name << endl;
			}
			cout << '\n';
			break;
		}
		case 5:
		{
			struct programma
			{
				char name[15];//название из 9 символов
				double mas[3];
				bool vklucheno;
			};
			programma a = { "Notepad v.2.0", { 1.9, 3.67, 9.01 }, true };
			cout << a.name << " | " << a.mas[0] << " | " << a.mas[1] << " | " << a.mas[2] << " | " << a.vklucheno << endl;

			programma c;
			strcpy_s(c.name, "MS Word 365");
			c.mas[0] = 5.98;
			c.mas[1] = 3.98;
			c.mas[2] = 8.98;
			c.vklucheno = false;
			cout << c.name << " | " << c.mas[0] << " | " << c.mas[1] << " | " << c.mas[2] << " | " << c.vklucheno << endl;

			programma b;
			cin >> b.name;
			cin >> b.mas[0];
			cin >> b.mas[1];
			cin >> b.mas[2];
			cin >> b.vklucheno;//0 - выключено  1 - включено
			cout << b.name << " | " << b.mas[0] << " | " << b.mas[1] << " | " << b.mas[2] << " | " << b.vklucheno << endl;

			programma *w = &a;//указателю на структуру присвоим адрес структуры а (то есть будем изменять значения полей структуры а через указатель w)
			strcpy_s((*w).name, "MS Access");
			(*w).mas[0] = 2.5;// w->mas[0] = 2.5;
			(*w).mas[1] = 3.5;
			(*w).mas[2] = 4.5;
			(*w).vklucheno = true;
			cout << (*w).name << " | " << (*w).mas[0] << " | " << (*w).mas[1] << " | " << (*w).mas[2] << " | " << (*w).vklucheno << endl;
			cout << '\n';
			break;


		}
		}

	} while (v != 0);
	system("pause");
	return 0;
}