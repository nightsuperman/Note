#include "MenuForm.h"
#include <Windows.h>
using namespace Note; // �������� �������
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MenuForm);
	return 0;
}
