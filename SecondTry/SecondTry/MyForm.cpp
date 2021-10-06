#include "MyForm.h"

#include <Windows.h>

#include <algorithm>

using namespace SecondTry; // Название проекта

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm);

	return 0;

}

