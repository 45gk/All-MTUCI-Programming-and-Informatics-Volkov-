#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace arraysorter;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
