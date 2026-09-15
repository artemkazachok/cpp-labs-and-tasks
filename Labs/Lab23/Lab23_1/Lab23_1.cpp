#include "Lab23_1.h"
#include <Windows.h>
using namespace Lab231;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ::Lab231::Lab23_1());
	return 0;
}
