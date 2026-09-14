#include "Form2.h"
#include "Form1.h"
using namespace zad4;
Form2::Form2(MyDelegate^ sender)
{
	InitializeComponent();
	deleg = sender;
}
void Form2::button1_Click(Object^ sender, EventArgs^ e)
{
	try
	{
		if (deleg == nullptr)
		{
			MessageBox::Show("Ссылка на метод главного окна потеряна.", "Ошибка делегата");
			return;
		}
		deleg(textBox1->Text);
	}
	catch(System::NullReferenceException^ NRF)
	{
		MessageBox::Show("Не получилось передать текст в первое окно", "NullException");
	}
	catch (System::Exception^ E)
	{
		MessageBox::Show("Произошла неизвестная ошибка", "Неизвестная ошибка");
	}
}

