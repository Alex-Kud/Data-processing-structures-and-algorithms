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
			this->tabPage4->Text = L"��������� ��������";
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
			this->label5->Text = L"������� ���������� ���������";
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
			this->Column1->HeaderText = L"���������� ����������";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"���������� ����������";
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
			this->label2->Text = L"����� �������������";
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
			this->label1->Text = L"������������ ������ �6";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(373, 376);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 19);
			this->button1->TabIndex = 0;
			this->button1->Text = L"���������";
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
			this->tabPage2->Text = L"���������� ����������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(353, 426);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"�����������";
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
			this->label3->Text = L"������ ���������� ����������";
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
			this->tabPage3->Text = L"���������� ����������";
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
			this->label4->Text = L"������ ���������� ����������";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(320, 484);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 24);
			this->button3->TabIndex = 1;
			this->button3->Text = L"�����������";
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
			this->Text = L"���������� ������� ��������";
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
		dataGridView1->Rows[0]->HeaderCell->Value = "����� ����������";
		dataGridView1->Rows[1]->HeaderCell->Value = "���-�� ������ �� �����";
		dataGridView1->Rows[2]->HeaderCell->Value = "���-�� ���������";
		dataGridView1->Rows[3]->HeaderCell->Value = "���-�� ������� � ����";
	}
	Void button1_Click(Object^ sender, EventArgs^ e) {
		long size = Convert::ToInt64(numericUpDown1->Value);
		int* arr = new int[size];
		arr[0] = rand() % 10;
		for (int i = 1; i < size; ++i)
			arr[i] = rand() % 1000 + arr[i - 1] + 1;
		ofstream writeA("a.txt");		// ������� ���� ��� ������
		for (int i = 0; i < size; ++i)
			writeA << " " << arr[i];
		writeA.close();							// ������� ���� ��� ������
		ifstream readA("a.txt");			// ������� ���� ��� ������
		ifstream readB("b.txt");			// ������� ���� ��� ������
		ifstream readC("c.txt");			// ������� ���� ��� ������
		// ---------------------------------------
		// ---------------------------------------
		// ---------���������� ����������---------
		// ---------------------------------------
		// ---------------------------------------
		int incount = 0;						// ������� ���������� �� �����
		int compcount = 0;						// ������� ���������
		int outcount = 0;						// ������� ������� � ����
		auto startTwoPhase = std::chrono::high_resolution_clock::now();
		for (long i = 1; i < size; i *= 2) {
			simpleSortSplit(i, incount, compcount, outcount);	// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			simpleSortCombine(i, incount , compcount, outcount);	// ���������� ����� b.txt � c.txt � ���� a.txt
		}
		auto finishTwoPhaseg = std::chrono::high_resolution_clock::now();
		auto timeTwoPhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishTwoPhaseg - startTwoPhase);
		// ����� ������������� ����������
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(timeTwoPhase.count() * 10000);
		dataGridView1->Rows[1]->Cells[0]->Value = incount;
		dataGridView1->Rows[2]->Cells[0]->Value = compcount;
		dataGridView1->Rows[3]->Cells[0]->Value = outcount;
		// ---------------------------------------
		// ---------------------------------------
		// ---------���������� ����������---------
		// ---------------------------------------
		// ---------------------------------------
		ofstream writeA2("a.txt");				// ������� ���� ��� ������
		for (int i = 0; i < size; ++i)
			writeA2 << " " << arr[i];
		writeA2.close();								// ������� ���� ��� ������

		incount = 0;									// ������� ���������� �� �����
		compcount = 0;									// ������� ���������
		outcount = 0;									// ������� ������� � ����
		auto startOnePhase = std::chrono::high_resolution_clock::now();
		simpleSortSplit1(incount, compcount, outcount);								// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
		bool file = true;								// ���������� ����� ������: true - ������ �� b c, ������ � d e, false - ���� ������ �� d e, ������ � b c
		// i - ���������� ���������, ������� ������ ���� ���������� � ������ ���� ������
		for (long i = 1; i < size / 2; i *= 2) {
			//� ����������� �� ����������� ������ ������� ����� ��� ������ � ������
			if (file)
				betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� b c, ������ � d e
			else
				betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� d e, ������ � b c
			file = !file;								// ������ �����������
		}
		if (file)										// ������ ���������� ������� � ���� a, ��������� ��������� ������������� �����
			simpleSortCombine1(size, "b.txt", "c.txt", incount, compcount, outcount);	// ������ �� b c
		else
			simpleSortCombine1(size, "d.txt", "e.txt", incount, compcount, outcount);	// ������ �� d e
		auto finishOnePhaseg = std::chrono::high_resolution_clock::now();
		auto timeOnePhase = std::chrono::duration_cast<std::chrono::duration < double>>(finishOnePhaseg - startOnePhase);
		// ����� ������������� ����������
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString(timeOnePhase.count() * 10000);
		dataGridView1->Rows[1]->Cells[1]->Value = incount;
		dataGridView1->Rows[2]->Cells[1]->Value = compcount;
		dataGridView1->Rows[3]->Cells[1]->Value = outcount;
		delete[] arr;
	}

	// ���������� �� 2 �����. len - ���������� ��������� � ������������������
	void simpleSortSplit(long len, int& incount, int& compcount, int& outcount)  {
		ifstream readA("a.txt");			// ������� ���� ��� ������
		ofstream writeB("b.txt");		// ������� ���� ��� ������
		ofstream writeC("c.txt");		// ������� ���� ��� ������
		long curLen = len;						// �������� ���������� ��������� � ������������������
		bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
		while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
			compcount++;						// ���������� �������� ��������� (while)
			int number;							// ����� �����
			readA >> number;					// ���������� ������ �����
			incount++;							// ������������ ����������
			compcount++;						// ���������� �������� ���������
			if (curLen > 0)					    // ���� ������������������ �� ���������, �� ������ ���� ������
				curLen--;						// ��������� ������� ����� ������������������
			else {
				file = !file;					// ����� ������ ���� ������
				curLen = len - 1;				// ��������� ������� ����� ����� ������������������, �.�. ��� ������� � �� ������ �����
			}
			compcount++;						// ���������� �������� ���������
			if (file) writeB << " " << number;	// ���������� ����� �  ������ ����
			else writeC << " " << number;
			outcount++;							// ������������ ������
		}
		readA.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
	}

	// ����� ��� ����������� ������ �� ���� ������ � ����
	void simpleSortCombine(long len, int& incount, int& compcount, int& outcount) {
		ofstream writeA("a.txt");		// ������� ���� ��� ������
		ifstream readB("b.txt");			// ������� ���� ��� ������
		ifstream readC("c.txt");			// ������� ���� ��� ������
		//������ ������ ����� �� 2 ������
		int fileB, fileC;
		if (readB.eof()) fileB = -1;			// ���� ���� ����, ������������� �������� -1
		else {
			readB >> fileB;						// ����� ��������� ����� �� �����
			incount++;							// ������������ ����������
		}
		if (readC.eof()) fileC = -1;			// ���� ���� ����, ������������� �������� -1
		else {
			readC >> fileC;						// ����� ��������� ����� �� �����
			incount++;							// ������������ ����������
		}
		compcount += 2;							// ���������� �������� ���������
		while (fileB != -1 || fileC != -1) {	// ���� ��� ����� �� ���������
			compcount ++;						// ���������� �������� ��������� (while)
			long curB = len;					// �������� ���������� ��������� � ������������������ B
			long curC = len;					// �������� ���������� ��������� � ������������������ C
			// ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			while (curB != 0 && curC != 0 && fileB != -1 && fileC != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				// ���������� 2 ����� �� 2 ������
				if (fileB < fileC) {
					writeA << " " << fileB;		// ���� ������ ������, �� ���������� ��� � ���� a
					outcount++;					// ���������� �������� ������
					curB--;						// ��������� ������� ����� ������������������ ��� ����� B
					// ������ ����� ����� �� ������� �����
					if (readB.eof()) fileB = -1;// ���� ���� ����, ������������� �������� -1
					else {
						readB >> fileB;			// ����� ��������� ����� �� �����
						incount++;				// ���������� �������� ������
					}
					compcount++;				// ���������� �������� ���������
				}
				else {
					writeA << " " << fileC;		// ���� ������ ������, �� ���������� ��� � ���� a
					outcount++;					// ���������� �������� ������
					curC--;						// ��������� ������� ����� ������������������ ��� ����� B
					// ������ ����� ����� �� ������� �����
					if (readC.eof()) fileC = -1;// ���� ���� ����, ������������� �������� -1
					else {
						readC >> fileC;			// ����� ��������� ����� �� �����
						incount++;				// ���������� �������� ������
					}
					compcount++;				// ���������� �������� ���������
				}
				compcount++;					// ���������� �������� ���������
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curB != 0 && fileB != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				writeA << " " << fileB;
				outcount++;						// ���������� �������� ������
				curB--;							// ��������� ������� ����� ������������������ ��� ����� B
				// ������ ����� ����� �� ������� �����
				if (readB.eof()) fileB = -1;	// ���� ���� ����, ������������� �������� -1
				else {
					readB >> fileB;				// ����� ��������� ����� �� �����
					incount++;					// ���������� �������� ������
				}
				compcount++;					// ���������� �������� ���������
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curC != 0 && fileC != -1) {
				compcount++;					// ���������� �������� ��������� (while)
				writeA << " " << fileC;
				outcount++;						// ���������� �������� ������
				curC--;							// ��������� ������� ����� ������������������ ��� ����� B
				// ������ ����� ����� �� ������� �����
				if (readC.eof()) fileC = -1;	// ���� ���� ����, ������������� �������� -1
				else {
					readC >> fileC;				// ����� ��������� ����� �� �����
					incount++;					// ���������� �������� ������
				}
				compcount++;					// ���������� �������� ���������
			}
		}
		writeA.close();							// ��������� ����� ������
		readB.close();							// ��������� ����� ������
		readB.close();							// ��������� ����� ������
	}

	
/*private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	long size = 8;
	simpleSortSplit1();								// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
	bool file = true;								// ���������� ����� ������: true - ������ �� b c, ������ � d e, false - ���� ������ �� d e, ������ � b c
	//i - ���������� ���������, ������� ������ ���� ���������� � ������ ���� ������
	//1, 2, 4, 8, 16 ...
	//�� ���������� �� ������ ��������� �������� ���������� ���������
	for (long i = 1; i < size / 2; i *= 2) {
		//� ����������� �� ����������� ������ ������� ����� ��� ������ � ������
		if (file)
			betweenFiles(i, "b.txt", "c.txt", "d.txt", "e.txt");				// ������ �� b c, ������ � d e
		else
			betweenFiles(i, "d.txt", "e.txt", "b.txt", "c.txt");				// ������ �� d e, ������ � b c
		file = !file;								// ������ �����������
	}
	if (file)										// ������ ���������� ������� � ���� a, ��������� ��������� ������������� �����
		simpleSortCombine1(size, "b.txt", "c.txt");	// ������ �� b c
	else
		simpleSortCombine1(size, "d.txt", "e.txt");	// ������ �� d e  
}
*/
	   // ���������� �� 2 �����
	   void simpleSortSplit1(int& incount, int& compcount, int& outcount) {
		   ifstream readA("a.txt");			// ������� ���� ��� ������
		   ofstream writeB("b.txt");		// ������� ���� ��� ������
		   ofstream writeC("c.txt");		// ������� ���� ��� ������
		   bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
		   while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
			   int number;							// ����� �����
			   readA >> number;					// ���������� ������ �����
			   if (file)							// � ����������� �� ����������� ����� � ���� �����
				   writeB << " " << number;		// ���������� ����� � ���� b
			   else
				   writeC << " " << number;		// ���������� ����� � ���� c
			   file = !file;						// ������ �����������
		   }
		   readA.close();							// ��������� ����� ������
		   writeB.close();							// ��������� ����� ������
		   writeB.close();							// ��������� ����� ������
	   }

	   // ����� ��� ����������� 2 ������ � ������ �������� �������
	   void simpleSortCombine1(long len, string first, string second, int& incount, int& compcount, int& outcount) {
		   ofstream writeA("a.txt");						// ������� ���� ��� ������
		   ifstream readFirst(first);								// ������� ���� ��� ������
		   ifstream readSecond(second);							// ������� ���� ��� ������
		   //������ ������ ����� �� 2 ������
		   int fileFirst, fileSecond;
		   if (readFirst.eof()) fileFirst = -1;					// ���� ���� ����, ������������� �������� -1
		   else readFirst >> fileFirst;							// ����� ��������� ����� �� �����
		   if (readSecond.eof()) fileSecond = -1;					// ���� ���� ����, ������������� �������� -1
		   else readSecond >> fileSecond;							// ����� ��������� ����� �� �����
		   while (fileFirst != -1 || fileSecond != -1) {			// ���� ��� ����� �� ���������
			   long curFirst = len;								// �������� ���������� ��������� � ������ ������������������
			   long curSecond = len;								// �������� ���������� ��������� �� ������ ������������������
			   // ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			   while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				   if (fileFirst < fileSecond) {					// ���������� 2 ����� �� 2 ������
					   writeA << " " << fileFirst;					// ���� ������ ������, �� ���������� ��� � ���� a
					   curFirst--;									// ��������� ������� ����� ������������������ ��� ������� �����
					   // ������ ����� ����� �� ������� �����
					   if (readFirst.eof()) fileFirst = -1;		// ���� ���� ����, ������������� �������� -1
					   else readFirst >> fileFirst;				// ����� ��������� ����� �� �����
				   }
				   else {
					   writeA << " " << fileSecond;				// ���� ������ ������, �� ���������� ��� � ���� a
					   curSecond--;								// ��������� ������� ����� ������������������ ��� ������� �����
					   // ������ ����� ����� �� ������� �����
					   if (readSecond.eof()) fileSecond = -1;		// ���� ���� ����, ������������� �������� -1
					   else readSecond >> fileSecond;				// ����� ��������� ����� �� �����
				   }
			   }
			   // ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			   while (curFirst != 0 && fileFirst != -1) {
				   writeA << " " << fileFirst;
				   curFirst--;										// ��������� ������� ����� ������������������ ��� ������� �����
				   // ������ ����� ����� �� ������� �����
				   if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
				   else readFirst >> fileFirst;					// ����� ��������� ����� �� �����
			   }
			   // ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			   while (curSecond != 0 && fileSecond != -1) {
				   writeA << " " << fileSecond;
				   curSecond--;									// ��������� ������� ����� ������������������ ��� ������������
				   // ������ ����� ����� �� ������� �����
				   if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
				   else readSecond >> fileSecond;					// ����� ��������� ����� �� �����
			   }
		   }
		   writeA.close();											// ��������� ����� ������
		   readFirst.close();										// ��������� ����� ������
		   readFirst.close();										// ��������� ����� ������
	   }

	   //���������� ������ � ������ � ������ �������� �������. ��������� ����� ������ ��� ������ � ������, � ����� ����� �������
	   void betweenFiles(long len, string firstRead, string secondRead, string firstWrite, string secondWrite, int& incount, int& compcount, int& outcount){
		   ifstream readFirst(firstRead);							// ������� ���� ��� ������
		   ifstream readSecond(secondRead);						// ������� ���� ��� ������
		   ofstream writeFirst(firstWrite);						// ������� ���� ��� ������
		   ofstream writeSecond(secondWrite);						// ������� ���� ��� ������
		   bool file = true;										// ���������� ��� ����������� ������ ��� ������
		   int fileFirst, fileSecond;
		   if (readFirst.eof()) fileFirst = -1;					// ���� ���� ����, ������������� �������� -1
		   else readFirst >> fileFirst;							// ����� ��������� ����� �� �����
		   if (readSecond.eof()) fileSecond = -1;					// ���� ���� ����, ������������� �������� -1
		   else readSecond >> fileSecond;							// ����� ��������� ����� �� �����
		   while (fileFirst != -1 || fileSecond != -1) {			// ���� ��� ����� �� ���������
			   //���������� ����� ��� �������
			   long curFirst = len;
			   long curSecond = len;
			   // ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			   while (curFirst != 0 && curSecond != 0 && fileFirst != -1 && fileSecond != -1) {
				   if (fileFirst < fileSecond) {					//���������� 2 ����� �� 2 ������
					   // ���� ������ ������, �� ���������� ��� � ���� � ����������� �� �����������
					   if (file) writeFirst << " " << fileFirst;
					   else writeSecond << " " << fileFirst;
					   curFirst--;									// ��������� ������� ����� ������������������ ��� ������� �����
					   // ������ ����� ����� �� ������� �����
					   if (readFirst.eof()) fileFirst = -1;		// ���� ���� ����, ������������� �������� -1
					   else readFirst >> fileFirst;				// ����� ��������� ����� �� �����
				   }
				   else {
					   // ���� ������ ������, �� ���������� ��� � ���� � ����������� �� �����������
					   if (file) writeFirst << " " << fileSecond;
					   else writeSecond << " " << fileSecond;
					   curSecond--;								// ��������� ������� ����� ������������������ ��� ������� �����
					   // ������ ����� ����� �� ������� �����
					   if (readSecond.eof()) fileSecond = -1;		// ���� ���� ����, ������������� �������� -1
					   else readSecond >> fileSecond;				// ����� ��������� ����� �� �����
				   }
			   }
			   // ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			   while (curFirst != 0 && fileFirst != -1) {
				   if (file) writeFirst << " " << fileFirst;
				   else writeSecond << " " << fileFirst;
				   curFirst--;										// ��������� ������� ����� ������������������ ��� ������� �����
				   // ������ ����� ����� �� ������� �����
				   if (readFirst.eof()) fileFirst = -1;			// ���� ���� ����, ������������� �������� -1
				   else readFirst >> fileFirst;					// ����� ��������� ����� �� �����
			   }
			   // ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			   while (curSecond != 0 && fileSecond != -1) {
				   if (file) writeFirst << " " << fileSecond;
				   else writeSecond << " " << fileSecond;
				   curSecond--;									// ��������� ������� ����� ������������������ ��� ������������
				   // ������ ����� ����� �� ������� �����
				   if (readSecond.eof()) fileSecond = -1;			// ���� ���� ����, ������������� �������� -1
				   else readSecond >> fileSecond;					// ����� ��������� ����� �� �����
			   }
			   file = !file;										// ������ �����������
		   }
		   readFirst.close();										// ��������� ����� ������
		   readSecond.close();										// ��������� ����� ������
		   writeFirst.close();										// ��������� ����� ������
		   writeSecond.close();									// ��������� ����� ������
	   }

};
}
