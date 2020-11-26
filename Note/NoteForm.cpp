#include "NoteForm.h"
#include "MenuForm.h"
#include <Windows.h>
#include <string>

using namespace Note; // Название проекта
int WINAPI WinNote(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew NoteForm);	
	return 0;
}

