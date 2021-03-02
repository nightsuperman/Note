#pragma once
#include <Windows.h>
#include "ItemObj.h"

namespace Note {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Сводка для ShowForm
	/// </summary>
	public ref class ShowForm : public System::Windows::Forms::Form
	{
	public:
		ShowForm()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ShowForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьЗаметкуToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	public: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	public:
	private:

	public:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->удалитьЗаметкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->удалитьЗаметкуToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(473, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// удалитьЗаметкуToolStripMenuItem
			// 
			this->удалитьЗаметкуToolStripMenuItem->Name = L"удалитьЗаметкуToolStripMenuItem";
			this->удалитьЗаметкуToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->удалитьЗаметкуToolStripMenuItem->Text = L"Удалить заметку";
			this->удалитьЗаметкуToolStripMenuItem->Click += gcnew System::EventHandler(this, &ShowForm::удалитьЗаметкуToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(473, 355);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ShowForm::listBox1_SelectedIndexChanged);
			this->listBox1->DoubleClick += gcnew System::EventHandler(this, &ShowForm::listBox1_DoubleClick_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 369);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// ShowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 387);
			this->Controls->Add(this->label1);
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
		String^ path = Path::GetFullPath("D:\\Dima\\ITProjects\\Note001");
		array<String^>^ files = Directory::GetFiles(path, "*.txt");

		void showCount() {
			int c = listBox1->Items->Count;
			label1->Text = "Количество файлов: " + c.ToString();

		}


private: System::Void ShowForm_Load(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		
		for (int i = 0; i < files->Length; i++) {
			path = files[i]; // path to the file
			listBox1->Items->Add(gcnew ItemObj(Path::GetFileName(path), path));
		}
		showCount();
	}

private: System::Void listBox1_DoubleClick_1(System::Object^ sender, System::EventArgs^ e);

private: System::Void удалитьЗаметкуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // doesn`t work

	//listBox1->Items->Remove(listBox1->SelectedItem);

	for (int i = 0; i < listBox1->Items->Count; i++) {
		//File::Delete(files[i]);
		 
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	showCount();
}
};
}
