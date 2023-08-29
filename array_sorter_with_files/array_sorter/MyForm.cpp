#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <fileapi.h>
#include <string>
#include <cstdlib>
using namespace arraysorter;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
