#include <Windows.h>
#include <string>
#include "MenuForm.h"

using namespace Note; // Название проекта
int WINAPI WinNote(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NoteForm);	
	return 0;
}

