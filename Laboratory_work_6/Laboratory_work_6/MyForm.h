#pragma once
#include <fstream>
#include <chrono>
using namespace std;
namespace Laboratorywork6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public Form {
	public:
		
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
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabControl1->Location = System::Drawing::Point(15, 9);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(877, 558);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->numericUpDown1);
			this->tabPage4->Controls->Add(this->dataGridView1);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Controls->Add(this->label1);
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(869, 532);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Начальная страница";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(300, 313);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(257, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Введите количество элементов";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(387, 344);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(80, 20);
			this->numericUpDown1->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dataGridView1->Location = System::Drawing::Point(232, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 165;
			this->dataGridView1->Size = System::Drawing::Size(413, 177);
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
			this->label2->Location = System::Drawing::Point(342, 60);
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
			this->label1->Location = System::Drawing::Point(305, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Лабораторная работа №6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(373, 376);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запустить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->tabPage2->Size = System::Drawing::Size(869, 532);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Двухфазная сортировка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(353, 426);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сортировать";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->Column3,
					this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, this->Column11, this->Column12,
					this->Column13, this->Column14, this->Column15, this->Column16, this->Column17
			});
			this->dataGridView2->Location = System::Drawing::Point(5, 3);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(849, 352);
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
			this->label3->Location = System::Drawing::Point(261, 383);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(336, 26);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Запуск двухфазной сортировки";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(869, 532);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Однофазная сортировка";
			this->tabPage3->UseVisualStyleBackColor = true;
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
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 24);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Сортировать";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->Column18,
					this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26,
					this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32
			});
			this->dataGridView3->Location = System::Drawing::Point(2, 0);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(852, 421);
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
			this->ClientSize = System::Drawing::Size(901, 586);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Сортировки простым слиянием";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
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
		numericUpDown1->Minimum = 1;
		numericUpDown1->Maximum = 1000000;
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->HeaderCell->Value = "Время сортировки";
		dataGridView1->Rows[1]->HeaderCell->Value = "Кол-во чтений из файла";
		dataGridView1->Rows[2]->HeaderCell->Value = "Кол-во сравнений";
		dataGridView1->Rows[3]->HeaderCell->Value = "Кол-во записей в файл";
	}
	Void button1_Click(Object^ sender, EventArgs^ e) {
		long size = Convert::ToInt64(numericUpDown1->Value);
		int* arr = new int[size];
		arr[0] = rand() % 10;
		for (int i = 1; i < size; ++i)
			arr[i] = rand() % 1000 + arr[i - 1] + 1;
		ofstream writeA("a.txt");		// Открыли файл для записи
		for (int i = 0; i < size; ++i)
			writeA << " " << arr[i];
		writeA.close();							// Закрыли файл для записи
		ifstream readA("a.txt");			// Открыли файл для чтения
		ifstream readB("b.txt");			// Открыли файл для чтения
		ifstream readC("c.txt");			// Открыли файл для чтения
		// ---------------------------------------
		// ---------------------------------------
		// ---------Двухфазная сортировка---------
		// ---------------------------------------
		// ---------------------------------------
		int incount = 0;						// Счётчик считываний из файла
		int compcount = 0;						// Счётчик сравнений
		int outcount = 0;						// Счетчик записей в файл
		auto startTwoPhase = std::chrono::high_resolution_clock::now();
		for (long i = 1; i < size; i *= 2) {
			simpleSortSplit(i, incount, compcount, outcount);	// Разделяем файл a.txt на два файла b.txt и c.txt
			simpleSortCombine(i, incount , compcount, outcount);	// Объединяем файлы b.txt и c.txt в файл a.txt
		}
		auto finishTwoPhaseg = std::chrono::high_resolution_clock::now();
		auto timeTwoPhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishTwoPhaseg - startTwoPhase);
		// Вывод характеристик сортировки
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(timeTwoPhase.count() * 10000);
		dataGridView1->Rows[1]->Cells[0]->Value = incount;
		dataGridView1->Rows[2]->Cells[0]->Value = compcount;
		dataGridView1->Rows[3]->Cells[0]->Value = outcount;
		// ---------------------------------------
		// ---------------------------------------
		// ---------Однофазная сортировка---------
		// ---------------------------------------
		// ---------------------------------------
		ofstream writeA2("a.txt");				// Открыли файл для записи
		for (int i = 0; i < size; ++i)
			writeA2 << " " << arr[i];
		writeA2.close();								// Закрыли файл для записи

		incount = 0;									// Счётчик считываний из файла
		compcount = 0;									// Счётчик сравнений
		outcount = 0;									// Счетчик записей в файл
		auto startOnePhase = std::chrono::high_resolution_clock::now();
		simpleSortSplit1(incount, compcount, outcount);								// Разделяем файл a.txt на два файла b.txt и c.txt
		bool file = true;								// Определяем файлы записи: true - читать из b c, писать в d e, false - файл читать из d e, писать в b c
		// i - количество элементов, которые должны быть переведены в другой файл вместе
		for (long i = 1; i < size / 2; i *= 2) {
			//В зависимости от направления записи передаём файлы для чтения и записи
			if (file)
				betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// Читать из b c, писать в d e
			else
				betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// Читать из d e, писать в b c
			file = !file;								// Меняем направление
		}
		if (file)										// Теперь объединяем обратно в файл a, используя последние редактируемые файлы
			simpleSortCombine1(size, "b.txt", "c.txt", incount, compcount, outcount);	// Читать из b c
		else
			simpleSortCombine1(size, "d.txt", "e.txt", incount, compcount, outcount);	// Читать из d e
		auto finishOnePhaseg = std::chrono::high_resolution_clock::now();
		auto timeOnePhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishOnePhaseg - startOnePhase);
		// Вывод характеристик сортировки
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString(timeOnePhase.count() * 10000);
		dataGridView1->Rows[1]->Cells[1]->Value = incount;
		dataGridView1->Rows[2]->Cells[1]->Value = compcount;
		dataGridView1->Rows[3]->Cells[1]->Value = outcount;
		delete[] arr;
	}

	// Разделение на 2 файла. len - количество элементов в последовательности
	void simpleSortSplit(long len, int& incount, int& compcount, int& outcount)  {
		ifstream readA("a.txt");			// Открыли файл для чтения
		ofstream writeB("b.txt");		// Открыли файл для записи
		ofstream writeC("c.txt");		// Открыли файл для записи
		long curLen = len;						// Осталось обработать элементов в последовательности
		bool file = true;						// Определяем файл записи: true - файл b, false - файл c
		while (!readA.eof()) {					// Пока файл не пуст, считываем числа
			compcount++;						// Увеличение счётчика сравнений (while)
			int number;							// Новое число
			readA >> number;					// Считывание нового числа
			incount++;							// Фиксирование считывания
			compcount++;						// Увеличение счётчика сравнений
			if (curLen > 0)					    // Если последовательность не завершена, не меняем файл записи
				curLen--;						// Уменьшаем остаток длины последовательности
			else {
				file = !file;					// Иначе меняем файл записи
				curLen = len - 1;				// Уменьшаем остаток длины новой последовательности, т.к. уже добавим в неё первое число
			}
			compcount++;						// Увеличение счётчика сравнений
			if (file) writeB << " " << number;	// Записываем число в  нужный файл
			else writeC << " " << number;
			outcount++;							// Фиксирование записи
		}
		readA.close();							// Закрываем поток чтения
		writeB.close();							// Закрываем поток записи
		writeB.close();							// Закрываем поток записи
	}

	// Метод для объединения данных из двух файлов в один
	void simpleSortCombine(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a.txt");		// открыли файл для записи
		ifstream readB("b.txt");			// открыли файл для чтения
		ifstream readC("c.txt");			// открыли файл для чтения
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
		while (fileB != -1 || fileC != -1) {	// Пока оба файла не кончились
			compcount ++;						// Увеличение счётчика сравнений (while)
			long curB = len;					// Осталось обработать элементов в последовательности B
			long curC = len;					// Осталось обработать элементов в последовательности C
			// Пока не закончится место в последовательности или пока не достигнут конец файла
			while (curB != 0 && curC != 0 && fileB != -1 && fileC != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				// Сравниваем 2 числа из 2 файлов
				if (fileB < fileC) {
					writeA << " " << fileB;		// Если первое меньше, то записываем его в файл a
					outcount++;					// Увеличение счетчика записи
					curB--;						// Уменьшаем остаток длины последовательности для файла B
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
					curC--;						// Уменьшаем остаток длины последовательности для файла B
					// Читаем новое число из второго файла
					if (readC.eof()) fileC = -1;// Если файл пуст, устанавливаем значение -1
					else {
						readC >> fileC;			// Иначе считываем число из файла
						incount++;				// Увеличение счетчика чтения
					}
					compcount++;				// Увеличение счётчика сравнений
				}
				compcount++;					// Увеличение счётчика сравнений
			}
			// Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			while (curB != 0 && fileB != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				writeA << " " << fileB;
				outcount++;						// Увеличение счетчика записи
				curB--;							// Уменьшаем остаток длины последовательности для файла B
				// Читаем новое число из первого файла
				if (readB.eof()) fileB = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readB >> fileB;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
			}
			// Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			while (curC != 0 && fileC != -1) {
				compcount++;					// Увеличение счётчика сравнений (while)
				writeA << " " << fileC;
				outcount++;						// Увеличение счетчика записи
				curC--;							// Уменьшаем остаток длины последовательности для файла B
				// Читаем новое число из второго файла
				if (readC.eof()) fileC = -1;	// Если файл пуст, устанавливаем значение -1
				else {
					readC >> fileC;				// Иначе считываем число из файла
					incount++;					// Увеличение счетчика чтения
				}
				compcount++;					// Увеличение счётчика сравнений
			}
		}
		writeA.close();							// Закрываем поток записи
		readB.close();							// Закрываем поток чтения
		readB.close();							// Закрываем поток чтения
	}

	
/*private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	long size = 8;
	simpleSortSplit1();								// Разделяем файл a.txt на два файла b.txt и c.txt
	bool file = true;								// Определяем файлы записи: true - читать из b c, писать в d e, false - файл читать из d e, писать в b c
	//i - количество элементов, которые должны быть переведены в другой файл вместе
	//1, 2, 4, 8, 16 ...
	//Их количество не должно превышать половину количества элементов
	for (long i = 1; i < size / 2; i *= 2) {
		//В зависимости от направления записи передаём файлы для чтения и записи
		if (file)
			betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt");				// Читать из b c, писать в d e
		else
			betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt");				// Читать из d e, писать в b c
		file = !file;								// Меняем направление
	}
	if (file)										// Теперь объединяем обратно в файл a, используя последние редактируемые файлы
		simpleSortCombine1(size, "b.txt", "c.txt");	// Читать из b c
	else
		simpleSortCombine1(size, "d.txt", "e.txt");	// Читать из d e  
}
*/
	   // Разделение на 2 файла
	   void simpleSortSplit1(int& incount, int& compcount, int& outcount) {
		   ifstream readA("a.txt");			// Открыли файл для чтения
		   ofstream writeB("b.txt");		// Открыли файл для записи
		   ofstream writeC("c.txt");		// Открыли файл для записи
		   bool file = true;						// Определяем файл записи: true - файл b, false - файл c
		   while (!readA.eof()) {					// Пока файл не пуст, считываем числа
			   int number;							// Новое число
			   readA >> number;					// Считывание нового числа
			   if (file)							// В зависимости от направления пишем в файл число
				   writeB << " " << number;		// Записываем число в файл b
			   else
				   writeC << " " << number;		// Записываем число в файл c
			   file = !file;						// Меняем направление
		   }
		   readA.close();							// Закрываем поток чтения
		   writeB.close();							// Закрываем поток записи
		   writeB.close();							// Закрываем поток записи
	   }

	   // Метод для объединения 2 файлов в методе простого слияния
	   void simpleSortCombine1(long len, string first, string second, int& incount, int& compcount, int& outcount) {
		   ofstream writeA("a.txt");						// Открыли файл для записи
		   ifstream readFirst(first);								// Открыли файл для чтения
		   ifstream readSecond(second);							// Открыли файл для чтения
		   //Читаем первые числа из 2 файлов
		   int fileFirst, fileSecond;
		   if (readFirst.eof()) fileFirst = -1;					// Если файл пуст, устанавливаем значение -1
		   else readFirst >> fileFirst;							// Иначе считываем число из файла
		   if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
		   else readSecond >> fileSecond;							// Иначе считываем число из файла
		   while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
			   long curFirst = len;								// Осталось обработать элементов в первой последовательности
			   long curSecond = len;								// Осталось обработать элементов во второй последовательности
			   // Пока не закончится место в последовательности или пока не достигнут конец файла
			   while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				   if (fileFirst < fileSecond) {					// Сравниваем 2 числа из 2 файлов
					   writeA << " " << fileFirst;					// Если первое меньше, то записываем его в файл a
					   curFirst--;									// Уменьшаем остаток длины последовательности для первого файла
					   // Читаем новое число из первого файла
					   if (readFirst.eof()) fileFirst = -1;		// Если файл пуст, устанавливаем значение -1
					   else readFirst >> fileFirst;				// Иначе считываем число из файла
				   }
				   else {
					   writeA << " " << fileSecond;				// Если второе меньше, то записываем его в файл a
					   curSecond--;								// Уменьшаем остаток длины последовательности для второго файла
					   // Читаем новое число из второго файла
					   if (readSecond.eof()) fileSecond = -1;		// Если файл пуст, устанавливаем значение -1
					   else readSecond >> fileSecond;				// Иначе считываем число из файла
				   }
			   }
			   // Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			   while (curFirst != 0 && fileFirst != -1) {
				   writeA << " " << fileFirst;
				   curFirst--;										// Уменьшаем остаток длины последовательности для первого файла
				   // Читаем новое число из первого файла
				   if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
				   else readFirst >> fileFirst;					// Иначе считываем число из файла
			   }
			   // Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			   while (curSecond != 0 && fileSecond != -1) {
				   writeA << " " << fileSecond;
				   curSecond--;									// Уменьшаем остаток длины последовательности для второгофайла
				   // Читаем новое число из второго файла
				   if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
				   else readSecond >> fileSecond;					// Иначе считываем число из файла
			   }
		   }
		   writeA.close();											// Закрываем поток записи
		   readFirst.close();										// Закрываем поток чтения
		   readFirst.close();										// Закрываем поток чтения
	   }

	   //Перемещаем данные в файлах в методе простого слияния. Принимает имена файлов для чтения и записи, а также длину цепочки
	   void betweenFiles(long len, string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount){
		   ifstream readFirst(firstRead);							// Открыли файл для чтения
		   ifstream readSecond(secondRead);						// Открыли файл для чтения
		   ofstream writeFirst(firstWrite);						// Открыли файл для записи
		   ofstream writeSecond(secondWrite);						// Открыли файл для записи
		   bool file = true;										// Переменная для определения файлов для записи
		   int fileFirst, fileSecond;
		   if (readFirst.eof()) fileFirst = -1;					// Если файл пуст, устанавливаем значение -1
		   else readFirst >> fileFirst;							// Иначе считываем число из файла
		   if (readSecond.eof()) fileSecond = -1;					// Если файл пуст, устанавливаем значение -1
		   else readSecond >> fileSecond;							// Иначе считываем число из файла
		   while (fileFirst != -1 || fileSecond != -1) {			// Пока оба файла не кончились
			   //Выставляем длину для цепочек
			   long curFirst = len;
			   long curSecond = len;
			   // Пока не закончится место в последовательности или пока не достигнут конец файла
			   while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				   if (fileFirst < fileSecond) {					//Сравниваем 2 числа из 2 файлов
					   // Если первое меньше, то записываем его в файл в зависимости от направления
					   if (file) writeFirst << " " << fileFirst;
					   else writeSecond << " " << fileFirst;
					   curFirst--;									// Уменьшаем остаток длины последовательности для первого файла
					   // Читаем новое число из первого файла
					   if (readFirst.eof()) fileFirst = -1;		// Если файл пуст, устанавливаем значение -1
					   else readFirst >> fileFirst;				// Иначе считываем число из файла
				   }
				   else {
					   // Если второе меньше, то записываем его в файл в зависимости от направления
					   if (file) writeFirst << " " << fileSecond;
					   else writeSecond << " " << fileSecond;
					   curSecond--;								// Уменьшаем остаток длины последовательности для второго файла
					   // Читаем новое число из первого файла
					   if (readSecond.eof()) fileSecond = -1;		// Если файл пуст, устанавливаем значение -1
					   else readSecond >> fileSecond;				// Иначе считываем число из файла
				   }
			   }
			   // Дописываем данные из первого файла, если второй закончился, или достигнут лимит чисел в последовательности из второго
			   while (curFirst != 0 && fileFirst != -1) {
				   if (file) writeFirst << " " << fileFirst;
				   else writeSecond << " " << fileFirst;
				   curFirst--;										// Уменьшаем остаток длины последовательности для первого файла
				   // Читаем новое число из первого файла
				   if (readFirst.eof()) fileFirst = -1;			// Если файл пуст, устанавливаем значение -1
				   else readFirst >> fileFirst;					// Иначе считываем число из файла
			   }
			   // Дописываем данные из второго файла, если первый закончился, или достигнут лимит чисел в последовательности из первого
			   while (curSecond != 0 && fileSecond != -1) {
				   if (file) writeFirst << " " << fileSecond;
				   else writeSecond << " " << fileSecond;
				   curSecond--;									// Уменьшаем остаток длины последовательности для второгофайла
				   // Читаем новое число из второго файла
				   if (readSecond.eof()) fileSecond = -1;			// Если файл пуст, устанавливаем значение -1
				   else readSecond >> fileSecond;					// Иначе считываем число из файла
			   }
			   file = !file;										// Меняем направление
		   }
		   readFirst.close();										// Закрываем поток чтения
		   readSecond.close();										// Закрываем поток чтения
		   writeFirst.close();										// Закрываем поток записи
		   writeSecond.close();									// Закрываем поток записи
	   }

};
}
