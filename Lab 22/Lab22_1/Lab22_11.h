#pragma once

namespace Lab221 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab22_1
	/// </summary>
	public ref class Lab22_1 : public System::Windows::Forms::Form
	{
	public:
		Lab22_1(void)
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
		~Lab22_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(345, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Показать создателя";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab22_1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.14286F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(375, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 39);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &Lab22_1::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(345, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Я понял";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab22_1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"R1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab22_1::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"R2";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab22_1::textBox2_MouseClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(257, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"R3";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab22_1::textBox3_MouseClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(502, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 38);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Решить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Lab22_1::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(382, 114);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 29);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Ответ";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(619, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 38);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Lab22_1::button4_Click);
			// 
			// Lab22_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 469);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Lab22_1";
			this->Text = L"Калькулятор сопротивлений";
			//this->Load += gcnew System::EventHandler(this, &Lab22_1::Lab22_1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Text = "Казачок Артём Т-493";
		label1->Text = "Казачок Артём Т-493";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		this->Text = "Калькулятор Сопротивлений";
		label1->Text = "";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
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
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			double a = Convert::ToDouble(this->textBox1->Text);
			double b = Convert::ToDouble(this->textBox2->Text);
			double c = Convert::ToDouble(this->textBox3->Text);
			/*bool isA = Double::TryParse(this->textBox1->Text, a);
			bool isB = Double::TryParse(this->textBox2->Text, b);
			bool isC = Double::TryParse(this->textBox3->Text, c);*/
			if (a > 0 && b > 0 && c > 0)
			{
				double result = 1 / ((1 / a) + (1 / b) + (1 / c));
				this->textBox4->Clear();
				this->textBox4->Text = result.ToString();
			}
			else
			{
				MessageBox::Show("Нельзя вводить числа равные или меньше 0", "Запрещенные числа!");
				button4_Click(sender, System::EventArgs::Empty);
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Неправильно введенные данные", "Ошибка формата данных");
			button4_Click(sender, System::EventArgs::Empty);
		}

	};
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox1->Clear();
	this->textBox1->Text = "R1";
	this->textBox2->Clear();
	this->textBox2->Text = "R2";
	this->textBox3->Clear();
	this->textBox3->Text = "R3";
	this->textBox4->Clear();
	this->textBox4->Text = "Ответ";
}
//private: System::Void Lab22_1_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}
