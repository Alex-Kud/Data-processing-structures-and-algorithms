#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public Form {
	public:
		long size = 1;
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components) delete components;
		}
	private: TabControl^ tabControl1;
	TabPage^ tabPage3;
	TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
		   System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		   void InitializeComponent(void) {
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->tabControl1->SuspendLayout();
			   this->tabPage4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->tabPage3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage4);
			   this->tabControl1->Controls->Add(this->tabPage3);
			   this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->tabControl1->Location = System::Drawing::Point(22, 14);
			   this->tabControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(1592, 928);
			   this->tabControl1->TabIndex = 0;
			   // 
			   // tabPage4
			   // 
			   this->tabPage4->BackColor = System::Drawing::Color::LemonChiffon;
			   this->tabPage4->Controls->Add(this->textBox2);
			   this->tabPage4->Controls->Add(this->label9);
			   this->tabPage4->Controls->Add(this->label8);
			   this->tabPage4->Controls->Add(this->label7);
			   this->tabPage4->Controls->Add(this->comboBox1);
			   this->tabPage4->Controls->Add(this->button4);
			   this->tabPage4->Controls->Add(this->numericUpDown3);
			   this->tabPage4->Controls->Add(this->numericUpDown2);
			   this->tabPage4->Controls->Add(this->textBox1);
			   this->tabPage4->Controls->Add(this->label5);
			   this->tabPage4->Controls->Add(this->numericUpDown1);
			   this->tabPage4->Controls->Add(this->dataGridView1);
			   this->tabPage4->Controls->Add(this->label2);
			   this->tabPage4->Controls->Add(this->label1);
			   this->tabPage4->Controls->Add(this->button1);
			   this->tabPage4->Location = System::Drawing::Point(4, 46);
			   this->tabPage4->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			   this->tabPage4->Name = L"tabPage4";
			   this->tabPage4->Size = System::Drawing::Size(1584, 878);
			   this->tabPage4->TabIndex = 3;
			   this->tabPage4->Text = L"Характеристики";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->textBox2->Location = System::Drawing::Point(24, 431);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox2->Size = System::Drawing::Size(458, 426);
			   this->textBox2->TabIndex = 16;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(531, 737);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(66, 37);
			   this->label9->TabIndex = 15;
			   this->label9->Text = L"По:";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(531, 675);
			   this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(65, 37);
			   this->label8->TabIndex = 14;
			   this->label8->Text = L"Из:";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(527, 604);
			   this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(49, 37);
			   this->label7->TabIndex = 13;
			   this->label7->Text = L"C:";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				   L"a1.txt", L"a2.txt", L"a3.txt", L"a4.txt", L"a5.txt",
					   L"a6.txt", L"a7.txt", L"a8.txt", L"a9.txt", L"a10.txt"
			   });
			   this->comboBox1->Location = System::Drawing::Point(608, 667);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(398, 45);
			   this->comboBox1->TabIndex = 12;
			   // 
			   // button4
			   // 
			   this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button4->Location = System::Drawing::Point(535, 799);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(470, 58);
			   this->button4->TabIndex = 11;
			   this->button4->Text = L"Вывести";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown3->Location = System::Drawing::Point(604, 735);
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(400, 43);
			   this->numericUpDown3->TabIndex = 10;
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown2->Location = System::Drawing::Point(605, 601);
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(400, 43);
			   this->numericUpDown2->TabIndex = 9;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->textBox1->Location = System::Drawing::Point(1042, 431);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox1->Size = System::Drawing::Size(459, 426);
			   this->textBox1->TabIndex = 8;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(521, 440);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(292, 29);
			   this->label5->TabIndex = 7;
			   this->label5->Text = L"Количество элементов:";
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown1->Location = System::Drawing::Point(820, 432);
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(184, 43);
			   this->numericUpDown1->TabIndex = 6;
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				   this->Column1,
					   this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			   });
			   this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			   this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			   this->dataGridView1->Location = System::Drawing::Point(24, 93);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 165;
			   this->dataGridView1->Size = System::Drawing::Size(1477, 316);
			   this->dataGridView1->TabIndex = 5;
			   // 
			   // Column1
			   // 
			   this->Column1->HeaderText = L"1";
			   this->Column1->MinimumWidth = 6;
			   this->Column1->Name = L"Column1";
			   this->Column1->Width = 150;
			   // 
			   // Column2
			   // 
			   this->Column2->HeaderText = L"2";
			   this->Column2->MinimumWidth = 6;
			   this->Column2->Name = L"Column2";
			   this->Column2->Width = 150;
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"3";
			   this->Column3->MinimumWidth = 8;
			   this->Column3->Name = L"Column3";
			   this->Column3->Width = 150;
			   // 
			   // Column4
			   // 
			   this->Column4->HeaderText = L"4";
			   this->Column4->MinimumWidth = 8;
			   this->Column4->Name = L"Column4";
			   this->Column4->Width = 150;
			   // 
			   // Column5
			   // 
			   this->Column5->HeaderText = L"5";
			   this->Column5->MinimumWidth = 8;
			   this->Column5->Name = L"Column5";
			   this->Column5->Width = 150;
			   // 
			   // Column6
			   // 
			   this->Column6->HeaderText = L"6";
			   this->Column6->MinimumWidth = 8;
			   this->Column6->Name = L"Column6";
			   this->Column6->Width = 150;
			   // 
			   // Column7
			   // 
			   this->Column7->HeaderText = L"7";
			   this->Column7->MinimumWidth = 8;
			   this->Column7->Name = L"Column7";
			   this->Column7->Width = 150;
			   // 
			   // Column8
			   // 
			   this->Column8->HeaderText = L"8";
			   this->Column8->MinimumWidth = 8;
			   this->Column8->Name = L"Column8";
			   this->Column8->Width = 150;
			   // 
			   // Column9
			   // 
			   this->Column9->HeaderText = L"9";
			   this->Column9->MinimumWidth = 8;
			   this->Column9->Name = L"Column9";
			   this->Column9->Width = 150;
			   // 
			   // Column10
			   // 
			   this->Column10->HeaderText = L"10";
			   this->Column10->MinimumWidth = 8;
			   this->Column10->Name = L"Column10";
			   this->Column10->Width = 150;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->Location = System::Drawing::Point(19, 59);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(262, 29);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Замер характеристик";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->Location = System::Drawing::Point(609, 22);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(392, 37);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Лабораторная работа №9";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(526, 495);
			   this->button1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(479, 58);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Запустить";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->BackColor = System::Drawing::Color::LemonChiffon;
			   this->tabPage3->Controls->Add(this->button5);
			   this->tabPage3->Controls->Add(this->label6);
			   this->tabPage3->Controls->Add(this->dataGridView3);
			   this->tabPage3->Location = System::Drawing::Point(4, 46);
			   this->tabPage3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->Size = System::Drawing::Size(1584, 878);
			   this->tabPage3->TabIndex = 2;
			   this->tabPage3->Text = L"Демонстрация";
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button5->Location = System::Drawing::Point(304, 525);
			   this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(1234, 49);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Сортировать";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(4, 531);
			   this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(292, 37);
			   this->label6->TabIndex = 3;
			   this->label6->Text = L"Запуск сортировки";
			   // 
			   // dataGridView3
			   // 
			   this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Info;
			   this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				   this->Column18,
					   this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26,
					   this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32
			   });
			   this->dataGridView3->Location = System::Drawing::Point(0, 0);
			   this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			   this->dataGridView3->Name = L"dataGridView3";
			   this->dataGridView3->RowHeadersWidth = 51;
			   this->dataGridView3->RowTemplate->Height = 24;
			   this->dataGridView3->Size = System::Drawing::Size(1580, 506);
			   this->dataGridView3->TabIndex = 0;
			   // 
			   // Column18
			   // 
			   this->Column18->HeaderText = L"1";
			   this->Column18->MinimumWidth = 6;
			   this->Column18->Name = L"Column18";
			   this->Column18->Width = 65;
			   // 
			   // Column19
			   // 
			   this->Column19->HeaderText = L"2";
			   this->Column19->MinimumWidth = 6;
			   this->Column19->Name = L"Column19";
			   this->Column19->Width = 65;
			   // 
			   // Column20
			   // 
			   this->Column20->HeaderText = L"3";
			   this->Column20->MinimumWidth = 6;
			   this->Column20->Name = L"Column20";
			   this->Column20->Width = 65;
			   // 
			   // Column21
			   // 
			   this->Column21->HeaderText = L"4";
			   this->Column21->MinimumWidth = 6;
			   this->Column21->Name = L"Column21";
			   this->Column21->Width = 65;
			   // 
			   // Column22
			   // 
			   this->Column22->HeaderText = L"5";
			   this->Column22->MinimumWidth = 6;
			   this->Column22->Name = L"Column22";
			   this->Column22->Width = 65;
			   // 
			   // Column23
			   // 
			   this->Column23->HeaderText = L"6";
			   this->Column23->MinimumWidth = 6;
			   this->Column23->Name = L"Column23";
			   this->Column23->Width = 65;
			   // 
			   // Column24
			   // 
			   this->Column24->HeaderText = L"7";
			   this->Column24->MinimumWidth = 6;
			   this->Column24->Name = L"Column24";
			   this->Column24->Width = 65;
			   // 
			   // Column25
			   // 
			   this->Column25->HeaderText = L"8";
			   this->Column25->MinimumWidth = 6;
			   this->Column25->Name = L"Column25";
			   this->Column25->Width = 65;
			   // 
			   // Column26
			   // 
			   this->Column26->HeaderText = L"9";
			   this->Column26->MinimumWidth = 6;
			   this->Column26->Name = L"Column26";
			   this->Column26->Width = 65;
			   // 
			   // Column27
			   // 
			   this->Column27->HeaderText = L"10";
			   this->Column27->MinimumWidth = 6;
			   this->Column27->Name = L"Column27";
			   this->Column27->Width = 65;
			   // 
			   // Column28
			   // 
			   this->Column28->HeaderText = L"11";
			   this->Column28->MinimumWidth = 6;
			   this->Column28->Name = L"Column28";
			   this->Column28->Width = 65;
			   // 
			   // Column29
			   // 
			   this->Column29->HeaderText = L"12";
			   this->Column29->MinimumWidth = 6;
			   this->Column29->Name = L"Column29";
			   this->Column29->Width = 65;
			   // 
			   // Column30
			   // 
			   this->Column30->HeaderText = L"13";
			   this->Column30->MinimumWidth = 6;
			   this->Column30->Name = L"Column30";
			   this->Column30->Width = 65;
			   // 
			   // Column31
			   // 
			   this->Column31->HeaderText = L"14";
			   this->Column31->MinimumWidth = 6;
			   this->Column31->Name = L"Column31";
			   this->Column31->Width = 65;
			   // 
			   // Column32
			   // 
			   this->Column32->HeaderText = L"15";
			   this->Column32->MinimumWidth = 6;
			   this->Column32->Name = L"Column32";
			   this->Column32->Width = 65;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::LemonChiffon;
			   this->ClientSize = System::Drawing::Size(1620, 950);
			   this->Controls->Add(this->tabControl1);
			   this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->Name = L"MyForm";
			   this->Text = L"Сортировка методом поглощения";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage4->ResumeLayout(false);
			   this->tabPage4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->tabPage3->ResumeLayout(false);
			   this->tabPage3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion

		   Void MyForm_Load(Object^ sender, EventArgs^ e) {
			   ofstream writeA("a.txt", std::ios::in);		// Открыли файл для записи
			   ofstream writeB("b.txt");							// Открыли файл для записи
			   ofstream writeC("c.txt");							// Открыли файл для записи
			   ofstream writeD("d.txt");							// Открыли файл для записи
			   ofstream writeE("e.txt");							// Открыли файл для записи
			   ofstream writeT("temp.txt");						// Открыли файл для записи
			   writeA << "e"; writeB << "e"; writeC << "e";
			   writeD << "e"; writeE << "e"; writeT << "e";
			   writeA.close();
			   writeB.close();
			   writeC.close();
			   writeD.close();
			   writeE.close();
			   writeT.close();
			   numericUpDown1->Minimum = 100;
			   numericUpDown1->Maximum = 1000000;
			   for (int i = 0; i < 4; ++i)
				   dataGridView1->Rows->Add();
			   dataGridView1->Rows[0]->HeaderCell->Value = "Время";
			   dataGridView1->Rows[1]->HeaderCell->Value = "Чтения";
			   dataGridView1->Rows[2]->HeaderCell->Value = "Сравнения";
			   dataGridView1->Rows[3]->HeaderCell->Value = "Записи";

			   for (int i = 0; i < 11; ++i)
				   dataGridView3->Rows->Add();
			   dataGridView3->Rows[0]->HeaderCell->Value = "A";
			   dataGridView3->Rows[1]->HeaderCell->Value = "Память";
			   dataGridView3->Rows[2]->HeaderCell->Value = "A";
			   dataGridView3->Rows[3]->HeaderCell->Value = "Память";
			   dataGridView3->Rows[4]->HeaderCell->Value = "A";
			   dataGridView3->Rows[5]->HeaderCell->Value = "Память";
			   dataGridView3->Rows[6]->HeaderCell->Value = "A";
			   dataGridView3->Rows[7]->HeaderCell->Value = "Память";
			   dataGridView3->Rows[8]->HeaderCell->Value = "A";
			   dataGridView3->Rows[9]->HeaderCell->Value = "Память";
			   dataGridView3->Rows[10]->HeaderCell->Value = "A";
			   comboBox1->SelectedItem = comboBox1->Items[0];
		   }
		   Void button1_Click(Object^ sender, EventArgs^ e) {
			   textBox2->Text = "";
			   size = Convert::ToInt64(numericUpDown1->Value);
			   FILE* writeA1 = fopen("a1.txt", "wb");
			   FILE* writeA2 = fopen("a2.txt", "wb");
			   FILE* writeA3 = fopen("a3.txt", "wb");
			   FILE* writeA4 = fopen("a4.txt", "wb");
			   FILE* writeA5 = fopen("a5.txt", "wb");
			   FILE* writeA6 = fopen("a6.txt", "wb");
			   FILE* writeA7 = fopen("a7.txt", "wb");
			   FILE* writeA8 = fopen("a8.txt", "wb");
			   FILE* writeA9 = fopen("a9.txt", "wb");
			   FILE* writeA10 = fopen("a10.txt", "wb");

			   for (int j = 0; j < size; ++j) {
				   const int number = rand() % 100;
				   fwrite(&number, sizeof(int), 1, writeA1);
				   fwrite(&number, sizeof(int), 1, writeA2);
				   fwrite(&number, sizeof(int), 1, writeA3);
				   fwrite(&number, sizeof(int), 1, writeA4);
				   fwrite(&number, sizeof(int), 1, writeA5);
				   fwrite(&number, sizeof(int), 1, writeA6);
				   fwrite(&number, sizeof(int), 1, writeA7);
				   fwrite(&number, sizeof(int), 1, writeA8);
				   fwrite(&number, sizeof(int), 1, writeA9);
				   fwrite(&number, sizeof(int), 1, writeA10);
				   textBox2->Text += number + " ";
			   }

			   fclose(writeA1);
			   fclose(writeA2);
			   fclose(writeA3);
			   fclose(writeA4);
			   fclose(writeA5);
			   fclose(writeA6);
			   fclose(writeA7);
			   fclose(writeA8);
			   fclose(writeA9);
			   fclose(writeA10);
			   
			   // ---------------------------------------
			   // ---------------------------------------
			   // ---------------Cортировка--------------
			   // ---------------------------------------
			   // ---------------------------------------
			   for (int j = 1; j < 11; ++j) {
			   //int j = 3;
				   int incount = 0;									// Счётчик считываний из файла
				   int compcount = 0;								// Счётчик сравнений
				   int outcount = 0;								// Счетчик записей в файл
				   string fileA = "a" + msclr::interop::marshal_as<std::string>(j.ToString()) + ".txt";
				   const char* path = fileA.c_str();
				   auto start = std::chrono::high_resolution_clock::now();
				   absorptionSort(j, path, incount, compcount, outcount);
				   auto finish = std::chrono::high_resolution_clock::now();
				   auto time = std::chrono::duration_cast<std::chrono::duration < double>>(finish - start);
				   // Вывод характеристик сортировки
				   dataGridView1->Rows[0]->Cells[j - 1]->Value = Convert::ToString(time.count() * 10000);
				   dataGridView1->Rows[1]->Cells[j - 1]->Value = incount;
				   dataGridView1->Rows[2]->Cells[j - 1]->Value = compcount;
				   dataGridView1->Rows[3]->Cells[j - 1]->Value = outcount;
			   }
			   numericUpDown2->Minimum = 0;
			   numericUpDown2->Maximum = size - 1;
			   numericUpDown3->Minimum = 0;
			   numericUpDown3->Maximum = size - 1;
		   }
		   // значения от 0 до n
		   // Метод поглощения
		   void absorptionSort(long lengthBuf, const char* path, int& incount, int& compcount, int& outcount) {
				   int* buffer = new int[lengthBuf];					// Создание массива-буффера
				   for (int i = 0; i < lengthBuf; i++)					// Заполняем буффера последней тройкой чисел из файла
					   buffer[i] = getNumber(size - 1 - i, path);
				   compcount += lengthBuf;
				   incount += lengthBuf;
				   shell(buffer, lengthBuf, compcount);// Сортировка буффера
				   //Проверяем не превысил ли размер буффера размер файла
				   if (lengthBuf > size) {
					   compcount++;
					   // Если размер буффера больше, то записываем его в файл и завершаем сортировку
					   // Записываем только количество чисел, которое изначально было в файле
					   for (int i = 0; i < size; i++)
						   setNumber(buffer[i], i, path);
					   compcount += size;
					   outcount += size;
					   delete[] buffer;							// Освобождаем ресурсы
					   return;
				   }
				   // Если буффер меньше размера файла, то записываем его на прежнее место, только в отсортированном виде
				   for (int i = 0; i < lengthBuf; i++) 
					   setNumber(buffer[i], size - lengthBuf + i, path);
				   outcount += lengthBuf;
				   compcount += lengthBuf;
				   // Количество прошедших повторений записи в буфер и сортировки для определения положения чтения и записи
				   int iterations = 1;
				   // Пока количество выполненных итераций меньше либо равно числу необходимых итераций
				   while (iterations <= size / lengthBuf - 1) {
					   compcount++;
					   // Заполняем буффер
					   for (int i = 0; i < lengthBuf; i++) 
						   /* Число элементов size
						   Отчёт элементов с 0, поэтому последний индекс числа в файле size -1
						   lengthBuf - размер буфера, iterations - количество итераций.
						   При перемножении дают количество чисел, которые уже были отсортированы
						   i - вычитание индекса в буффере*/
						   buffer[i] = getNumber(size - 1 - lengthBuf * iterations - i, path);
					   compcount += lengthBuf;
					   incount += lengthBuf;
					   shell(buffer, lengthBuf, compcount);			// Сортировка буффера
					   int kBuffer = 0;						// Количество чисел, уже записанных из буффера
					   int kFiles = 0;						// Количество чисел, уже записанных из файла
					   // Повторяем цикл столько раз, сколько отсортированных элементов у нас уже есть + размер буффера
					   for (int i = 0; i < lengthBuf + lengthBuf * iterations; i++) {
						   compcount++;
						   incount++;
						   outcount++;
						   int numberFromFile = getNumber(size - lengthBuf * iterations + kFiles, path);
						   compcount++;
						   // Если элемент буффера меньше элемента файла, то пишем из буффера,  иначе из файла
						   if (buffer[kBuffer] <= numberFromFile) {
							   setNumber(buffer[kBuffer], size - lengthBuf * (iterations + 1) + i, path);
							   kBuffer++;					// Увеличение счетчика чисел, добавленных из буффера
							   //Если все числа из буффера добавлены в файл, то значит, что остальная часть отсортирована и можно завершать цикл
							   /* Буффер 1 2 3 - отсортирован
							   Файл 3 1 2 4 5 6, где 4 5 6 - отсортированная ранее часть
							   Проходя по циклу заменяем в файле 3 на 1, 1 на 2, 2 на 3. 4 5 6 в замене не нуждаются - выходим из цикла */
							   if (kBuffer == lengthBuf) {
								   compcount++;
								   break;
							   }
						   }
						   else {
							   /*Как получили число в скобках:
							   Число элементов count
							   -1 не нужен т.к. положение числа настраивается с помощью i
							   lengthBuf - размер буфера, iterations+1 - количество итераций. При перемножении дают количество чисел, которые уже были отсортированы
							   i - прибавление индекса
							   */
							   setNumber(numberFromFile, size - lengthBuf * (iterations + 1) + i, path);
							   kFiles++;					// Увеличесние счетчика чисел, добавленных из файла
						   }
					   }
					   iterations++;						// Увеличиваем итерацию после её завершения
				   }
				   // Количество элементов, которые останутся после сортировки, но не смогут полностью заполнить буффер
				   const int mod = static_cast<int>(size % lengthBuf);
				   for (int i = 0; i < mod; i++)
					   buffer[i] = getNumber(i, path);		// Заполняем буффер этими элементами
				   compcount += mod;
				   incount += mod;
				   // Заполняем буффер "большими числами", чтобы при сортировке они ушли в конец и не мешались
				   for (int i = mod; i < lengthBuf; i++)
					   buffer[i] = 10000;
				   compcount += lengthBuf;
				   shell(buffer, lengthBuf, compcount);			// Сортировка буффера
				   int kBuffer = 0;						// Количество чисел, уже записанных из буффера
				   int kFiles = 0;						// Количество чисел, уже записанных из файла
				   //Проходим по всему файлу
				   for (int i = 0; i < size - 1; i++) {
					   compcount++;
					   incount++;
					   outcount++;
					   int numberFromFile = getNumber(mod + kFiles, path);
					   compcount++;
					   // Сравниваем числа из буффера с числами из файла и записываем
					   if (buffer[kBuffer] <= numberFromFile) {
						   setNumber(buffer[kBuffer], i, path);
						   kBuffer++;
						   if (kBuffer == mod) break;
					   }
					   else {
						   setNumber(numberFromFile, i, path);
						   kFiles++;
					   }
				   }
				   delete[] buffer;							// Освобождаем ресурсы
		   }

		   // Получение числа с позиции position в файле path
		   int getNumber(long position, const char* path) {
			   if (position < 0 || position >= size) return 10000;
			   FILE* f = fopen(path, "rb");						// Открытие файла
			   fseek(f, position * sizeof(int), SEEK_SET);		// Перемещение указателя
			   int number;
			   if (!feof(f))
				   fread(&number, sizeof(int), 1, f);	// Считывание число
			   else 
				   return 10000;
			   fclose(f);														// Очистка ресурсов
			   return number;
		   }

		   // Замена числа на позиции position в файле path
		   void setNumber(int number, long position, const char* path) {
			   if (position < 0 || position >= size) return;
			   FILE* f = fopen(path, "rb+");
			   fseek(f, position * sizeof(int), SEEK_SET);		// Перемещение указателя
			   int count = 0;
			   count = fwrite(&number, sizeof(int), 1, f);		// Запись числа в файл
			   fclose(f);														// Очистка ресурсов
		   }
	
		   // Вывод части файла
		   Void button4_Click(Object^ sender, EventArgs^ e) {
			   long min = Convert::ToInt64(numericUpDown2->Value);
			   long max = Convert::ToInt64(numericUpDown3->Value);
			   if (max < min) {
				   textBox1->Text = "Я ругаюсь. Ты накосячил";
				   return;
			   }
			   string pathS = msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString());
			   const char* path = pathS.c_str();
			   FILE* f = fopen(path, "rb");						// Открытие файла
			   textBox1->Text += comboBox1->SelectedItem->ToString() + "\r\n";
			   for (int i = 0; i < size; ++i) {
				   int num;
				   fread(&num, sizeof(int), 1, f);	// Считывание числ
				   if (i >= min && i <= max)
					   textBox1->Text += num + " ";
			   }
			   textBox1->Text += "\r\n\r\n";
			   fclose(f);
		   }

		   long getLengthFile(string path) {
			   long length = 0;
			   ifstream readF(path);		// Открыли файл для чтения
			   ifstream readT("temp.txt");		// Открыли файл для чтения
			   ofstream writeT("temp.txt");
			   while (!readF.eof()) {
				   int number;							// Новое число
				   readF >> number;					// Считывание нового числа
				   writeT << " " << number;
				   length++;
			   }
			   readF.close();
			   writeT.close();
			   ofstream writeF(path);
			   while (!readT.eof()) {
				   int number;							// Новое число
				   readT >> number;					// Считывание нового числа
				   writeF << " " << number;
			   }
			   return length;
		   }

		   void printStr(int row, DataGridView^ data, const char* path) {
			   FILE* f = fopen(path, "rb");
			   for (int j = 0; j < size; ++j) {
				   int number;
				   fseek(f, j * sizeof(int), SEEK_SET);		// Перемещение указателя
				   if (!feof(f))
					   fread(&number, sizeof(int), 1, f);	// Считывание число
				   else
					   number = 10000;
				   data->Rows[row]->Cells[j]->Value = number;
			   }
			   fclose(f);
		   }

		   // Оперативная память = 3
		   // Итеративная демонстрация алгоритма однофазной сортировки
		   Void button5_Click(Object^ sender, EventArgs^ e) {
			   size = 15;
			   int lengthBuf = 3;
			   char* path = "a.txt";
			   FILE* writeA = fopen(path, "wb"); // Открыли файл для записи
			   for (int i = 0; i < size; ++i) {
				   int number = rand() % 100;
				   fwrite(&number, sizeof(int), 1, writeA);
			   }
			   fclose(writeA);					// Закрыли файл для записи
			   printStr(0, dataGridView3, path);
				int* buffer = new int[lengthBuf];					// Создание массива-буффера
				for (int i = 0; i < lengthBuf; i++)					// Заполняем буффера последней тройкой чисел из файла
					buffer[i] = getNumber(size - 1 - i, path);
				shellWithout(buffer, lengthBuf);// Сортировка буффера
				//Проверяем не превысил ли размер буффера размер файла
				if (lengthBuf > size) {
					// Если размер буффера больше, то записываем его в файл и завершаем сортировку
					// Записываем только количество чисел, которое изначально было в файле
					for (int i = 0; i < size; i++) {
						setNumber(buffer[i], i, path);
						dataGridView3->Rows[1]->Cells[size - lengthBuf + i]->Value = buffer[i];
					}
					printStr(2, dataGridView3, path);
					delete[] buffer;							// Освобождаем ресурсы
					return;
				}

				// Если буффер меньше размера файла, то записываем его на прежнее место, только в отсортированном виде
				for (int i = 0; i < lengthBuf; i++) {
					setNumber(buffer[i], size - lengthBuf + i, path);
					dataGridView3->Rows[1]->Cells[size - lengthBuf + i]->Value = buffer[i];
				}
				printStr(2, dataGridView3, path);
				// Количество прошедших повторений записи в буфер и сортировки для определения положения чтения и записи
				int iterations = 1;
				// Пока количество выполненных итераций меньше либо равно числу необходимых итераций
				while (iterations <= size / lengthBuf - 1) {
					// Заполняем буффер
					for (int i = 0; i < lengthBuf; i++)
						/* Число элементов size
						Отчёт элементов с 0, поэтому последний индекс числа в файле size -1
						lengthBuf - размер буфера, iterations - количество итераций.
						При перемножении дают количество чисел, которые уже были отсортированы
						i - вычитание индекса в буффере*/
						buffer[i] = getNumber(size - 1 - lengthBuf * iterations - i, path);
					shellWithout(buffer, lengthBuf);			// Сортировка буффера
					int kBuffer = 0;						// Количество чисел, уже записанных из буффера
					int kFiles = 0;						// Количество чисел, уже записанных из файла
					// Повторяем цикл столько раз, сколько отсортированных элементов у нас уже есть + размер буффера
					for (int i = 0; i < lengthBuf + lengthBuf * iterations; i++)
						// Если элемент буффера меньше элемента файла, то пишем из буффера,  иначе из файла
						if (buffer[kBuffer] <= getNumber(size - lengthBuf * iterations + kFiles, path)) {
							setNumber(buffer[kBuffer], size - lengthBuf * (iterations + 1) + i, path);
							kBuffer++;					// Увеличение счетчика чисел, добавленных из буффера
							//Если все числа из буффера добавлены в файл, то значит, что остальная часть отсортирована и можно завершать цикл
							/* Буффер 1 2 3 - отсортирован
							Файл 3 1 2 4 5 6, где 4 5 6 - отсортированная ранее часть
							Проходя по циклу заменяем в файле 3 на 1, 1 на 2, 2 на 3. 4 5 6 в замене не нуждаются - выходим из цикла */
							if (kBuffer == lengthBuf) break;
						}
						else {
							/*Как получили число в скобках:
							Число элементов count
							-1 не нужен т.к. положение числа настраивается с помощью i
							n - размер буфера, iterations+1 - количество итераций. При перемножении дают количество чисел, которые уже были отсортированы
							i - прибавление индекса
							*/
							setNumber(getNumber(size - lengthBuf * iterations + kFiles, path), size - lengthBuf * (iterations + 1) + i, path);
							kFiles++;					// Увеличесние счетчика чисел, добавленных из файла
						}
					for (int i = 0; i < 3; ++i)
						dataGridView3->Rows[iterations * 2 + 1]->Cells[size - lengthBuf * (iterations + 1) + i]->Value = buffer[i];
					printStr(iterations * 2 + 2, dataGridView3, path);
					iterations++;						// Увеличиваем итерацию после её завершения
				}
				// Количество элементов, которые останутся после сортировки, но не смогут полностью заполнить буффер
				const int mod = static_cast<int>(size % lengthBuf);
				for (int i = 0; i < mod; i++)
					buffer[i] = getNumber(i, path);		// Заполняем буффер этими элементами
				// Заполняем буффер "большими числами", чтобы при сортировке они ушли в конец и не мешались
				for (int i = mod; i < lengthBuf; i++)
					buffer[i] = 10000;
				shellWithout(buffer, lengthBuf);			// Сортировка буффера
				int kBuffer = 0;						// Количество чисел, уже записанных из буффера
				int kFiles = 0;						// Количество чисел, уже записанных из файла
				//Проходим по всему файлу
				for (int i = 0; i < size - 1; i++) {
					// Сравниваем числа из буффера с числами из файла и записываем
					if (buffer[kBuffer] <= getNumber(mod + kFiles, path)) {
						setNumber(buffer[kBuffer], i, path);
						kBuffer++;
						if (kBuffer == mod) break;
					}
					else {
						setNumber(getNumber(mod + kFiles, path), i, path);
						kFiles++;
					}
				}
				delete[] buffer;							// Освобождаем ресурсы
		   }

		   // Cортировка Шелла с замером характеристик
		   void shell(int* num, int size, int& comparisons) {
			   //int increment = log2(size) - 1;			// начальное приращение сортировки
			   int increment = size / 2;
			   while (increment > 0) {						// пока существует приращение
				   for (int i = 0; i < size; i++) {		// для всех элементов массива
					   int j = i;							// сохраняем индекс и элемент
					   int temp = num[i];
					   // просматриваем остальные элементы массива, отстоящие от j-ого
					   // на величину приращения
					   while ((j >= increment) && (num[j - increment] > temp)) {
						   // пока отстоящий элемент больше текущего
						   num[j] = num[j - increment];	// перемещаем его на текущую позицию
						   j = j - increment;				// переходим к следующему отстоящему элементу
						   comparisons++;
					   }
					   num[j] = temp;						// на выявленное место помещаем сохранённый элемент
				   }
				   increment = increment / 2;				// делим приращение на 2
			   }
		   }

		   // Cортировка Шелла с замером характеристик
		   void shellWithout(int* num, int size) {
			   //int increment = log2(size) - 1;			// начальное приращение сортировки
			   int increment = size / 2;
			   while (increment > 0) {						// пока существует приращение
				   for (int i = 0; i < size; i++) {		// для всех элементов массива
					   int j = i;							// сохраняем индекс и элемент
					   int temp = num[i];
					   // просматриваем остальные элементы массива, отстоящие от j-ого
					   // на величину приращения
					   while ((j >= increment) && (num[j - increment] > temp)) {
						   // пока отстоящий элемент больше текущего
						   num[j] = num[j - increment];	// перемещаем его на текущую позицию
						   j = j - increment;				// переходим к следующему отстоящему элементу
					   }
					   num[j] = temp;						// на выявленное место помещаем сохранённый элемент
				   }
				   increment = increment / 2;				// делим приращение на 2
			   }
		   }
	};
}
