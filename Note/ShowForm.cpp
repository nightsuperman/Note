#include <Windows.h>
#include <string>
#include "NoteForm.h"

using namespace Note; // Название проекта

int WINAPI WinShow(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ShowForm);
	return 0;
}

namespace Note {
	System::Void ShowForm::listBox1_DoubleClick_1(System::Object^ sender, System::EventArgs^ e) {
		NoteForm^ noteForm = gcnew NoteForm();
		noteForm->Show();
		
		for (int i = 0; i < listBox1->Items->Count; i++) { // it works incorect
			noteForm->textBox1->Text = File::ReadAllText(files[i]);
		}

	}
}