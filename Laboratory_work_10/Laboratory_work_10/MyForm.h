#pragma once
#include <fstream>

#include "AbsortingSort.h"
#include "NaturalSort.h"
#include "SimpleSort.h"
#include "InternalExternal.h"
namespace Laboratorywork10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		long size = 1;
		   long buf = 1;
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series73 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series74 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series75 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series76 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series77 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series78 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series79 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series80 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series81 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series82 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series83 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series84 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series85 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series86 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series87 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series88 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series89 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series90 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series91 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series92 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series93 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series94 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series95 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series96 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(441, 222);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор алгоритмов";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(6, 188);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(296, 24);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Сортировка методом поглощения";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(6, 158);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(368, 24);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Внутренняя сортировка внешним слиянием";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(6, 127);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(419, 24);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Однофазная сортировка естественным слиянием";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(6, 96);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(413, 24);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Двухфазная сортировка естественным слиянием";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 65);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(375, 24);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Однофазная сортировка простым слиянием";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 34);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(369, 24);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Двухфазная сортировка простым слиянием";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(13, 241);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(440, 115);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры обрабатываемых данных";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(254, 68);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(170, 26);
			this->numericUpDown2->TabIndex = 3;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(254, 36);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(170, 26);
			this->numericUpDown1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Размер оперативной памяти:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размер исходного файла:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(504, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1382, 334);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Время";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Чтение";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Сравнения";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 150;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Запись";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 931);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1874, 45);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Сортировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			chartArea13->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea13);
			legend13->Name = L"Legend1";
			this->chart1->Legends->Add(legend13);
			this->chart1->Location = System::Drawing::Point(12, 392);
			this->chart1->Name = L"chart1";
			series73->ChartArea = L"ChartArea1";
			series73->Color = System::Drawing::Color::Red;
			series73->Legend = L"Legend1";
			series73->Name = L"Простая 2";
			series74->ChartArea = L"ChartArea1";
			series74->Color = System::Drawing::Color::Orange;
			series74->Legend = L"Legend1";
			series74->Name = L"Простая 1";
			series75->ChartArea = L"ChartArea1";
			series75->Color = System::Drawing::Color::Yellow;
			series75->Legend = L"Legend1";
			series75->Name = L"Естественная 2";
			series76->ChartArea = L"ChartArea1";
			series76->Color = System::Drawing::Color::Lime;
			series76->Legend = L"Legend1";
			series76->Name = L"Естественная 1";
			series77->ChartArea = L"ChartArea1";
			series77->Color = System::Drawing::Color::Blue;
			series77->Legend = L"Legend1";
			series77->Name = L"Внутр.Внешняя";
			series78->ChartArea = L"ChartArea1";
			series78->Color = System::Drawing::Color::Purple;
			series78->Legend = L"Legend1";
			series78->Name = L"Поглощение";
			this->chart1->Series->Add(series73);
			this->chart1->Series->Add(series74);
			this->chart1->Series->Add(series75);
			this->chart1->Series->Add(series76);
			this->chart1->Series->Add(series77);
			this->chart1->Series->Add(series78);
			this->chart1->Size = System::Drawing::Size(450, 465);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea14->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea14);
			legend14->Name = L"Legend1";
			this->chart2->Legends->Add(legend14);
			this->chart2->Location = System::Drawing::Point(487, 392);
			this->chart2->Name = L"chart2";
			series79->ChartArea = L"ChartArea1";
			series79->Color = System::Drawing::Color::Red;
			series79->Legend = L"Legend1";
			series79->Name = L"Простая 2";
			series80->ChartArea = L"ChartArea1";
			series80->Color = System::Drawing::Color::Orange;
			series80->Legend = L"Legend1";
			series80->Name = L"Простая 1";
			series81->ChartArea = L"ChartArea1";
			series81->Color = System::Drawing::Color::Yellow;
			series81->Legend = L"Legend1";
			series81->Name = L"Естественная 2";
			series82->ChartArea = L"ChartArea1";
			series82->Color = System::Drawing::Color::Lime;
			series82->Legend = L"Legend1";
			series82->Name = L"Естественная 1";
			series83->ChartArea = L"ChartArea1";
			series83->Color = System::Drawing::Color::Blue;
			series83->Legend = L"Legend1";
			series83->Name = L"Внутр.Внешняя";
			series84->ChartArea = L"ChartArea1";
			series84->Color = System::Drawing::Color::Purple;
			series84->Legend = L"Legend1";
			series84->Name = L"Поглощение";
			this->chart2->Series->Add(series79);
			this->chart2->Series->Add(series80);
			this->chart2->Series->Add(series81);
			this->chart2->Series->Add(series82);
			this->chart2->Series->Add(series83);
			this->chart2->Series->Add(series84);
			this->chart2->Size = System::Drawing::Size(449, 465);
			this->chart2->TabIndex = 5;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea15->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea15);
			legend15->Name = L"Legend1";
			this->chart3->Legends->Add(legend15);
			this->chart3->Location = System::Drawing::Point(964, 392);
			this->chart3->Name = L"chart3";
			series85->ChartArea = L"ChartArea1";
			series85->Color = System::Drawing::Color::Red;
			series85->Legend = L"Legend1";
			series85->Name = L"Простая 2";
			series86->ChartArea = L"ChartArea1";
			series86->Color = System::Drawing::Color::Orange;
			series86->Legend = L"Legend1";
			series86->Name = L"Простая 1";
			series87->ChartArea = L"ChartArea1";
			series87->Color = System::Drawing::Color::Yellow;
			series87->Legend = L"Legend1";
			series87->Name = L"Естественная 2";
			series88->ChartArea = L"ChartArea1";
			series88->Color = System::Drawing::Color::Lime;
			series88->Legend = L"Legend1";
			series88->Name = L"Естественная 1";
			series89->ChartArea = L"ChartArea1";
			series89->Color = System::Drawing::Color::Blue;
			series89->Legend = L"Legend1";
			series89->Name = L"Внутр.Внешняя";
			series90->ChartArea = L"ChartArea1";
			series90->Color = System::Drawing::Color::Purple;
			series90->Legend = L"Legend1";
			series90->Name = L"Поглощение";
			this->chart3->Series->Add(series85);
			this->chart3->Series->Add(series86);
			this->chart3->Series->Add(series87);
			this->chart3->Series->Add(series88);
			this->chart3->Series->Add(series89);
			this->chart3->Series->Add(series90);
			this->chart3->Size = System::Drawing::Size(449, 465);
			this->chart3->TabIndex = 6;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea16->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea16);
			legend16->Name = L"Legend1";
			this->chart4->Legends->Add(legend16);
			this->chart4->Location = System::Drawing::Point(1437, 392);
			this->chart4->Name = L"chart4";
			series91->ChartArea = L"ChartArea1";
			series91->Color = System::Drawing::Color::Red;
			series91->Legend = L"Legend1";
			series91->Name = L"Простая 2";
			series92->ChartArea = L"ChartArea1";
			series92->Color = System::Drawing::Color::Orange;
			series92->Legend = L"Legend1";
			series92->Name = L"Простая 1";
			series93->ChartArea = L"ChartArea1";
			series93->Color = System::Drawing::Color::Yellow;
			series93->Legend = L"Legend1";
			series93->Name = L"Естественная 2";
			series94->ChartArea = L"ChartArea1";
			series94->Color = System::Drawing::Color::Lime;
			series94->Legend = L"Legend1";
			series94->Name = L"Естественная 1";
			series95->ChartArea = L"ChartArea1";
			series95->Color = System::Drawing::Color::Blue;
			series95->Legend = L"Legend1";
			series95->Name = L"Внутр.Внешняя";
			series96->ChartArea = L"ChartArea1";
			series96->Color = System::Drawing::Color::Purple;
			series96->Legend = L"Legend1";
			series96->Name = L"Поглощение";
			this->chart4->Series->Add(series91);
			this->chart4->Series->Add(series92);
			this->chart4->Series->Add(series93);
			this->chart4->Series->Add(series94);
			this->chart4->Series->Add(series95);
			this->chart4->Series->Add(series96);
			this->chart4->Size = System::Drawing::Size(449, 465);
			this->chart4->TabIndex = 7;
			this->chart4->Text = L"chart4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(194, 875);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Время";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(706, 875);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 20);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Чтение";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1149, 875);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Сравнения";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1612, 875);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Запись";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1898, 988);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №10";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		numericUpDown1->Minimum = 10;
		numericUpDown1->Maximum = 1000000;
		numericUpDown2->Minimum = 10;
		numericUpDown2->Maximum = 1000000;
		for (int i = 0; i < 6; ++i) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->HeaderCell->Size.Width = 2450;
		}
		dataGridView1->Rows[0]->HeaderCell->Value = "Двухфазная сортировка простым слиянием";
		dataGridView1->Rows[1]->HeaderCell->Value = "Однофазная сортировка простым слиянием";
		dataGridView1->Rows[2]->HeaderCell->Value = "Двухфазная сортировка естественным слиянием";
		dataGridView1->Rows[3]->HeaderCell->Value = "Однофазная сортировка естественным слиянием";
		dataGridView1->Rows[4]->HeaderCell->Value = "Внутренняя сортировка с внешним слиянием";
		dataGridView1->Rows[5]->HeaderCell->Value = "Сортировка методом поглощения";

		ofstream writeAa("a.txt", ios::in);		// Открыли файл для записи
		ofstream writeAa2("a2.txt");					// Открыли файл для записи
		ofstream writeAa3("a3.txt");					// Открыли файл для записи
		ofstream writeAa4("a4.txt");					// Открыли файл для записи
		ofstream writeAa5("a5.txt");					// Открыли файл для записи
		ofstream writeB("b.txt");							// Открыли файл для записи
		ofstream writeC("c.txt");							// Открыли файл для записи
		ofstream writeD("d.txt");							// Открыли файл для записи
		ofstream writeE("e.txt");							// Открыли файл для записи
		ofstream writeT("temp.txt");						// Открыли файл для записи
		writeAa2 << "e"; writeAa3 << "e"; writeAa4 << "e";
		writeAa5 << "e";
		writeAa << "e"; writeB << "e"; writeC << "e";
		writeD << "e"; writeE << "e"; writeT << "e";
		writeAa.close();
		writeAa2.close();
		writeAa3.close();
		writeAa4.close();
		writeAa5.close();
		writeAa.close();
		writeB.close();
		writeC.close();
		writeD.close();
		writeE.close();
		writeT.close();

		size = Convert::ToInt64(numericUpDown1->Value);
		checkBox1->Checked = true;
		checkBox2->Checked = true;
		checkBox3->Checked = true;
		checkBox4->Checked = true;
		checkBox5->Checked = true;
		checkBox6->Checked = true;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Простая 2"]->Points->Clear();
	chart1->Series["Простая 1"]->Points->Clear();
	chart1->Series["Естественная 2"]->Points->Clear();
	chart1->Series["Естественная 1"]->Points->Clear();
	chart1->Series["Внутр.Внешняя"]->Points->Clear();
	chart1->Series["Поглощение"]->Points->Clear();
	chart2->Series["Простая 2"]->Points->Clear();
	chart2->Series["Простая 1"]->Points->Clear();
	chart2->Series["Естественная 2"]->Points->Clear();
	chart2->Series["Естественная 1"]->Points->Clear();
	chart2->Series["Внутр.Внешняя"]->Points->Clear();
	chart2->Series["Поглощение"]->Points->Clear();
	chart3->Series["Простая 2"]->Points->Clear();
	chart3->Series["Простая 1"]->Points->Clear();
	chart3->Series["Естественная 2"]->Points->Clear();
	chart3->Series["Естественная 1"]->Points->Clear();
	chart3->Series["Внутр.Внешняя"]->Points->Clear();
	chart3->Series["Поглощение"]->Points->Clear();
	chart4->Series["Простая 2"]->Points->Clear();
	chart4->Series["Простая 1"]->Points->Clear();
	chart4->Series["Естественная 2"]->Points->Clear();
	chart4->Series["Естественная 1"]->Points->Clear();
	chart4->Series["Внутр.Внешняя"]->Points->Clear();
	chart4->Series["Поглощение"]->Points->Clear();

	for (int i = 0; i < 6; ++i)
		for (int j = 0; j < 4; ++j)
			dataGridView1->Rows[i]->Cells[j]->Value = "";
	size = Convert::ToInt64(numericUpDown1->Value);
	buf = Convert::ToInt64(numericUpDown2->Value);
	ofstream writeA("a.txt");					// Открыли файл для записи
	ofstream writeA2("a2.txt");					// Открыли файл для записи
	ofstream writeA3("a3.txt");					// Открыли файл для записи
	ofstream writeA4("a4.txt");					// Открыли файл для записи
	ofstream writeA5("a5.txt");					// Открыли файл для записи
	FILE* writeA6 = fopen("a6.txt", "wb");				// Открыли файл для записи
	for (int i = 0; i < size; ++i) {
		int number = rand() % 100;
		writeA << " " << number;
		writeA2 << " " << number;
		writeA3 << " " << number;
		writeA4 << " " << number;
		writeA5 << " " << number;
		fwrite(&number, sizeof(int), 1, writeA6);
	}
	writeA.close();
	writeA2.close();
	writeA3.close();
	writeA4.close();
	writeA5.close();
	fclose(writeA6);

	if(checkBox1->Checked)
	{
		int* twoPhase = new int[4];
		SimpleSortTwoPhase(size, twoPhase);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[0]->Cells[i]->Value = twoPhase[i];
		chart1->Series["Простая 2"]->Points->AddY(twoPhase[0]);
		chart2->Series["Простая 2"]->Points->AddY(twoPhase[1]);
		chart3->Series["Простая 2"]->Points->AddY(twoPhase[2]);
		chart4->Series["Простая 2"]->Points->AddY(twoPhase[3]);
		delete[] twoPhase;
	}
	if (checkBox2->Checked)
	{
		int* onePhase = new int[4];
		SimpleSortOnePhase(size, onePhase);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[1]->Cells[i]->Value = onePhase[i];
		chart1->Series["Простая 1"]->Points->AddY(onePhase[0]);
		chart2->Series["Простая 1"]->Points->AddY(onePhase[1]);
		chart3->Series["Простая 1"]->Points->AddY(onePhase[2]);
		chart4->Series["Простая 1"]->Points->AddY(onePhase[3]);
		delete[] onePhase;
	}
	if (checkBox3->Checked)
	{
		int* twoPhase = new int[4];
		NaturalSortTwoPhase(twoPhase);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[2]->Cells[i]->Value = twoPhase[i];
		chart1->Series["Естественная 2"]->Points->AddY(twoPhase[0]);
		chart2->Series["Естественная 2"]->Points->AddY(twoPhase[1]);
		chart3->Series["Естественная 2"]->Points->AddY(twoPhase[2]);
		chart4->Series["Естественная 2"]->Points->AddY(twoPhase[3]);
		delete[] twoPhase;
	}
	if (checkBox4->Checked)
	{
		int* onePhase = new int[4];
		NaturalSortOnePhase(onePhase);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[3]->Cells[i]->Value = onePhase[i];
		chart1->Series["Естественная 1"]->Points->AddY(onePhase[0]);
		chart2->Series["Естественная 1"]->Points->AddY(onePhase[1]);
		chart3->Series["Естественная 1"]->Points->AddY(onePhase[2]);
		chart4->Series["Естественная 1"]->Points->AddY(onePhase[3]);
		delete[] onePhase;
	}
	if (checkBox5->Checked)
	{
		int* inexSort = new int[4];
		InternalExternal(size, buf, inexSort);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[4]->Cells[i]->Value = inexSort[i];
		chart1->Series["Внутр.Внешняя"]->Points->AddY(inexSort[0]);
		chart2->Series["Внутр.Внешняя"]->Points->AddY(inexSort[1]);
		chart3->Series["Внутр.Внешняя"]->Points->AddY(inexSort[2]);
		chart4->Series["Внутр.Внешняя"]->Points->AddY(inexSort[3]);
		delete[] inexSort;
	}
	if (checkBox6->Checked)
	{
		int* absortingSort = new int[4];
		Absorting(size, buf, absortingSort);
		for (int i = 0; i < 4; ++i)
			dataGridView1->Rows[5]->Cells[i]->Value = absortingSort[i];
		chart1->Series["Поглощение"]->Points->AddY(absortingSort[0]);
		chart2->Series["Поглощение"]->Points->AddY(absortingSort[1]);
		chart3->Series["Поглощение"]->Points->AddY(absortingSort[2]);
		chart4->Series["Поглощение"]->Points->AddY(absortingSort[3]);
		delete[] absortingSort;
	}
}
};

}
