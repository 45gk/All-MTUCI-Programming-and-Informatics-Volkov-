#include "MyForm.h"
#include <Windows.h>
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace sqrtsolver;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}