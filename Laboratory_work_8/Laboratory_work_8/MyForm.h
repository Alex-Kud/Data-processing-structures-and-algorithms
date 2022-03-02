#pragma once
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
namespace Laboratorywork8 {

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
	System::Windows::Forms::Label^ label2;
	System::Windows::Forms::Label^ label1;
	System::Windows::Forms::Button^ button1;
	System::Windows::Forms::DataGridView^ dataGridView3;
	System::Windows::Forms::DataGridView^ dataGridView1;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column19;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column20;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column21;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column22;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column23;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column24;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column25;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column26;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column27;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column28;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column29;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column30;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column31;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column32;
	System::Windows::Forms::Label^ label5;
	System::Windows::Forms::NumericUpDown^ numericUpDown1;
	System::Windows::Forms::Button^ button4;
	System::Windows::Forms::NumericUpDown^ numericUpDown3;
	System::Windows::Forms::NumericUpDown^ numericUpDown2;
	System::Windows::Forms::TextBox^ textBox1;
	System::Windows::Forms::ComboBox^ comboBox1;
	System::Windows::Forms::Button^ button5;
	System::Windows::Forms::Label^ label6;
	System::Windows::Forms::Label^ label9;
	System::Windows::Forms::Label^ label8;
	System::Windows::Forms::Label^ label7;
	System::Windows::Forms::TextBox^ textBox2;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
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
			   this->tabPage4->Text = L"Õàðàêòåðèñòèêè";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->textBox2->Location = System::Drawing::Point(24, 650);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox2->Size = System::Drawing::Size(458, 207);
			   this->textBox2->TabIndex = 16;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(528, 752);
			   this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(66, 37);
			   this->label9->TabIndex = 15;
			   this->label9->Text = L"Ïî:";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(528, 705);
			   this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(65, 37);
			   this->label8->TabIndex = 14;
			   this->label8->Text = L"Èç:";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(525, 651);
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
			   this->comboBox1->Location = System::Drawing::Point(605, 697);
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
			   this->button4->Text = L"Âûâåñòè";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown3->Location = System::Drawing::Point(601, 750);
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(400, 43);
			   this->numericUpDown3->TabIndex = 10;
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown2->Location = System::Drawing::Point(603, 648);
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(400, 43);
			   this->numericUpDown2->TabIndex = 9;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->textBox1->Location = System::Drawing::Point(1042, 650);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox1->Size = System::Drawing::Size(459, 207);
			   this->textBox1->TabIndex = 8;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(18, 488);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(392, 29);
			   this->label5->TabIndex = 7;
			   this->label5->Text = L"Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ:";
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->BackColor = System::Drawing::Color::PaleGoldenrod;
			   this->numericUpDown1->Location = System::Drawing::Point(411, 478);
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(243, 43);
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
			   this->dataGridView1->Location = System::Drawing::Point(24, 129);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 165;
			   this->dataGridView1->Size = System::Drawing::Size(1457, 332);
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
			   this->label2->Location = System::Drawing::Point(18, 83);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(262, 29);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Çàìåð õàðàêòåðèñòèê";
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
			   this->label1->Text = L"Ëàáîðàòîðíàÿ ðàáîòà ¹8";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(24, 551);
			   this->button1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(630, 58);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Çàïóñòèòü";
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
			   this->tabPage3->Text = L"Äåìîíñòðàöèÿ";
			   // 
			   // button5
			   // 
			   this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button5->Location = System::Drawing::Point(513, 566);
			   this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(1028, 49);
			   this->button5->TabIndex = 4;
			   this->button5->Text = L"Ñîðòèðîâàòü";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(4, 572);
			   this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(472, 37);
			   this->label6->TabIndex = 3;
			   this->label6->Text = L"Çàïóñê îäíîôàçíîé ñîðòèðîâêè";
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
			   this->dataGridView3->Size = System::Drawing::Size(1580, 557);
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
			   this->Text = L"Âíóòðåííÿÿ ñîðòèðîâêà ñ âíåøíèì ñëèÿíèåì";
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
			   ofstream writeA("a.txt", std::ios::in);		// Îòêðûëè ôàéë äëÿ çàïèñè
			   ofstream writeB("b.txt");							// Îòêðûëè ôàéë äëÿ çàïèñè
			   ofstream writeC("c.txt");							// Îòêðûëè ôàéë äëÿ çàïèñè
			   ofstream writeD("d.txt");							// Îòêðûëè ôàéë äëÿ çàïèñè
			   ofstream writeE("e.txt");							// Îòêðûëè ôàéë äëÿ çàïèñè
			   ofstream writeT("temp.txt");						// Îòêðûëè ôàéë äëÿ çàïèñè
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
			   dataGridView1->Rows[0]->HeaderCell->Value = "Âðåìÿ";
			   dataGridView1->Rows[1]->HeaderCell->Value = "×òåíèÿ";
			   dataGridView1->Rows[2]->HeaderCell->Value = "Ñðàâíåíèÿ";
			   dataGridView1->Rows[3]->HeaderCell->Value = "Çàïèñè";

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
		   size = Convert::ToInt64(numericUpDown1->Value);
		   
			    
				ofstream writeA1("a1.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA2("a2.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA3("a3.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA4("a4.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA5("a5.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA6("a6.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA7("a7.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA8("a8.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA9("a9.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				ofstream writeA10("a10.txt");					// Îòêðûëè ôàéë äëÿ çàïèñè
				for (int j = 0; j < size; ++j) {
					const int number = rand() % 100;
					writeA1 << " " << number;
					writeA2 << " " << number;
					writeA3 << " " << number;
					writeA4 << " " << number;
					writeA5 << " " << number;
					writeA6 << " " << number;
					writeA7 << " " << number;
					writeA8 << " " << number;
					writeA9 << " " << number;
					writeA10 << " " << number;
					textBox2->Text += number + " ";
				}
				writeA1.close();
				writeA2.close();
				writeA3.close();
				writeA4.close();
				writeA5.close();
				writeA6.close();
				writeA7.close();
				writeA8.close();
				writeA9.close();
				writeA10.close();
			// ---------------------------------------
			// ---------------------------------------
			// ---------------Cîðòèðîâêà--------------
			// ---------------------------------------
			// ---------------------------------------
			for (int j = 1; j < 11; ++j) {
				int incount = 0;									// Ñ÷¸ò÷èê ñ÷èòûâàíèé èç ôàéëà
				int compcount = 0;									// Ñ÷¸ò÷èê ñðàâíåíèé
				int outcount = 0;									// Ñ÷åò÷èê çàïèñåé â ôàéë
				string fileA = "a" + msclr::interop::marshal_as<std::string>(j.ToString()) + ".txt";
				auto start = std::chrono::high_resolution_clock::now();

				split(size * j / 100, fileA, incount, compcount, outcount);	// Ðàçäåëÿåì ôàéë a.txt íà äâà ôàéëà b.txt è c.txt
				bool file = true; // Îïðåäåëÿåì ôàéëû çàïèñè: true - ÷èòàòü èç b c, ïèñàòü â d e, false - ôàéë ÷èòàòü èç d e, ïèñàòü â b c
				// i - êîëè÷åñòâî ýëåìåíòîâ, êîòîðûå äîëæíû áûòü ïåðåâåäåíû â äðóãîé ôàéë âìåñòå
				for (long i = 1; i < size / 2; i *= 2) {
					//Â çàâèñèìîñòè îò íàïðàâëåíèÿ çàïèñè ïåðåäà¸ì ôàéëû äëÿ ÷òåíèÿ è çàïèñè
					if (file)
						betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ×èòàòü èç b c, ïèñàòü â d e
					else
						betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ×èòàòü èç d e, ïèñàòü â b c
					file = !file;					// Ìåíÿåì íàïðàâëåíèå
				}
				
				if (file)							// Òåïåðü îáúåäèíÿåì îáðàòíî â ôàéë a, èñïîëüçóÿ ïîñëåäíèå ðåäàêòèðóåìûå ôàéëû
					combine(size, fileA, "b.txt", "c.txt", incount, compcount, outcount);	// ×èòàòü èç b c
				else
					combine(size, fileA, "d.txt", "e.txt", incount, compcount, outcount);	// ×èòàòü èç d e
				auto finish = std::chrono::high_resolution_clock::now();
				auto time = std::chrono::duration_cast<std::chrono::duration < double>>(finish- start);
				// Âûâîä õàðàêòåðèñòèê ñîðòèðîâêè
				dataGridView1->Rows[0]->Cells[j-1]->Value = Convert::ToString(time.count() * 10000);
				dataGridView1->Rows[1]->Cells[j-1]->Value = incount;
				dataGridView1->Rows[2]->Cells[j-1]->Value = compcount;
				dataGridView1->Rows[3]->Cells[j-1]->Value = outcount;
			}
			numericUpDown2->Minimum = 0;
			numericUpDown2->Maximum = size - 1;
			numericUpDown3->Minimum = 0;
			numericUpDown3->Maximum = size - 1;
		}

		// Ðàçäåëåíèå íà 2 ôàéëà
		void split(const int bufLength, string fileRead, int& incount, int& compcount, int& outcount) {
			int* buf = new int[bufLength];			// Ïðîìåæóòî÷íûé ìàññèâ äëÿ âíóòðåííåé ñîðòèðîâêè
			ifstream readA(fileRead);		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ofstream writeB("b.txt");		// Îòêðûëè ôàéë äëÿ çàïèñè
			ofstream writeC("c.txt");		// Îòêðûëè ôàéë äëÿ çàïèñè
			bool file = true;						// Îïðåäåëÿåì ôàéë çàïèñè: true - ôàéë b, false - ôàéë c
			while (!readA.eof()) {					// Ïîêà ôàéë íå ïóñò, ñ÷èòûâàåì ÷èñëà
				compcount++;
				for (int i = 0; i < bufLength; ++i) {
					if (readA.eof()) buf[i] = -1;
					else {
						readA >> buf[i];				// Ñ÷èòûâàíèå íîâîãî ÷èñëà â ìàññèâ äëÿ ñîðòèðîâêè
						incount++;
					}
					compcount += 2;
				}
				shell(buf, bufLength, compcount);	// Ñîðòèðîâêà ìàññèâà
				if (file)							// Â çàâèñèìîñòè îò íàïðàâëåíèÿ ïèøåì â ôàéë ÷èñëî
					for (int i = 0; i < bufLength; ++i) {
						compcount += 2;
						if (buf[i] != -1) {
							writeB << " " << buf[i];	// Çàïèñûâàåì ÷èñëî â ôàéë b
							outcount++;
						}
					}
				else
					for (int i = 0; i < bufLength; ++i){
						compcount += 2;
						if (buf[i] != -1) {
							writeC << " " << buf[i];	// Çàïèñûâàåì ÷èñëî â ôàéë c
							outcount++;
						}
					}
				compcount++;
				file = !file;						// Ìåíÿåì íàïðàâëåíèå
			}
			readA.close();							// Çàêðûâàåì ïîòîê ÷òåíèÿ
			writeB.close();							// Çàêðûâàåì ïîòîê çàïèñè
			writeC.close();							// Çàêðûâàåì ïîòîê çàïèñè
			delete[] buf;							// Îñâîáîæäåíèå ïàìÿòè
		}

		// Ìåòîä äëÿ îáúåäèíåíèÿ 2 ôàéëîâ â ìåòîäå îäíîôàçíîãî ïðîñòîãî ñëèÿíèÿ
		void combine(long len, string write, string first, string second, int& incount, int& compcount, int& outcount) {
			ofstream writeA(write);									// Îòêðûëè ôàéë äëÿ çàïèñè
			ifstream readFirst(first);								// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
		ifstream readSecond(second);								// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			//×èòàåì ïåðâûå ÷èñëà èç 2 ôàéëîâ
			int fileFirst, fileSecond;
			if (readFirst.eof()) fileFirst = -1;						// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
			else {
				readFirst >> fileFirst;								// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
			else {
				readSecond >> fileSecond;							// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
				incount++;
			}
			compcount += 2;
			while (fileFirst != -1 || fileSecond != -1) {			// Ïîêà îáà ôàéëà íå êîí÷èëèñü
				compcount++;
				long curFirst = len;									// Îñòàëîñü îáðàáîòàòü ýëåìåíòîâ â ïåðâîé ïîñëåäîâàòåëüíîñòè
				long curSecond = len;								// Îñòàëîñü îáðàáîòàòü ýëåìåíòîâ âî âòîðîé ïîñëåäîâàòåëüíîñòè
				// Ïîêà íå çàêîí÷èòñÿ ìåñòî â ïîñëåäîâàòåëüíîñòè èëè ïîêà íå äîñòèãíóò êîíåö ôàéëà
				while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
					compcount++;										// while
					compcount++;										// if
					if (fileFirst < fileSecond) {					// Ñðàâíèâàåì 2 ÷èñëà èç 2 ôàéëîâ
						writeA << " " << fileFirst;					// Åñëè ïåðâîå ìåíüøå, òî çàïèñûâàåì åãî â ôàéë a
						outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
						curFirst--;									// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ ïåðâîãî ôàéëà
						// ×èòàåì íîâîå ÷èñëî èç ïåðâîãî ôàéëà
						if (readFirst.eof()) fileFirst = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
						else {
							readFirst >> fileFirst;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
							incount++;
						}
						compcount++;
					}
					else {
						writeA << " " << fileSecond;					// Åñëè âòîðîå ìåíüøå, òî çàïèñûâàåì åãî â ôàéë a
						outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
						curSecond--;									// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ âòîðîãî ôàéëà
						// ×èòàåì íîâîå ÷èñëî èç âòîðîãî ôàéëà
						if (readSecond.eof()) fileSecond = -1;		// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
						else {
							readSecond >> fileSecond;				// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
							incount++;
						}
						compcount++;
					}
				}
				// Äîïèñûâàåì äàííûå èç ïåðâîãî ôàéëà, åñëè âòîðîé çàêîí÷èëñÿ, èëè äîñòèãíóò ëèìèò ÷èñåë â ïîñëåäîâàòåëüíîñòè èç âòîðîãî
				while (curFirst != 0 && fileFirst != -1) {
					compcount++;
					writeA << " " << fileFirst;
					outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
					curFirst--;										// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ ïåðâîãî ôàéëà
					// ×èòàåì íîâîå ÷èñëî èç ïåðâîãî ôàéëà
					if (readFirst.eof()) fileFirst = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
					else {
						readFirst >> fileFirst;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
						incount++;
					}
					compcount++;
				}
				// Äîïèñûâàåì äàííûå èç âòîðîãî ôàéëà, åñëè ïåðâûé çàêîí÷èëñÿ, èëè äîñòèãíóò ëèìèò ÷èñåë â ïîñëåäîâàòåëüíîñòè èç ïåðâîãî
				while (curSecond != 0 && fileSecond != -1) {
					compcount++;
					writeA << " " << fileSecond;
					outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
					curSecond--;									// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ âòîðîãîôàéëà
					// ×èòàåì íîâîå ÷èñëî èç âòîðîãî ôàéëà
					if (readSecond.eof()) fileSecond = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
					else {
						readSecond >> fileSecond;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
						incount++;
					}
					compcount++;
				}
			}
			writeA.close();											// Çàêðûâàåì ïîòîê çàïèñè
			readFirst.close();										// Çàêðûâàåì ïîòîê ÷òåíèÿ
			readFirst.close();										// Çàêðûâàåì ïîòîê ÷òåíèÿ
		}

		// Ïåðåìåùàåì äàííûå â ôàéëàõ â ìåòîäå ïðîñòîãî ñëèÿíèÿ. Ïðèíèìàåò èìåíà ôàéëîâ äëÿ ÷òåíèÿ è çàïèñè, à òàêæå äëèíó öåïî÷êè
		void betweenFiles(long len, string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount) {
			ifstream readFirst(firstRead);							// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ifstream readSecond(secondRead);							// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ofstream writeFirst(firstWrite);							// Îòêðûëè ôàéë äëÿ çàïèñè
			ofstream writeSecond(secondWrite);						// Îòêðûëè ôàéë äëÿ çàïèñè
			bool file = true;										// Ïåðåìåííàÿ äëÿ îïðåäåëåíèÿ ôàéëîâ äëÿ çàïèñè
			int fileFirst, fileSecond;
			if (readFirst.eof()) fileFirst = -1;						// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
			else {
				readFirst >> fileFirst;								// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
				incount++;
			}
			if (readSecond.eof()) fileSecond = -1;					// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
			else {
				readSecond >> fileSecond;							// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
				incount++;
			}
			compcount += 2;
			while (fileFirst != -1 || fileSecond != -1) {			// Ïîêà îáà ôàéëà íå êîí÷èëèñü
				compcount++;
				//Âûñòàâëÿåì äëèíó äëÿ öåïî÷åê
				long curFirst = len;
				long curSecond = len;
				// Ïîêà íå çàêîí÷èòñÿ ìåñòî â ïîñëåäîâàòåëüíîñòè èëè ïîêà íå äîñòèãíóò êîíåö ôàéëà
				while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
					compcount++;										// while
					compcount++;										// if
					if (fileFirst < fileSecond) {					// Ñðàâíèâàåì 2 ÷èñëà èç 2 ôàéëîâ
						// Åñëè ïåðâîå ìåíüøå, òî çàïèñûâàåì åãî â ôàéë â çàâèñèìîñòè îò íàïðàâëåíèÿ
						if (file) writeFirst << " " << fileFirst;
						else writeSecond << " " << fileFirst;
						outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
						compcount++;
						curFirst--;										// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ ïåðâîãî ôàéëà
						// ×èòàåì íîâîå ÷èñëî èç ïåðâîãî ôàéëà
						if (readFirst.eof()) fileFirst = -1;				// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
						else {
							readFirst >> fileFirst;						// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
							incount++;									// Óâåëè÷åíèå ñ÷åò÷èêà ÷òåíèé
						}
						compcount++;
					}
					else {
						// Åñëè âòîðîå ìåíüøå, òî çàïèñûâàåì åãî â ôàéë â çàâèñèìîñòè îò íàïðàâëåíèÿ
						if (file) writeFirst << " " << fileSecond;
						else writeSecond << " " << fileSecond;
						outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
						compcount++;
						curSecond--;										// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ âòîðîãî ôàéëà
						// ×èòàåì íîâîå ÷èñëî èç ïåðâîãî ôàéëà
						if (readSecond.eof()) fileSecond = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
						else {
							readSecond >> fileSecond;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
							incount++;									// Óâåëè÷åíèå ñ÷åò÷èêà ÷òåíèé
						}
						compcount++;
					}
				}
				// Äîïèñûâàåì äàííûå èç ïåðâîãî ôàéëà, åñëè âòîðîé çàêîí÷èëñÿ, èëè äîñòèãíóò ëèìèò ÷èñåë â ïîñëåäîâàòåëüíîñòè èç âòîðîãî
				while (curFirst != 0 && fileFirst != -1) {
					compcount++;
					if (file) writeFirst << " " << fileFirst;
					else writeSecond << " " << fileFirst;
					outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
					compcount++;
					curFirst--;										// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ ïåðâîãî ôàéëà
					// ×èòàåì íîâîå ÷èñëî èç ïåðâîãî ôàéëà
					if (readFirst.eof()) fileFirst = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
					else {
						readFirst >> fileFirst;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
						incount++;									// Óâåëè÷åíèå ñ÷åò÷èêà ÷òåíèé
					}
					compcount++;
				}
				// Äîïèñûâàåì äàííûå èç âòîðîãî ôàéëà, åñëè ïåðâûé çàêîí÷èëñÿ, èëè äîñòèãíóò ëèìèò ÷èñåë â ïîñëåäîâàòåëüíîñòè èç ïåðâîãî
				while (curSecond != 0 && fileSecond != -1) {
					compcount++;
					if (file) writeFirst << " " << fileSecond;
					else writeSecond << " " << fileSecond;
					outcount++;									// Óâåëè÷åíèå ñ÷åò÷èêà çàïèñè
					compcount++;
					curSecond--;										// Óìåíüøàåì îñòàòîê äëèíû ïîñëåäîâàòåëüíîñòè äëÿ âòîðîãîôàéëà
					// ×èòàåì íîâîå ÷èñëî èç âòîðîãî ôàéëà
					if (readSecond.eof()) fileSecond = -1;			// Åñëè ôàéë ïóñò, óñòàíàâëèâàåì çíà÷åíèå -1
					else {
						readSecond >> fileSecond;					// Èíà÷å ñ÷èòûâàåì ÷èñëî èç ôàéëà
						incount++;									// Óâåëè÷åíèå ñ÷åò÷èêà ÷òåíèé
					}
					compcount++;
				}
				file = !file;										// Ìåíÿåì íàïðàâëåíèå
			}
			readFirst.close();										// Çàêðûâàåì ïîòîê ÷òåíèÿ
			readSecond.close();										// Çàêðûâàåì ïîòîê ÷òåíèÿ
			writeFirst.close();										// Çàêðûâàåì ïîòîê çàïèñè
			writeSecond.close();										// Çàêðûâàåì ïîòîê çàïèñè
		}

		// Âûâîä ÷àñòè ôàéëà
		Void button4_Click(Object^ sender, EventArgs^ e) {
			long min = Convert::ToInt64(numericUpDown2->Value);
			long max = Convert::ToInt64(numericUpDown3->Value);
			if (max < min) {
				textBox1->Text = "ß ðóãàþñü. Òû íàêîñÿ÷èë";
				return;
			}
			string path = msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString());
			ifstream readF(path);		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ifstream readT("temp.txt");		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ofstream writeT("temp.txt");
			long temp = getLengthFile(path);
			for (int i = 0; i < temp; ++i) {
				int number;							// Íîâîå ÷èñëî
				readF >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeT << " " << number;
			}
			readF.close();
			writeT.close();
			ofstream writeF(path);
			textBox1->Text = " ";
			for (int i = 0; i < temp; ++i) {
				int number;							// Íîâîå ÷èñëî
				readT >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeF << " " << number;
				if (i >= min && i <= max)
					textBox1->Text += number + " ";
			}
			readT.close();
			writeF.close();
		}

		int getLengthFile(string path) {
			int length = 0;
			ifstream readF(path);		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ifstream readT("temp.txt");		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ofstream writeT("temp.txt");
			while (!readF.eof()) {
				int number;							// Íîâîå ÷èñëî
				readF >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeT << " " << number;
				length++;
			}
			readF.close();
			writeT.close();
			ofstream writeF(path);
			while (!readT.eof()) {
				int number;							// Íîâîå ÷èñëî
				readT >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeF << " " << number;
			}
			return length;
		}

		void printStr(string path, int row, DataGridView^ data) {
			ifstream readF(path);		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ifstream readT("temp.txt");		// Îòêðûëè ôàéë äëÿ ÷òåíèÿ
			ofstream writeT("temp.txt");
			long length = getLengthFile(path);
			for (int j = 0; j < length; ++j) {
				int number;							// Íîâîå ÷èñëî
				readF >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeT << " " << number;
			}
			readF.close();
			writeT.close();
			ofstream writeF(path);
			for (int j = 0; j < length; ++j) {
				int number;							// Íîâîå ÷èñëî
				readT >> number;					// Ñ÷èòûâàíèå íîâîãî ÷èñëà
				writeF << " " << number;
				data->Rows[row]->Cells[j]->Value = number;
			}
			readT.close();
			writeF.close();
		}
		// Èòåðàòèâíàÿ äåìîíñòðàöèÿ àëãîðèòìà îäíîôàçíîé ñîðòèðîâêè
		Void button5_Click(Object^ sender, EventArgs^ e) {
			int size_demo = 13;
			ofstream writeA("a.txt");		// Îòêðûëè ôàéë äëÿ çàïèñè
			for (int i = 0; i < size_demo; ++i)
				writeA << " " << rand() % 100;
			writeA.close();							// Çàêðûëè ôàéë äëÿ çàïèñè

			int incount = 0;									// Ñ÷¸ò÷èê ñ÷èòûâàíèé èç ôàéëà
			int compcount = 0;									// Ñ÷¸ò÷èê ñðàâíåíèé
			int outcount = 0;									// Ñ÷åò÷èê çàïèñåé â ôàéë
			int row = 0;										// Íîìåð ñòðîêè äëÿ âûâîäà

			printStr("a.txt", row, dataGridView3); row++;
			split(3, "a.txt", incount, compcount, outcount);		// Ðàçäåëÿåì ôàéë a.txt íà äâà ôàéëà b.txt è c.txt
			printStr("b.txt", row, dataGridView3); row++;
			printStr("c.txt", row, dataGridView3); row++;
			bool file = true;								// Îïðåäåëÿåì ôàéëû çàïèñè: true - ÷èòàòü èç b c, ïèñàòü â d e, false - ôàéë ÷èòàòü èç d e, ïèñàòü â b c
			// i - êîëè÷åñòâî ýëåìåíòîâ, êîòîðûå äîëæíû áûòü ïåðåâåäåíû â äðóãîé ôàéë âìåñòå
			for (long i = 1; i < size_demo / 2; i *= 2) {
				//Â çàâèñèìîñòè îò íàïðàâëåíèÿ çàïèñè ïåðåäà¸ì ôàéëû äëÿ ÷òåíèÿ è çàïèñè
				if (file) {
					betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ×èòàòü èç b c, ïèñàòü â d e
					printStr("d.txt", row, dataGridView3); row++;
					printStr("e.txt", row, dataGridView3); row++;
				}
				else {
					betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ×èòàòü èç d e, ïèñàòü â b c
					printStr("b.txt", row, dataGridView3); row++;
					printStr("c.txt", row, dataGridView3); row++;
				}
				file = !file;								// Ìåíÿåì íàïðàâëåíèå
			}
			if (file)										// Òåïåðü îáúåäèíÿåì îáðàòíî â ôàéë a, èñïîëüçóÿ ïîñëåäíèå ðåäàêòèðóåìûå ôàéëû
				combine(size_demo, "a.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ×èòàòü èç b c
			else
				combine(size_demo, "a.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ×èòàòü èç d e
			printStr("a.txt", row, dataGridView3);
			

		}

		// Cîðòèðîâêà Øåëëà ñ çàìåðîì õàðàêòåðèñòèê
		void shell(int* num, int size, int& comparisons) {
			//int increment = log2(size) - 1;			// íà÷àëüíîå ïðèðàùåíèå ñîðòèðîâêè
			int increment = size / 2;
			while (increment > 0) {						// ïîêà ñóùåñòâóåò ïðèðàùåíèå
				for (int i = 0; i < size; i++) {		// äëÿ âñåõ ýëåìåíòîâ ìàññèâà
					int j = i;							// ñîõðàíÿåì èíäåêñ è ýëåìåíò
					int temp = num[i];
					// ïðîñìàòðèâàåì îñòàëüíûå ýëåìåíòû ìàññèâà, îòñòîÿùèå îò j-îãî
					// íà âåëè÷èíó ïðèðàùåíèÿ
					while ((j >= increment) && (num[j - increment] > temp)) {
						// ïîêà îòñòîÿùèé ýëåìåíò áîëüøå òåêóùåãî
						num[j] = num[j - increment];	// ïåðåìåùàåì åãî íà òåêóùóþ ïîçèöèþ
						j = j - increment;				// ïåðåõîäèì ê ñëåäóþùåìó îòñòîÿùåìó ýëåìåíòó
						comparisons++;
					}
					num[j] = temp;						// íà âûÿâëåííîå ìåñòî ïîìåùàåì ñîõðàí¸ííûé ýëåìåíò
				}
				increment = increment / 2;				// äåëèì ïðèðàùåíèå íà 2
			}
		}
};
}
