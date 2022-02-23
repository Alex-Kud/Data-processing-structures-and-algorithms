#pragma once
#include <fstream>
#include <chrono>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork7 {

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
		   TabPage^ tabPage2;
		   TabPage^ tabPage3;
		   TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
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

	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(15, 9);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1061, 451);
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
			this->tabPage4->Location = System::Drawing::Point(4, 34);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1053, 413);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Характеристики";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox2->Location = System::Drawing::Point(441, 84);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(307, 133);
			this->textBox2->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(551, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L"По:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(549, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Из:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(549, 227);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"C:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"a.txt", L"a2.txt" });
			this->comboBox1->Location = System::Drawing::Point(601, 268);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(373, 33);
			this->comboBox1->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(554, 355);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(420, 38);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Вывести";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->numericUpDown3->Location = System::Drawing::Point(601, 314);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(373, 31);
			this->numericUpDown3->TabIndex = 10;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->numericUpDown2->Location = System::Drawing::Point(601, 225);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(373, 31);
			this->numericUpDown2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->textBox1->Location = System::Drawing::Point(750, 84);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(307, 133);
			this->textBox1->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 317);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(261, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Введите количество элементов:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->numericUpDown1->Location = System::Drawing::Point(274, 311);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(162, 31);
			this->numericUpDown1->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dataGridView1->Location = System::Drawing::Point(16, 84);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 165;
			this->dataGridView1->Size = System::Drawing::Size(420, 216);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Двухфазная сортировка";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Однофазная сортировка";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 54);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Замер характеристик";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(406, 14);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Лабораторная работа №7";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 358);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(420, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LemonChiffon;
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 34);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1053, 413);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Двухфазная сортировка";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(345, 367);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(680, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сортировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Info;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->Column3,
					this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12,
					this->Column13, this->Column14, this->Column15, this->Column16, this->Column17
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1053, 352);
			this->dataGridView2->TabIndex = 2;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"1";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 65;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"2";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 65;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"3";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 65;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"4";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 65;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"5";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 65;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"6";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 65;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"7";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 65;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"8";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 65;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"9";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 65;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"10";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 65;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"11";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 65;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"12";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 65;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"13";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 65;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"14";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->Width = 65;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"15";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->Width = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 372);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(336, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Запуск двухфазной сортировки";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::LemonChiffon;
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 34);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1053, 413);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Однофазная сортировка";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(342, 368);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(685, 32);
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
			this->label6->Location = System::Drawing::Point(3, 372);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(333, 25);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Запуск однофазной сортировки";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(235, 431);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(338, 26);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Запуск однофазной сортировки";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 484);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 24);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Сортировать";
			this->button3->UseVisualStyleBackColor = true;
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
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1053, 362);
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
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(1080, 476);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Сортировки естественным слиянием";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
			numericUpDown1->Minimum = 1;
			numericUpDown1->Maximum = 1000000;
			for (int i = 0; i < 4; ++i)
				dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->HeaderCell->Value = "Время";
			dataGridView1->Rows[1]->HeaderCell->Value = "Чтения";
			dataGridView1->Rows[2]->HeaderCell->Value = "Сравнения";
			dataGridView1->Rows[3]->HeaderCell->Value = "Записи";

			for (int i = 0; i < 13; ++i)
				dataGridView2->Rows->Add();

			dataGridView2->Rows[0]->HeaderCell->Value = "a.txt";
			dataGridView2->Rows[1]->HeaderCell->Value = "b.txt";
			dataGridView2->Rows[2]->HeaderCell->Value = "c.txt";
			dataGridView2->Rows[3]->HeaderCell->Value = "a.txt";
			dataGridView2->Rows[4]->HeaderCell->Value = "b.txt";
			dataGridView2->Rows[5]->HeaderCell->Value = "c.txt";
			dataGridView2->Rows[6]->HeaderCell->Value = "a.txt";
			dataGridView2->Rows[7]->HeaderCell->Value = "b.txt";
			dataGridView2->Rows[8]->HeaderCell->Value = "c.txt";
			dataGridView2->Rows[9]->HeaderCell->Value = "a.txt";
			dataGridView2->Rows[10]->HeaderCell->Value = "b.txt";
			dataGridView2->Rows[11]->HeaderCell->Value = "c.txt";
			dataGridView2->Rows[12]->HeaderCell->Value = "a.txt";

			for (int i = 0; i < 10; ++i)
				dataGridView3->Rows->Add();
			dataGridView3->Rows[0]->HeaderCell->Value = "a.txt";
			dataGridView3->Rows[1]->HeaderCell->Value = "b.txt";
			dataGridView3->Rows[2]->HeaderCell->Value = "c.txt";
			dataGridView3->Rows[3]->HeaderCell->Value = "d.txt";
			dataGridView3->Rows[4]->HeaderCell->Value = "e.txt";
			dataGridView3->Rows[5]->HeaderCell->Value = "b.txt";
			dataGridView3->Rows[6]->HeaderCell->Value = "c.txt";
			dataGridView3->Rows[7]->HeaderCell->Value = "d.txt";
			dataGridView3->Rows[8]->HeaderCell->Value = "e.txt";
			dataGridView3->Rows[9]->HeaderCell->Value = "a.txt";
			comboBox1->SelectedItem = comboBox1->Items[0];
		}
		Void button1_Click(Object^ sender, EventArgs^ e) {
			textBox2->Text = "";
			ofstream writeA("a.txt");					// Открыли файл для записи
			ofstream writeA2("a2.txt");					// Открыли файл для записи
			size = Convert::ToInt64(numericUpDown1->Value);
			for (int i = 0; i < size; ++i) {
				int number = rand() % 100;
				writeA << " " << number;
				writeA2 << " " << number;
				textBox2->Text += number + " ";
			}
			writeA.close();
			writeA2.close();
			// ---------------------------------------
			// ---------------------------------------
			// ---------Однофазная сортировка---------
			// ---------------------------------------
			// ---------------------------------------
			int incount = 0;									// Счётчик считываний из файла
			int compcount = 0;									// Счётчик сравнений
			int outcount = 0;									// Счетчик записей в файл
			auto startOnePhase = std::chrono::high_resolution_clock::now();
						
			bool file = true;				// Определяем файлы записи
			bool flag = true;					// Флаг для определения когда нужно выходить из цикла
			naturalSortSplit("a.txt", "b.txt", "c.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
			while (flag) {
				//В зависимости от направления записи передаём файлы для чтения и записи
				if (file)
					flag = betweenNatural("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	//Читать из b c, писать в d e
				else 
					flag = betweenNatural("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	//Читать из d e, писать в b c
				file = !file;
			}
			// Объединяем обратно в файл a, используя последние редактируемые файлы
			if (file)
				naturalSortCombine1 ("b.txt", "c.txt", incount, compcount, outcount);		//Читать из b c
			else 
				naturalSortCombine1 ("d.txt", "e.txt", incount, compcount, outcount);		//Читать из d e

			auto finishOnePhaseg = std::chrono::high_resolution_clock::now();
			auto timeOnePhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishOnePhaseg - startOnePhase);
			// Вывод характеристик сортировки
			dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString(timeOnePhase.count() * 10000);
			dataGridView1->Rows[1]->Cells[1]->Value = incount;
			dataGridView1->Rows[2]->Cells[1]->Value = compcount;
			dataGridView1->Rows[3]->Cells[1]->Value = outcount;
			// ---------------------------------------
			// ---------------------------------------
			// ---------Двухфазная сортировка---------
			// ---------------------------------------
			// ---------------------------------------
			incount = 0;						// Счётчик считываний из файла
			compcount = 0;						// Счётчик сравнений
			outcount = 0;						// Счетчик записей в файл
			auto startTwoPhase = std::chrono::high_resolution_clock::now();
			//Цикл, в котором сначала значения разделяются на два файла, а потом обратно соединяет, возвращая нужно ли продолжать сортировку или завершить
			do {
				naturalSortSplit("a2.txt", "b2.txt", "c2.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
			} while (naturalSortCombine(incount, compcount, outcount));		// Проверка длины цепочки и соединение обратно в a.txt
			auto finishTwoPhaseg = std::chrono::high_resolution_clock::now();
			auto timeTwoPhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishTwoPhaseg - startTwoPhase);
			// Вывод характеристик сортировки
			dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(timeTwoPhase.count() * 10000);
			dataGridView1->Rows[1]->Cells[0]->Value = incount;
			dataGridView1->Rows[2]->Cells[0]->Value = compcount;
			dataGridView1->Rows[3]->Cells[0]->Value = outcount;
			numericUpDown2->Minimum = 0;
			numericUpDown2->Maximum = size - 1;
			numericUpDown3->Minimum = 0;
			numericUpDown3->Maximum = size - 1;
		}

		// Метод для разбиения данных на два файла для сортировки естественным слиянием
		void naturalSortSplit(string firstRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount){
			ofstream writeB(firstWrite);		// Открыли файл для записи
			ofstream writeC(secondWrite);		// Открыли файл для записи
			ifstream readA(firstRead);		// Открыли файл для чтения
			int number;
			if (readA.eof()) number = -1;	// Если файл пуст, устанавливаем значение -1
			else {
				readA >> number;			// Иначе считываем число из файла
				incount++;					// Фиксирование считывания
			}
			compcount++;
			bool file = true;						// Определяем файл записи: true - файл b, false - файл c
			// Сохраняем предыдущее число. Ставим -1 чтобы первое число точно ушло в первый файл и не создало лишнего завершения цепочки.
			int last = -1;
			while (number != -1) {					// Пока файл не пуст
				compcount++;
				// Сравнниваем текущее число с предыдущим
				if (number < last) {
					// Если текущее больше предыдущего, то цепочка отсортированна
					// Если нет, то цепочка не отсортирована, тогда
					// Выбираем из направления в какой файл писать
					compcount++;
					if (!file) {
						writeB << " -2";			// Запись символа конца цепочки
						writeC << " " << number;	// Записываем в другой файл число новой цепочки
					}
					else {
						writeC << " -2";			// Запись символа конца цепочки
						writeB << " " << number;	// Записываем в другой файл число новой цепочки
					}
					outcount += 2;
					file = !file;					// Смена направления, т.к. цепочка обрабатывается
				}
				else {
					// В зависимости от направления пишем в файл прочитанное число
					if (!file) 
						writeB << " " << number;
					else
						writeC << " " << number;
					compcount++;
					outcount++;
				}
				compcount++;
				last = number;						// Устанавливаем предыдущее число
				if (readA.eof()) number = -1;		// Если файл пуст, устанавливаем значение -1
				else {
					readA >> number;				// Иначе считываем число из файла
					incount++;						// Фиксирование считывания
				}
				compcount++;
			}
			// Выходим из цикла т.к. числа в файле закончили
			// Ставим символ окончания цепочки в конец файла, в который мы последний раз писали
			if (!file)
				writeB << " -2";
			else 
				writeC << " -2";
			outcount++;
			compcount++;
			readA.close();							// Закрываем поток чтения
			writeB.close();							// Закрываем поток записи
			writeC.close();							// Закрываем поток записи
		}
		// Метод объединения для естественного слияния
		bool naturalSortCombine(int& incount, int& compcount, int& outcount) {
			ofstream writeA("a2.txt");			// открыли файл для записи
			ifstream readB("b2.txt");			// открыли файл для чтения
			ifstream readC("c2.txt");			// открыли файл для чтения
			//Читаем первые числа из 2 файлов
			int fileB, fileC;
			if (readB.eof()) fileB = -1;			// Если файл пуст, устанавливаем значение -1
			else {
				readB >> fileB;						// Иначе считываем число из файла
				incount++;							// Фиксирование считывания
			}
			if (readC.eof()) fileC = -1;			// Если файл пуст, устанавливаем значение -1
			else {
				readC >> fileC;						// Иначе считываем число из файла
				incount++;							// Фиксирование считывания
			}
			compcount += 2;							// Увеличение счётчика сравнений
			int counter = 0;						// Количество цепочек в файле после обновления
			while (fileB != -1 || fileC != -1) {	// Пока оба файла не кончились
				compcount++;
				// Пока оба файла не пусты и не встретилось окончание отсортированной цепочки, то продолжаем  (-2 - знак окончания цепочки)
				while (fileB != -1 && fileC != -1 && fileB != -2 && fileC != -2) {
					compcount++;
					// Сравниваем 2 числа из разных файлов
					if (fileB < fileC) {
						writeA << " " << fileB;		// Если первое меньше, то записываем его в файл a
						outcount++;
						// Читаем новое число из первого файла
						if (readB.eof()) fileB = -1;// Если файл пуст, устанавливаем значение -1
						else {
							readB >> fileB;			// Иначе считываем число из файла
							incount++;				// Увеличение счетчика чтения
						}
						compcount++;				// Увеличение счётчика сравнений
					}
					else {
						writeA << " " << fileC;		// Если второе меньше, то записываем его в файл a
						outcount++;					// Увеличение счетчика записи
						// Читаем новое число из второго файла
						if (readC.eof()) fileC = -1;// Если файл пуст, устанавливаем значение -1
						else {
							readC >> fileC;			// Иначе считываем число из файла
							incount++;				// Увеличение счетчика чтения
						}
						compcount++;				// Увеличение счётчика сравнени
					}
					compcount++;
				}
				// Выход из цикла - конец цепочки или файла. В a.txt сформирована цепочка
				counter++;
				//Дописываем числа из первого файла, если они остались в цепочке после сравнения со вторым файлом
				while (fileB != -1 && fileB != -2) {
					compcount++;
					writeA << " " << fileB;
					outcount++;						// Увеличение счетчика записи
					// Читаем новое число из первого файла
					if (readB.eof()) fileB = -1;	// Если файл пуст, устанавливаем значение -1
					else {
						readB >> fileB;				// Иначе считываем число из файла
						incount++;					// Увеличение счетчика чтения
					}
					compcount++;					// Увеличение счётчика сравнений
				}
				// Дописываем числа из второго файла, если они остались в цепочке после сравнения с числами из цепочки первого файла
				while (fileC != -1 && fileC != -2) {
					compcount++;					// Увеличение счётчика сравнений (while)
					writeA << " " << fileC;
					outcount++;						// Увеличение счетчика записи

					// Читаем новое число из второго файла
					if (readC.eof()) fileC = -1;	// Если файл пуст, устанавливаем значение -1
					else {
						readC >> fileC;				// Иначе считываем число из файла
						incount++;					// Увеличение счетчика чтения
					}
					compcount++;					// Увеличение счётчика сравнений
				}
				// Читаем новые числа т.к. сейчас в переменных хранятся либо -1 либо -2, что означают конец файла и конец цепочки
				// Читаем новое число из первого файла
				if (readB.eof()) fileB = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readB >> fileB;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
				// Читаем новое число из второго файла
				if (readC.eof()) fileC = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readC >> fileC;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
			}
			writeA.close();							// Закрываем поток записи
			readB.close();							// Закрываем поток чтения
			readB.close();							// Закрываем поток чтения
			return counter > 1;
		}

		void  naturalSortCombine1(string first, string second, int& incount, int& compcount, int& outcount) {
			ofstream writeA("a.txt");						// Открыли файл для записи
			ifstream readFirst(first);								// Открыли файл для чтения
			ifstream readSecond(second);							// Открыли файл для чтения
			//Читаем первые числа из 2 файлов
			int fileFirst, fileSecond;
			if (readFirst.eof()) fileFirst = -1;						// Если файл пуст, устанавливаем значение -1
			else {
				readFirst >> fileFirst;								// Иначе считываем число из файла
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
			else {
				readSecond >> fileSecond;							// Иначе считываем число из файла
				incount++;
			}
			compcount += 2;
			while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
				compcount++;
				//Пока не кончился хоть 1 файл или цепочка
				while (fileFirst != -1 && fileSecond != -1 && fileFirst != -2 && fileSecond != -2) {
					compcount++;
					if (fileFirst < fileSecond) {					// Сравниваем 2 числа из 2 файлов
						writeA << " " << fileFirst;					// Если первое меньше, то записываем его в файл a
						outcount++;									// Увеличение счетчика записи
						// Читаем новое число из первого файла
						if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
						else {
							readFirst >> fileFirst;					// Иначе считываем число из файла
							incount++;
						}
						compcount++;
					}
					else {
						writeA << " " << fileSecond;					// Если второе меньше, то записываем его в файл a
						outcount++;									// Увеличение счетчика записи
						// Читаем новое число из второго файла
						if (readSecond.eof()) fileSecond = -1;		// Если файл пуст, устанавливаем значение -1
						else {
							readSecond >> fileSecond;				// Иначе считываем число из файла
							incount++;
						}
						compcount++;
					}
					compcount++;
				}
				// Дописываем числа из первого файла, если они остались в цепочке после сравнения со вторым файлом
				while (fileFirst != -1 && fileFirst != -2) {
					compcount++;
					writeA << " " << fileFirst;
					outcount++;									// Увеличение счетчика записи
					// Читаем новое число из первого файла
					if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
					else {
						readFirst >> fileFirst;					// Иначе считываем число из файла
						incount++;
					}
					compcount++;
				}
				// Дописываем числа из второго файла, если они остались в цепочке после сравнения с числами из цепочки первого файла
				while (fileSecond != -1 && fileSecond != -2) {
					compcount++;
					writeA << " " << fileSecond;
					outcount++;									// Увеличение счетчика записи
					// Читаем новое число из второго файла
					if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
					else {
						readSecond >> fileSecond;					// Иначе считываем число из файла
						incount++;
					}
					compcount++;
				}
				//Читаем новые числа т.к. сейчас токены указывают на конец файла и конец цепочки
				if (readFirst.eof()) fileFirst = -1;						// Если файл пуст, устанавливаем значение -1
				else {
					readFirst >> fileFirst;								// Иначе считываем число из файла
					incount++;
				}
				if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
				else {
					readSecond >> fileSecond;							// Иначе считываем число из файла
					incount++;
				}
				compcount += 2;
			}
			writeA.close();											// Закрываем поток записи
			readFirst.close();										// Закрываем поток чтения
			readFirst.close();										// Закрываем поток чтения
		}
		// Перемещаем данные в файлах в методе естественного слияния. Принимает имена файлов для чтения и записи
		bool betweenNatural(string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
			ifstream readFirst(firstRead);							// Открыли файл для чтения
			ifstream readSecond(secondRead);						// Открыли файл для чтения
			ofstream writeFirst(firstWrite);						// Открыли файл для записи
			ofstream writeSecond(secondWrite);						// Открыли файл для записи
			bool file = true;										// Переменная для определения файлов для записи
			int fileFirst, fileSecond;
			if (readFirst.eof()) fileFirst = -1;					// Если файл пуст, устанавливаем значение -1
			else {
				readFirst >> fileFirst;								// Иначе считываем число из файла
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
			else {
				readSecond >> fileSecond;							// Иначе считываем число из файла
				incount++;
			}
			compcount += 2;
			int counter = 0;										// Количество цепочек в файле после обновления
			while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
				compcount++;
				//Пока в обоих файлах есть что читать и не достигли конца цепочек, то продолжаем крутиться в цикле
				while (fileFirst != -1 && fileSecond != -1 && fileFirst != -2 && fileSecond != -2) {
					compcount++;
					if (fileFirst < fileSecond) {					// Сравниваем 2 числа из разных файлов
						// В зависимости от направления записываем в необходимый файл число из первого файла если оно меньше
						if (file) writeFirst << " " << fileFirst;
						else writeSecond << " " << fileFirst;
						outcount++;									// Увеличение счетчика записи
						compcount++;
						// Читаем новое число из первого файла
						if (readFirst.eof()) fileFirst = -1;				// Если файл пуст, устанавливаем значение -1
						else {
							readFirst >> fileFirst;						// Иначе считываем число из файла
							incount++;									// Увеличение счетчика чтений
						}
						compcount++;
					}
					else {
						// Если второе меньше, то записываем его в файл в зависимости от направления
						if (file) writeFirst << " " << fileSecond;
						else writeSecond << " " << fileSecond;
						outcount++;									// Увеличение счетчика записи
						compcount++;
						// Читаем новое число из первого файла
						if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
						else {
							readSecond >> fileSecond;					// Иначе считываем число из файла
							incount++;									// Увеличение счетчика чтений
						}
						compcount++;
					}
					compcount++;
				}
				// Дописываем данные из первого файла, если они остались в цепочке после сравнения со вторым файлом
				while (fileFirst != -1 && fileFirst != -2) {
					compcount++;
					if (file) writeFirst << " " << fileFirst;
					else writeSecond << " " << fileFirst;
					outcount++;									// Увеличение счетчика записи
					compcount++;
					// Читаем новое число из первого файла
					if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
					else {
						readFirst >> fileFirst;					// Иначе считываем число из файла
						incount++;									// Увеличение счетчика чтений
					}
					compcount++;
				}
				//Дописываем числа из второго файла, если они остались в цепочке после сравнения с первым файлом
				while (fileSecond != -1 && fileSecond != -2) {
					compcount++;
					if (file) writeFirst << " " << fileSecond;
					else writeSecond << " " << fileSecond;
					outcount++;									// Увеличение счетчика записи
					compcount++;
					// Читаем новое число из второго файла
					if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
					else {
						readSecond >> fileSecond;					// Иначе считываем число из файла
						incount++;									// Увеличение счетчика чтений
					}
					compcount++;
				}
				if (file)
					writeFirst << " -2";
				else
					writeSecond << " -2";
				outcount++;
				compcount++;
				// Читаем новые числа т.к. сейчас в переменных хранятся либо -1 либо -2, что означают конец файла и конец цепочки
				// Читаем новое число из первого файла
				if (readFirst.eof()) fileFirst = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readFirst >> fileFirst;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
				// Читаем новое число из второго файла
				if (readSecond.eof()) fileSecond = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readSecond >> fileSecond;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
				file = !file;						// Меняем направление
				counter++;							// Увеличение счетчика цепочек
			}
			readFirst.close();										// Закрываем поток чтения
			readSecond.close();										// Закрываем поток чтения
			writeFirst.close();										// Закрываем поток записи
			writeSecond.close();									// Закрываем поток записи
			//Если цепочек больше чем 2, то продолжаем сортировку
			return counter > 2;
		}

		// Итеративная демонстрация алгоритма двухфазной сортировки
		Void button2_Click(Object^ sender, System::EventArgs^ e) {
			int size_demo = 15;
			ofstream writeA("a2.txt");		// Открыли файл для записи
			for (int i = 0; i < size_demo; ++i)
				writeA << " " << rand() % 100;
			writeA.close();
			for (int i = 0; i < 13; ++i)
				for (int j = 0; j < 15; ++j)
					dataGridView2->Rows[i]->Cells[j]->Value = "";
			
			int incount = 0;						// Счётчик считываний из файла
			int compcount = 0;						// Счётчик сравнений
			int outcount = 0;						// Счетчик записей в файл
			int row = 0;							// Номер строки для вывода
			do {
				printStr("a2.txt", row, dataGridView2);
				row++;
				naturalSortSplit("a2.txt", "b2.txt", "c2.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
				printStr("b2.txt", row, dataGridView2);
				row++;
				printStr("c2.txt", row, dataGridView2);
				row++;
			} while (naturalSortCombine(incount, compcount, outcount));		// Проверка длины цепочки и соединение обратно в a.txt
			printStr("a2.txt", row, dataGridView2);
		}
		// Вывод части файла
		Void button4_Click(Object^ sender, EventArgs^ e) {
			long min = Convert::ToInt64(numericUpDown2->Value);
			long max = Convert::ToInt64(numericUpDown3->Value);
			if (max < min) {
				textBox1->Text = "Я ругаюсь. Ты накосячил";
				return;
			}
			string path = msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString());
			ifstream readF(path);		// Открыли файл для чтения
			ifstream readT("temp.txt");		// Открыли файл для чтения
			ofstream writeT("temp.txt");
			long temp = getLengthFile(path);
			for (int i = 0; i < temp; ++i) {
				int number;							// Новое число
				readF >> number;					// Считывание нового числа
				writeT << " " << number;
			}
			readF.close();
			writeT.close();
			ofstream writeF(path);
			textBox1->Text = " ";
			for (int i = 0; i < temp; ++i) {
				int number;							// Новое число
				readT >> number;					// Считывание нового числа
				writeF << " " << number;
				if (i >= min && i <= max)
					textBox1->Text += number + " ";
			}
			readT.close();
			writeF.close();
		}
		// Получение длины файла
		int getLengthFile(string path) {
			int length = 0;
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
		// Dывод строки в таблицу
		void printStr(string path, int row, DataGridView^ data) {
			ifstream readF(path);		// Открыли файл для чтения
			ifstream readT("temp.txt");		// Открыли файл для чтения
			ofstream writeT("temp.txt");
			long length = getLengthFile(path);
			for (int j = 0; j < length; ++j) {
				int number;							// Новое число
				readF >> number;					// Считывание нового числа
				writeT << " " << number;
			}
			readF.close();
			writeT.close();
			ofstream writeF(path);
			for (int j = 0; j < length; ++j) {
				int number;							// Новое число
				readT >> number;					// Считывание нового числа
				writeF << " " << number;
				data->Rows[row]->Cells[j]->Value = number;
			}
			readT.close();
			writeF.close();
		}
		// Итеративная демонстрация алгоритма однофазной сортировки
		Void button5_Click(Object^ sender, EventArgs^ e) {
			int size_demo = 15;
			ofstream writeA("a.txt");		// Открыли файл для записи
			for (int i = 0; i < size_demo; ++i)
				writeA << " " << rand() % 100;
			writeA.close();							// Закрыли файл для записи
			for (int i = 0; i < 10; ++i)
				for (int j = 0; j < 15; ++j)
					dataGridView3->Rows[i]->Cells[j]->Value = "";
			int incount = 0;									// Счётчик считываний из файла
			int compcount = 0;									// Счётчик сравнений
			int outcount = 0;									// Счетчик записей в файл
			int row = 0;										// Номер строки для вывода

			printStr("a.txt", row, dataGridView3); row++;
			bool file = true;
			bool flag = true;					// Флаг для определения когда нужно выходить из цикла
			naturalSortSplit("a.txt", "b.txt", "c.txt", incount, compcount, outcount);				// Разделяем файл a.txt на два файла b.txt и c.txt
			printStr("b.txt", row, dataGridView3); row++;
			printStr("c.txt", row, dataGridView3); row++;
			while (flag) {
				// В зависимости от направления записи передаём файлы для чтения и записи
				if (file) {
					flag = betweenNatural("b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	//Читать из b c, писать в d e
					printStr("d.txt", row, dataGridView3); row++;
					printStr("e.txt", row, dataGridView3); row++;
				}
				else {
					flag = betweenNatural("d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	//Читать из d e, писать в b c
					printStr("b.txt", row, dataGridView3); row++;
					printStr("c.txt", row, dataGridView3); row++;
				}
				file = !file;
			}
			// Объединяем обратно в файл a, используя последние редактируемые файлы
			if (file) 
				naturalSortCombine1("b.txt", "c.txt", incount, compcount, outcount);// Читать из b c
			else 
				naturalSortCombine1("d.txt", "e.txt", incount, compcount, outcount);		// Читать из d e
			printStr("a.txt", 9, dataGridView3);
		}
	};
}
