#include "FFirst.h"
#include <Windows.h>
#include <math.h>
#include <cmath>
using namespace Calculator;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FFirst);
	return 0;
}
