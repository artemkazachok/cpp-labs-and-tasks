#pragma once
#include <math.h>
#include "Tytor.h"
#include "site.h"

namespace Lab232 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab23_2
	/// </summary>
	public ref class Lab23_2 : public System::Windows::Forms::Form
	{
	public:
		Lab23_2(void)
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
		~Lab23_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	public:
	private:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab23_2::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Начальный диапозон";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab23_2::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(236, 13);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Конечный диапазон";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab23_2::textBox2_MouseClick);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Lab23_2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(463, 13);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Шаг";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab23_2::textBox3_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(569, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab23_2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Туториал";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab23_2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(730, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 49);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Lab23_2::button3_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(1204, 17);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(259, 29);
			this->dateTimePicker1->TabIndex = 7;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Lab23_2::dateTimePicker1_ValueChanged);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(1209, 58);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 119);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(409, 442);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(220, 58);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(202, 55);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Сайт";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Lab23_2::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(888, 19);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(292, 42);
			this->progressBar1->TabIndex = 11;
			this->progressBar1->Visible = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(450, 86);
			this->chart1->Name = L"chart1";
			series1->BackImageTransparentColor = System::Drawing::Color::White;
			series1->BackSecondaryColor = System::Drawing::Color::Black;
			series1->BorderColor = System::Drawing::Color::Black;
			series1->BorderWidth = 5;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->EmptyPointStyle->BorderColor = System::Drawing::Color::White;
			series1->LabelBackColor = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->MarkerColor = System::Drawing::Color::Black;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(717, 475);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// Lab23_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1497, 635);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Lab23_2";
			this->Text = L"Программа для построения графика";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		try
		{
			double a = Convert::ToDouble(this->textBox1->Text);
			double b = Convert::ToDouble(this->textBox2->Text);
			double c = Convert::ToDouble(this->textBox3->Text);
			if (a >= b)
			{
				MessageBox::Show("Нельзя вводить начальное значение больше или равное конечному", "Неверные данные");
				button3_Click(sender, System::EventArgs::Empty);
			}
			else
			{
				if (c <= 0 || c >= b)
				{
					MessageBox::Show("Шаг не может быть меньше, равен нулю или больше конечного значения", "Неверные данные");
					button3_Click(sender, System::EventArgs::Empty);
				}
				else
				{
					Draw(a,b,c);
				}
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Неправильно введенные данные", "Ошибка формата данных");
			button3_Click(sender, System::EventArgs::Empty);
		}
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Tytor^ f1 = gcnew Tytor();
	f1->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->textBox1->Clear();
	this->textBox1->Text = "Начальный диапазон";
	this->textBox2->Clear();
	this->textBox2->Text = "Конечный диапазон";
	this->textBox3->Clear();
	this->textBox3->Text = "Шаг";
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	site^ f2 = gcnew site ();
	f2->Show();
}
	   void Draw(double start, double end, double step)
	   {
		   chart1->Visible = true;
		   chart1->Series[0]->Points->Clear();
		   int allStep = (int)((end - start) / step) + 1;
		   progressBar1->Visible = true;
		   progressBar1->Minimum = 0;
		   progressBar1->Maximum = allStep;
		   progressBar1->Value = 0;
		   int Countstep = 0;
		   for (double x = start; x <= end; x = x + step)
		   {
			   double first = (pow(x, 3) + pow(x, 2) - (3 * x) - 1);
			   double second = (pow(x, 2) - 1);
			   if (second == 0)
			   {
				   continue;
			   }
			   else
			   {
				   double y = first / second;
				   chart1->Series[0]->Points->AddXY(x, y);
				   chart1->Update();
			   }
			   Countstep++;
			   progressBar1->Value = Countstep;
			   System::Threading::Thread::Sleep(3);
		   }
		   progressBar1->Value = progressBar1->Maximum;
		   progressBar1->Visible = false;
	   }
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
};
}
