#include <iostream>
#include <Windows.h>
using namespace std;
class Homosapiens
{
public:
	virtual void Show() = 0;
	virtual ~Homosapiens() {}
};
class Person : public Homosapiens
{
protected:
	char name[15];
	int age;
public:
	Person() {}
	Person(const char* name, int age)
	{
		strcpy_s(this->name, 15, name);
		this->age = age;
	}
	const char* getName()
	{
		return name;
	}
	void setName(const char* name)
	{
		strcpy_s(this->name, 15, name);
	}
	int getAge()
	{
		return age;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void Show() override
	{
		cout << "\nИмя: " << getName() << "\nВозраст: " << getAge();
	}
	virtual ~Person(){}
};
class Employee : public Person
{
protected:
	char job[30];
	double salary;
public:
	Employee(){}
	Employee(const char* name, int age, const char* job, double salary) : Person(name, age)
	{
		strcpy_s(this->job, 30, job);
		this->salary = salary;
	}
	const char* getJob()
	{
		return job;
	}
	void setJob(const char* job)
	{
		strcpy_s(this->job, 30, job);
	}
	double getSalary()
	{
		return salary;
	}
	void setSalary(double salary)
	{
		this->salary = salary;
	}
	void Show() override
	{
		Person::Show();
		cout << "\nДолжность: " << getJob() << "\nОклад: " << getSalary();
	}
	void full_salary(double procent)
	{
		double prem = getSalary() * procent;
		double sum = getSalary() + prem;
		cout << "\nОклад+Премия= " << sum << endl;
	}
	virtual ~Employee(){}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Person one;
	char name[15] = "Artem";
	one.setName(name);
	one.setAge(17);
	one.Show();
	Employee two;
	two.setName(name);
	two.setAge(20);
	char job[30] = "Программист";
	two.setJob(job);
	two.setSalary(1500);
	two.Show();
	two.full_salary(0.25);
	one.~Person();
	two.~Employee();
	system("pause");
	return 0;
}
