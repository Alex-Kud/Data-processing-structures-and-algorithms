#pragma once
#include <fstream>
using namespace std;
namespace Laboratorywork6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();

		}

	protected:
		~MyForm() {

			if (components) delete components;
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(877, 562);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(869, 536);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������������� ����������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->dataGridView1->Location = System::Drawing::Point(38, 22);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(541, 278);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"���������� ����������";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"���������� ����������";
			this->Column2->Name = L"Column2";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(869, 536);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"���������� ����������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(393, 473);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(194, 461);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(869, 536);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"���������� ����������";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 586);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"���������� ������� ��������";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion





	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream out("test.txt");
		ifstream in("test.txt"); // ������� ���� ��� ������
		if (!out) textBox1->Text = "Bad file";
		else textBox1->Text = "Good file";
		out << "Hi :)";
		out.close();
		int i = 1;
		ifstream readA("a.txt");			// ������� ���� ��� ������
		ifstream readB("b.txt");			// ������� ���� ��� ������
		ifstream readC("c.txt");			// ������� ���� ��� ������
		//while (!readA.eof()) {
			simpleSortSplit(i);					// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			simpleSortCombine(i);				// ���������� ����� b.txt � c.txt � ���� a.txt
			i *= 2;
			simpleSortSplit(i);					// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			simpleSortCombine(i);
			i *= 2;
			simpleSortSplit(i);					// ��������� ���� a.txt �� ��� ����� b.txt � c.txt
			simpleSortCombine(i);
			
		//}
	}

	// ���������� �� 2 �����. len - ���������� ��������� � ������������������
	void simpleSortSplit(long len)  {
		ifstream readA("a.txt");			// ������� ���� ��� ������
		ofstream writeB("b.txt");		// ������� ���� ��� ������
		ofstream writeC("c.txt");		// ������� ���� ��� ������
		long curLen = len;						// �������� ���������� ��������� � ������������������
		bool file = true;						// ���������� ���� ������: true - ���� b, false - ���� c
		while (!readA.eof()) {					// ���� ���� �� ����, ��������� �����
			int number;							// ����� �����
			readA >> number;					// ���������� ������ �����
			if (curLen > 0)						// ���� ������������������ �� ���������, �� ������ ���� ������
				curLen--;						// ��������� ������� ����� ������������������
			else {								
				file = !file;					// ����� ������ ���� ������
				curLen = len - 1;				// ��������� ������� ����� ����� ������������������, �.�. ��� ������� � �� ������ �����
			}
			if (file) writeB << " " << number;	// ���������� ����� �  ������ ����
			else writeC << " " << number;
		}
		readA.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
		writeB.close();							// ��������� ����� ������
	}

	// ����� ��� ����������� ������ �� ���� ������ � ����
	void simpleSortCombine(long len) {
		ofstream writeA("a.txt");		// ������� ���� ��� ������
		ifstream readB("b.txt");			// ������� ���� ��� ������
		ifstream readC("c.txt");			// ������� ���� ��� ������
		//������ ������ ����� �� 2 ������
		int fileB, fileC;
		if (readB.eof()) fileB = -1;			// ���� ���� ����, ������������� �������� -1
		else readB >> fileB;					// ����� ��������� ����� �� �����
		if (readC.eof()) fileC = -1;			// ���� ���� ����, ������������� �������� -1
		else readC >> fileC;					// ����� ��������� ����� �� �����
		while (fileB != -1 || fileC != -1) {	// ���� ��� ����� �� ���������
			long curB = len;					// �������� ���������� ��������� � ������������������ B
			long curC = len;					// �������� ���������� ��������� � ������������������ C
			// ���� �� ���������� ����� � ������������������ ��� ���� �� ��������� ����� �����
			while (curB != 0 && curC != 0 && fileB != -1 && fileC != -1) {
				// ���������� 2 ����� �� 2 ������
				if (fileB < fileC) {
					writeA << " " << fileB;		// ���� ������ ������, �� ���������� ��� � ���� a
					curB--;						// ��������� ������� ����� ������������������ ��� ����� B
					// ������ ����� ����� �� ������� �����
					if (readB.eof()) fileB = -1;// ���� ���� ����, ������������� �������� -1
					else readB >> fileB;		// ����� ��������� ����� �� �����
				}
				else {
					writeA << " " << fileC;		// ���� ������ ������, �� ���������� ��� � ���� a
					curC--;						// ��������� ������� ����� ������������������ ��� ����� B
					// ������ ����� ����� �� ������� �����
					if (readC.eof()) fileC = -1;// ���� ���� ����, ������������� �������� -1
					else readC >> fileC;		// ����� ��������� ����� �� �����
				}
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curB != 0 && fileB != -1) {
				writeA << " " << fileB;
				curB--;							// ��������� ������� ����� ������������������ ��� ����� B
				// ������ ����� ����� �� ������� �����
				if (readB.eof()) fileB = -1;	// ���� ���� ����, ������������� �������� -1
				else readB >> fileB;			// ����� ��������� ����� �� �����
			}
			// ���������� ������ �� ������� �����, ���� ������ ����������, ��� ��������� ����� ����� � ������������������ �� �������
			while (curC != 0 && fileC != -1) {
				writeA << " " << fileC;
				curC--;							// ��������� ������� ����� ������������������ ��� ����� B
				// ������ ����� ����� �� ������� �����
				if (readC.eof()) fileC = -1;	// ���� ���� ����, ������������� �������� -1
				else readC >> fileC;			// ����� ��������� ����� �� �����
			}
		}
		writeA.close();							// ��������� ����� ������
		readB.close();							// ��������� ����� ������
		readB.close();							// ��������� ����� ������
	}

	
};
}
