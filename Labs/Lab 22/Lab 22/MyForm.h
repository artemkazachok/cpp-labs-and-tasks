#pragma once

namespace Lab22 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;



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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать надпись";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->ClientSizeChanged += gcnew System::EventHandler(this, &MyForm::button1_ClientSizeChanged);
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(17, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(245, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Стереть надпись";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(17, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(245, 45);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Поменять цвет окна";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(17, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(245, 39);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Закрыть";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(307, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 4;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(379, 95);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 29);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Красный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(379, 158);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(121, 29);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Зеленый";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(379, 226);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(117, 29);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Желтый";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(570, 103);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(325, 152);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Информация о приложении";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 117);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(267, 29);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Технология приложения";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 63);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(94, 29);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Автор";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 311);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 29);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Делимое";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(212, 311);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(184, 29);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Делитель";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox2_MouseClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(406, 311);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 44);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Вычислить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(549, 310);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(299, 29);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Результат(корень из частного)";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(870, 313);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 41);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1142, 753);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->BackColor == SystemColors::ButtonFace)
		{
			this->BackColor = Color::Red;
		}
		else
		{
			this->BackColor = SystemColors::ButtonFace;
		}

	}

private: System::Void button1_ClientSizeChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "Кнопка работает.";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label1->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->BackColor == Color::Red)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Red;
	}
	this->checkBox2->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->BackColor == Color::Green)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Green;
	}
	this->checkBox1->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->BackColor == Color::Yellow)
	{
		this->BackColor = SystemColors::ButtonFace;
	}
	else
	{
		this->BackColor = Color::Yellow;
	}
	this->checkBox1->CheckState = CheckState::Unchecked;
	this->checkBox2->CheckState = CheckState::Unchecked;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	this->Text = "Это Windows Form приложение";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	this->Text = "Приложение Казачка А.А. (с)2026";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		double a = Convert::ToDouble(this->textBox1->Text);
		double b = Convert::ToDouble(this->textBox2->Text);
		if (b == 0 || a / b < 0)
		{
			MessageBox::Show("Попытка деления на ноль или извлечения корня из отрицательного числа.", "Ошибка!");
			button6_Click(sender, System::EventArgs::Empty);
		}
		else
		{
			double c = Math::Sqrt(a / b);
			this->textBox3->Clear();
			this->textBox3->Text = c.ToString();
			this->Text = c.ToString();
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message->ToString(), "Ошибка формата данных!");
		button6_Click(sender, System::EventArgs::Empty);
	}
}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox1->Clear();
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox3->Text = "Результат (корень из частного)";

}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
{
	this->textBox2->Clear();
}
};
}
