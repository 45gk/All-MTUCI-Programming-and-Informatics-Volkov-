#include "MyForm.h"
#include <Windows.h>
#include <math.h>
#include <cmath>
using namespace expsolver;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

