#pragma once
#include "SecondForm.h"

namespace Lab231 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab23_1
	/// </summary>
	public ref class Lab23_1 : public System::Windows::Forms::Form
	{
	public:
		Lab23_1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lab23_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(403, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создатель";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab23_1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(70, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(403, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Показать диаграмму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab23_1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(70, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(403, 62);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Закрыть программу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Lab23_1::button3_Click);
			// 
			// Lab23_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 217);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Lab23_1";
			this->Text = L"Меню";
			this->ResumeLayout(false);

		}
#pragma endregion
		SecondForm^ f;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Казачок Артём";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		f = gcnew SecondForm();
		f->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}
	};
}
