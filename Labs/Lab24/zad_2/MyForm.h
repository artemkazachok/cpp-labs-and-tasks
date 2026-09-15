#pragma once
#include "MyForm2.h"
#include <math.h>
#include <stdexcept>
#include <new>
namespace zad2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Решить;
	private: System::Windows::Forms::Button^ button1;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Решить = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"A";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 13);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"B";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(227, 13);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Шаг (h)";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox3_MouseClick);
			// 
			// Решить
			// 
			this->Решить->Location = System::Drawing::Point(333, 13);
			this->Решить->Name = L"Решить";
			this->Решить->Size = System::Drawing::Size(127, 40);
			this->Решить->TabIndex = 3;
			this->Решить->Text = L"Решить";
			this->Решить->UseVisualStyleBackColor = true;
			this->Решить->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(466, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 77);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Решить);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			double a, b, h;
			a = Convert::ToDouble(this->textBox1->Text);
			b = Convert::ToDouble(this->textBox2->Text);
			h = Convert::ToDouble(this->textBox3->Text);
			if (a > b)
			{
				MessageBox::Show("Начальный диапазон не может быть больше конечного!", "Ошибка диапазонов");
				button1_Click_1(sender, EventArgs::Empty);
			}
			MyForm2^ f = gcnew MyForm2(a, b, h);
			f->Show();
		}
		catch (System::OverflowException^ OF)
		{
			MessageBox::Show("Недопустимо большое положительное значение", "Ошибка размеров");
			button1_Click_1(sender, EventArgs::Empty);
		}
		catch (std::underflow_error)
		{
			MessageBox::Show("Недопустимо большое отрицательное значение", "Ошибка размеров");
			button1_Click_1(sender, EventArgs::Empty);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Введен неверный формат данных!", "Неправильный формат данных!");
			button1_Click_1(sender, EventArgs::Empty);
		}
		catch (...)
		{
			MessageBox::Show("Неопределенная ошибка", "Ошибка!");
			button1_Click_1(sender, EventArgs::Empty);
		}
	}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox1->Clear();
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox2->Clear();
}
private: System::Void textBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox3->Clear();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox1->Text = "А";
	this->textBox2->Text = "B";
	this->textBox3->Text = "h";
	
}
};
}
