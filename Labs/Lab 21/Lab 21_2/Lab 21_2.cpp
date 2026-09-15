#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;
class Strok
{
private:
	char text[100];
public:
	Strok()
	{
		strcpy_s(text, 100 , "");
	}
	Strok(const char* text)
	{
		strcpy_s(this->text, 100, text);
	}
	Strok(const Strok& kon)
	{
		strcpy_s(this->text, 100,  kon.text);
	}
	bool operator>(const Strok& kon)
	{
		if (strcmp(this->text,kon.text) > 0)
		{
			cout << "True" << endl;
			return true;
		}
		else
		{
			cout << "False" << endl;
			return false;
		}
	}
	bool operator<(const Strok& kon)
	{
		if (strcmp(this->text, kon.text) < 0)
		{
			cout << "True" << endl;
			return true;
		}
		else
		{
			cout << "False" << endl;
			return false;
		}
	}
	bool operator==(const Strok& kon)
	{
		if (strcmp(this->text, kon.text) == 0)
		{
			cout << "True" << endl;
			return true;
		}
		else
		{
			cout << "False" << endl;
			return false;
		}
	}
	void Show()
	{
		cout << text << endl;
	}
};
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Strok one ("Hello");
	Strok two("Bye");
	Strok three(two);
	one.Show();
	two.Show();
	three.Show();
	one > three;
	one < three;
	one == three;
	system("pause");
	return 0;
}