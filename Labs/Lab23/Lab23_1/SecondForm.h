#pragma once

namespace Lab231 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(void)
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
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->Size = System::Drawing::Size(535, 256);
			this->dataGridView1->TabIndex = 0;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(582, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(482, 593);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &SecondForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(534, 69);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Закрыть диаграмму";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SecondForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(534, 69);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Обновить график";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SecondForm::button2_Click);
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1111, 632);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Location = System::Drawing::Point(10, 10);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			this->Load += gcnew System::EventHandler(this, &SecondForm::SecondForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool cilindr;
	private: System::Void SecondForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		cilindr = false;
		this->Text = "График";
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("Название металла",String::typeid);
		table->Columns->Add("Цена за тонну", Double::typeid);
		DataRow^ row = table->NewRow();
		row["Название металла"] = "Алюминий";
		row["Цена за тонну"] = 2000;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Название металла"] = "Железо";
		row["Цена за тонну"] = 1500;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Название металла"] = "Золото";
		row["Цена за тонну"] = 3000;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Название металла"] = "Серебро";
		row["Цена за тонну"] = 2000;
		table->Rows->Add(row);
		row = table->NewRow();
		row["Название металла"] = "Бронза";
		row["Цена за тонну"] = 1000;
		table->Rows->Add(row);
		chart1->DataSource = table;
		chart1->Series["Series1"]->XValueMember = "Название металла";
		chart1->Series["Series1"]->YValueMembers = "Цена за тонну";
		chart1->Titles->Add("График цены металлов");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::Green;
		chart1->Series["Series1"]->IsVisibleInLegend = false;
		chart1->DataBind();
		dataGridView1->DataSource = table;
	}

	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		chart1->DataBind();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	chart1->DataBind();
}
};
}
