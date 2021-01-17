#include "ShowForm.h"
#include "MenuForm.h"
#include "NoteForm.h"
#include <Windows.h>
#include <string>

using namespace Note; // Название проекта
int WINAPI WinShowNote(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ShowForm);
	return 0;
}

