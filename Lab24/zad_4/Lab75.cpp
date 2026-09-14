#include "Form1.h"//подключаем оконную форму Form1 
#include <Windows.h> 
using namespace zad4;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Form1());//вызываем конструктор Form1() и создаем динамический управл€емый —борщиком мусора объект
	return 0;
}
