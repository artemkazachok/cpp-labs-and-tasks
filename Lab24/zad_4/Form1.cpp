#include "Form1.h"
#include "Form2.h"
using namespace zad4;
void Form1::button1_Click(Object^ sender, EventArgs^ e)
{
	try
	{
		Form2^ f = gcnew Form2(gcnew MyDelegate(this, &Form1::GetData));
		f->ShowDialog();
	}
	catch (System::NullReferenceException^ NRE)
	{
		MessageBox::Show("Не получилось передать текст во второе окно","NullException");
	}
	catch (System::Exception^ E)
	{
		MessageBox::Show("Произошла неизвестная ошибка", "Неизвестная ошибка");
	}
}
