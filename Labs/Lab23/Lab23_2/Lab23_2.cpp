#include "Lab23_2.h"
#include <Windows.h>
using namespace Lab232;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ::Lab232::Lab23_2());
	return 0;
}

