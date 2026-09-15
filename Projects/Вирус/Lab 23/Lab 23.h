#pragma once
#include "Second Lab 22.h"

namespace Lab23 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Lab23
	/// </summary>
	public ref class Lab23 : public System::Windows::Forms::Form
	{
	public:
		Lab23(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Lab23()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(518, 370);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->Text = L"—ё–ѕ–»«";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab23::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(129, 388);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(10, 15);
			this->button2->TabIndex = 0;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// Lab23
			// 
			this->AcceptButton = this->button2;
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(559, 406);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Lab23";
			this->Text = L"Lab23";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
			Random^ rand = gcnew Random();
			for (int i = 0; i < 333; i++)
			{
				SecondLab22^ f = gcnew SecondLab22();
				f->StartPosition = FormStartPosition::Manual;
				int x = rand->Next(0, Screen::PrimaryScreen->Bounds.Width - f->Width);
				int y = rand->Next(0, Screen::PrimaryScreen->Bounds.Height - f->Height);
				f->Location = System::Drawing::Point(x, y);
				f->Show();
				System::Windows::Forms::Application::DoEvents();
			}
			this->Close();
	}
	};
}
