#pragma once

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
			for (int i = 0; i < 10; i++)
			{
				this->dataGridView1->Rows->Add();
			}
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(1196, 669);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Сотрудник";
			this->Column1->MinimumWidth = 9;
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Оклад";
			this->Column2->MinimumWidth = 9;
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Надбавка";
			this->Column3->MinimumWidth = 9;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Премия";
			this->Column4->MinimumWidth = 9;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Дней в командировке";
			this->Column5->MinimumWidth = 9;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Начисленная заработная плата";
			this->Column6->MinimumWidth = 9;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Процент от общей суммы";
			this->Column7->MinimumWidth = 9;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1214, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(291, 87);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Рассчет столбцов";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1214, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(291, 87);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Построить гистрограмму";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// chart1
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(1511, 12);
			this->chart1->Name = L"chart1";
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(541, 376);
			this->chart1->TabIndex = 3;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1214, 198);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(291, 87);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Дополнительные данные";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column10,
					this->Column8, this->Column9
			});
			this->dataGridView2->Location = System::Drawing::Point(1511, 394);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 72;
			this->dataGridView2->RowTemplate->Height = 31;
			this->dataGridView2->Size = System::Drawing::Size(783, 393);
			this->dataGridView2->TabIndex = 5;
			this->dataGridView2->Visible = false;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Значение";
			this->Column10->MinimumWidth = 9;
			this->Column10->Name = L"Column10";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Среднее ";
			this->Column8->MinimumWidth = 9;
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Максимальное";
			this->Column9->MinimumWidth = 9;
			this->Column9->Name = L"Column9";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(2058, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(231, 109);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Кол-во сотрудников пребывавших\r\nв командировке, которые больше 3 дней:";
			this->textBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2059, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1214, 291);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(291, 87);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Загрузить таблицу в Word";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(2302, 859);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int countData = 0;
		int rows = dataGridView1->Rows->Count;
		int column = dataGridView1->Columns->Count;
		for (int i = 0; i < rows; i++)
		{
			if (dataGridView1->Rows[i]->Cells[1]->Value != nullptr && dataGridView1->Rows[i]->Cells[3]->Value != nullptr)
				{
					try
					{
						countData++;
						double salary = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
						double allowance = salary * 0.10;
						dataGridView1->Rows[i]->Cells[2]->Value = allowance;
						double prem = Convert::ToDouble(dataGridView1->Rows[i]->Cells[3]->Value);
						double sum = salary + allowance + prem;
						dataGridView1->Rows[i]->Cells[5]->Value = sum;
					}
					catch (System::FormatException^ e)
					{
						MessageBox::Show("Введен неправильный тип данных", "Неправильный тип данных");
					}
				}
		}
		if (countData < rows)
		{
			MessageBox::Show("Нельзя посчитать процент не заполнив все поля", "Незаполненные данные");
		}
		else
		{
			double fullsum;
			for (int i = 0; i < rows; i++)
			{
				double sum = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
				fullsum += sum;
			}
			for (int i = 0; i < rows; i++)
			{
				double sum = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
				double percent = (sum / fullsum) * 100;
				dataGridView1->Rows[i]->Cells[6]->Value = percent;
			}
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int rows = dataGridView1->Rows->Count;
	int column = dataGridView1->Columns->Count;
	bool prov = true;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (dataGridView1->Rows[i]->Cells[j]->Value == nullptr)
			{
				prov = false;
				break;
			}
		}
	}
	if (prov)
	{
		chart1->Visible = true;
		int rows = dataGridView1->Rows->Count;
		for (int i = 0; i < rows; i++)
		{
			String^ name = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
			double salary = Convert::ToDouble(dataGridView1->Rows[i]->Cells[5]->Value);
			chart1->Series["Series1"]->Points->AddXY(name, salary);
			chart1->Update();

		}
		chart1->Titles->Add("Гистограмма зарплат сотрудников");
		chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		chart1->Series["Series1"]->Color = Color::DeepPink;
		chart1->DataBind();
	}
	else
	{
		MessageBox::Show("Ввведены не все ячейки!", "Ошибка данных");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int rows = dataGridView1->Rows->Count;
	int column = dataGridView1->Columns->Count;
	bool prov = true;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (dataGridView1->Rows[i]->Cells[j]->Value == nullptr)
			{
				prov = false;
				break;
			}
		}
	}
	if (prov)
	{
		dataGridView2->Visible = true;
		textBox1->Visible = true;
		label1->Visible = true;
		for (int i = 0; i < 6; i++)//Добав
		{
			if (dataGridView2->Rows->Count != 6)
			{
				dataGridView2->Rows->Add();
			}
		}
		for (int i = 1; i < column; i++)//Назва
		{
			dataGridView2->Rows[i - 1]->Cells[0]->Value = dataGridView1->Columns[i]->HeaderText;
		}
		double fullsum = 0;
		for (int i = 1; i < column; i++)//Сред
		{
			for (int j = 0; j < rows; j++)
			{
				fullsum += Convert::ToDouble(dataGridView1->Rows[j]->Cells[i]->Value);
			}
			double sred = fullsum / rows;
			dataGridView2->Rows[i-1]->Cells[1]->Value = sred;
			fullsum = 0;
		}
		double max = 0;
		for (int i = 1; i < column; i++)//Макс
		{
			for (int j = 0; j < rows; j++)
			{
				double number = Convert::ToDouble(dataGridView1->Rows[j]->Cells[i]->Value);
				if (number > max)
				{
					max = number;
				}

			}
			dataGridView2->Rows[i - 1]->Cells[2]->Value = max;
			max = 0;
		}
		int count = 0;
		for (int j = 0; j < rows; j++)//командировка
		{
			double number = Convert::ToDouble(dataGridView1->Rows[j]->Cells[4]->Value);
			if (number > 3)
			{
				count++;
			}

		}
		this->label1->Text = Convert::ToString(count);
	}
	else
	{
		MessageBox::Show("Ввведены не все ячейки!", "Ошибка данных");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int rows = dataGridView1->Rows->Count;
	int columns = dataGridView1->Columns->Count;
	bool prov = true;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (dataGridView1->Rows[i]->Cells[j]->Value == nullptr)
			{
				prov = false;
				break;
			}
		}
	}
	if (prov)
	{
		auto word2 = gcnew Microsoft::Office::Interop::Word::Application();
		word2->Visible = true;
		auto t = Type::Missing;
		auto document2 = word2->Documents->Add(t, t, t, t);
		word2->Selection->TypeText("\t\t\t\tДанные о людях");
		System::Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
		System::Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
		word2->ActiveDocument->Tables->Add(word2->Selection->Range, rows + 1, columns, t1, t2);
		for (int j = 0; j < columns; j++)
		{
			String^ headerText = dataGridView1->Columns[j]->HeaderText;
			word2->ActiveDocument->Tables[1]->Cell(1, j + 1)->Range->Text = headerText;
		}
		for (int i = 0; i < rows; i++)
		{
			try
			{
				for (int j = 0; j < columns; j++)
				{
					String^ OrCount = Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value);
					word2->ActiveDocument->Tables[1]->Cell(i + 2, j + 1)->Range->Text = OrCount;
				}
			}
			catch (System::Runtime::InteropServices::COMException^ e)
			{
				MessageBox::Show("Ошибка COMException", "Ошибка");
			}
		}
		try
		{
			Object^ fileName = "D:\\Нужное мне\\оаип мое\\Lab25\\Казачок_8_zad_2.docx";
			word2->ActiveDocument->SaveAs2(fileName, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
		}
		catch (System::Runtime::InteropServices::COMException^ ex)
		{
			MessageBox::Show("Не удалось перезаписать файл.(Закройте пожалуйста файл во всех приложениях)", "Ошибка файла");
		}
	}
	else
	{
		MessageBox::Show("Ввведены не все ячейки!", "Ошибка данных");
	}

}
};
}
