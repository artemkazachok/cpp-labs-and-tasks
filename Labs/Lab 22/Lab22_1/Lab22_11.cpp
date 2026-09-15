#include "Lab22_11.h"
#include <Windows.h>
using namespace Lab221;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Lab22_1);
	return 0;
}

