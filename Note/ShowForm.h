#pragma once
#include <Windows.h>
//#include "NoteForm.h"

namespace Note {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� ShowForm
	/// </summary>
	public ref class ShowForm : public System::Windows::Forms::Form
	{
	public:
		ShowForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		};

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ShowForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ListBox^ listBox1;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(473, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->��������������ToolStripMenuItem->Text = L"������� �������";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 27);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(473, 368);
			this->listBox1->TabIndex = 2;
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &ShowForm::listBox1_DoubleClick);
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 387);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"ShowForm";
			this->Text = L"ShowForm";
			this->Load += gcnew System::EventHandler(this, &ShowForm::ShowForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	public:
		String^ path = Path::GetFullPath("D:\\ITProjects\\Note001");
		array<String^>^ files = Directory::GetFiles(path, "*.txt");

private: System::Void ShowForm_Load(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	for (int i = 0; i < files->Length; i++) {
		listBox1->Items->Add(Path::GetFileName(files[i]));
	}
}

private: System::Void listBox1_DoubleClick(System::Object^ sender, System::EventArgs^ e){
	for (int i = 0; i < files->Length; i++) {
		listBox1->Items[i];
	}
}
};
}
