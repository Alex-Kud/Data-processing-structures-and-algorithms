#pragma once

#include <chrono>
#include <algorithm>
namespace Project2 {

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
	private:
		int N = 1000001;
		int* arr = new int[N];
		int* arr2 = new int[N];
	public:
		MyForm(void)
		{
			   InitializeComponent();

			// Заполнение массива
			for (int i = 0; i < N - 1; ++i) {
				arr[i] = rand() % 10000;
				arr2[i] = rand() % 10000;
			}
			std::sort(arr2, arr2 + N - 1);
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
			delete[] arr;
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label17;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(110, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 27);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->Location = System::Drawing::Point(110, 187);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(262, 27);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(110, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(262, 27);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ключ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Неоптимальный поиск";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Время";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Индекс";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 19);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Индекс";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 19);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Время";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(35, 289);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(204, 22);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Оптимальный поиск";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Info;
			this->textBox4->Location = System::Drawing::Point(110, 321);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(262, 27);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Info;
			this->textBox5->Location = System::Drawing::Point(110, 368);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(262, 27);
			this->textBox5->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(35, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(284, 24);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Неупорядоченный массив";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(516, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(258, 24);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Упорядоченный массив";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(516, 373);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 19);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Индекс";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(516, 327);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 19);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Время";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(516, 289);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(276, 22);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Поиск как в упорядоченном";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Info;
			this->textBox6->Location = System::Drawing::Point(591, 100);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(262, 27);
			this->textBox6->TabIndex = 23;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Info;
			this->textBox7->Location = System::Drawing::Point(591, 187);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(262, 27);
			this->textBox7->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(516, 233);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 19);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Индекс";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(516, 187);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 19);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Время";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(516, 149);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(299, 22);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Поиск как в неупорядоченном";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(516, 100);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(49, 19);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Ключ";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Info;
			this->textBox8->Location = System::Drawing::Point(591, 230);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(262, 27);
			this->textBox8->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Info;
			this->textBox9->Location = System::Drawing::Point(591, 327);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(262, 27);
			this->textBox9->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Info;
			this->textBox10->Location = System::Drawing::Point(591, 373);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(262, 27);
			this->textBox10->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(520, 420);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(337, 28);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Найти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(262, 9);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(391, 34);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Последовательный поиск";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(39, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(337, 28);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Найти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(898, 476);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Location = System::Drawing::Point(39, 420);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"СиАОД. Лабораторная №1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "") {
			int key = Convert::ToInt32(textBox1->Text); // Считываем ключ
			textBox3->Text = "No";
			// Алгоритм Неоптимального поиска
			auto begin_unoptimal = std::chrono::high_resolution_clock::now();
			for (int i = 0; i < N - 1; ++i) {
				if (key == arr[i]) {
					textBox3->Text = Convert::ToString(i);
					break;
				}
			}
			auto end_unoptimal = std::chrono::high_resolution_clock::now();
			auto time_took_unoptimal = std::chrono::duration_cast<std::chrono::duration < double>>(end_unoptimal - begin_unoptimal);
			textBox2->Text = Convert::ToString(time_took_unoptimal.count() * 10000);

			textBox5->Text = "No";
			// Алгоритм оптимального поиска
			auto begin_optimal = std::chrono::high_resolution_clock::now();
			arr[1000000] = key;
			int j = 0;
			while (key != arr[j])
				++j;
			if (j != N - 1)
				textBox5->Text = Convert::ToString(j);
			auto end_optimal = std::chrono::high_resolution_clock::now();
			auto time_took_optimal = std::chrono::duration_cast<std::chrono::duration < double>>(end_optimal - begin_optimal);
			textBox4->Text = Convert::ToString(time_took_optimal.count() * 10000);
		}
		else
			MessageBox::Show("Ключ не введён!");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text != "") {
			int key = Convert::ToInt32(textBox6->Text); // Считываем ключ

			textBox8->Text = "No";
			// Алгоритм оптимального поиска как в неупорядоченном
			auto begin_unordered = std::chrono::high_resolution_clock::now();
			arr2[1000000] = key;
			int j = 0;
			while (key != arr2[j])
				++j;
			if (j != N - 1)
				textBox8->Text = Convert::ToString(j);
			auto end_unordered = std::chrono::high_resolution_clock::now();
			auto time_took_unordered = std::chrono::duration_cast<std::chrono::duration < double>>(end_unordered - begin_unordered);
			textBox7->Text = Convert::ToString(time_took_unordered.count() * 10000);

			textBox10->Text = "No";
			// Алгоритм оптимального поиска как в упорядоченном
			auto begin_ordered = std::chrono::high_resolution_clock::now();
			arr2[1000000] = key + 1;
			int k = 0;
			while (key > arr2[k])
				++k;
			if (key == arr2[k])
				textBox10->Text = Convert::ToString(k);
			auto end_ordered = std::chrono::high_resolution_clock::now();
			auto time_took_ordered = std::chrono::duration_cast<std::chrono::duration < double>>(end_ordered - begin_ordered);
			textBox9->Text = Convert::ToString(time_took_ordered.count() * 10000);
		}
		else
			MessageBox::Show("Ключ не введён!");
	}
};
}