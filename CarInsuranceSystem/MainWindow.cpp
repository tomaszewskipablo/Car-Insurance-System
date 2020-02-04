#include "MainWindow.h"
#include "Insurance.h""

#include <Windows.h>

using namespace CarInsuranceSystem;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	//Insurance insurance;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MainWindow^ mainWindow = gcnew MainWindow();
	Application::Run(mainWindow);	
	
	return 0;
}