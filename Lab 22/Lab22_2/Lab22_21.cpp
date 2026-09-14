#include "Lab22_21.h"
#include <math.h>
#include <Windows.h>
using namespace Lab222;
[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Lab22_2);
	return 0;
}
