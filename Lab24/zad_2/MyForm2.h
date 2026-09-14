#pragma once
#include <math.h>

namespace zad2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		double a, b, step;
		MyForm2(double a, double b, double step)
		{
			InitializeComponent();
			this->a = a;
			this->b = b;
			this->step = step;
			solve();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnX;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnY;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ColumnX = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnY = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->ColumnX,
					this->ColumnY
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 72;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(687, 521);
			this->dataGridView1->TabIndex = 0;
			// 
			// ColumnX
			// 
			this->ColumnX->HeaderText = L"ColumnX";
			this->ColumnX->MinimumWidth = 9;
			this->ColumnX->Name = L"ColumnX";
			this->ColumnX->ReadOnly = true;
			// 
			// ColumnY
			// 
			this->ColumnY->HeaderText = L"ColumnY";
			this->ColumnY->MinimumWidth = 9;
			this->ColumnY->Name = L"ColumnY";
			this->ColumnY->ReadOnly = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 521);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	void solve()
	{
		double x = a;
		int i = 0;
		while (x <= b)
		{
			double sub_one = pow(x, 3) - 1;
			double sub_second = pow(x, 2) - 1;
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = x;
			if (sub_one < 0 || sub_second < 0)
			{
				dataGridView1->Rows[i]->Cells[1]->Value = "Нельзя извлечь корень из отрицательного числа";
			}
			else
			{
				if (sub_second == 0)
				{
					dataGridView1->Rows[i]->Cells[1]->Value = "Нельзя сделать деление на ноль!";
				}
				else
				{
					double one = sqrt(sub_one);
					double second = sqrt(sub_second);
					double y = one / second;
					dataGridView1->Rows[i]->Cells[1]->Value = y;
				}
			}
			x += step;
			i++;
		}
	}
};
}
