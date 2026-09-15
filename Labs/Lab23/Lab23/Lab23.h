#pragma once
#include "SecondForm.h"

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(378, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ѕередать число во второе окно";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab23::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(421, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 29);
			this->textBox1->TabIndex = 1;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(680, 18);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(496, 590);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Lab23::chart1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(541, 458);
			this->dataGridView1->TabIndex = 3;
			// 
			// Lab23
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 630);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Lab23";
			this->Text = L"Lab23";
			this->Load += gcnew System::EventHandler(this, &Lab23::Lab23_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		double a;
		try
		{
			a = Double::Parse(this->textBox1->Text);
			SecondForm^ f = gcnew SecondForm(a);
			f->Show();
		
		}
		catch (System::ArgumentNullException^ e)
		{
			MessageBox::Show(this, "ѕуста€ ссылка.", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(this, "¬введите вещественное число.", "¬нимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		catch (System::OverflowException^ e)
		{
			MessageBox::Show(this, "¬ведите число подход€щего размера.", "Cлишком большое или маленькое число", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		}
	}
	private:bool cilindr;
	private: System::Void Lab23_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		cilindr = false;
		this->Text = "ўелкните на графике";
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("ћес€ц", String::typeid);
		table->Columns->Add("ќбъем продаж", long::typeid);
		DataRow^ row = table->NewRow();
		row["ћес€ц"] = "ћай";
		row["ќбъем продаж"] = 15;
		table->Rows->Add(row);
		row = table->NewRow();
		row["ћес€ц"] = "»юнь";
		row["ќбъем продаж"] = 90;
		table->Rows->Add(row);
		row = table->NewRow();
		row["ћес€ц"] = "»юль";
		row["ќбъем продаж"] = 65;
		table->Rows->Add(row);
		row = table->NewRow();
		row["ћес€ц"] = "јвгуст";
		row["ќбъем продаж"] = 40;
		table->Rows->Add(row);
		row = table->NewRow();
		row["ћес€ц"] = "—ент€брь";
		row["ќбъем продаж"] = 80;
		table->Rows->Add(row);
		chart1->DataSource = table;
		chart1->Series["Series1"]->XValueMember = "ћес€ц";
		chart1->Series["Series1"]->YValueMembers = "ќбъем продаж";
		chart1->Titles->Add("ќбъемы продаж по мес€цам");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::Aqua;
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		chart1->DataBind();
		dataGridView1->DataSource = table;
	}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	cilindr = !cilindr;
	if (cilindr == true)
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Cylinder";

	}
	else
	{
		chart1->Series["Series1"]["DrawingStyle"] = "Default";
	}
	chart1->DataBind();
}
};
}
