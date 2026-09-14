#include "Lab23.h"
#include <Windows.h>
using namespace Lab23;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ::Lab23::Lab23());
	return 0;
}

