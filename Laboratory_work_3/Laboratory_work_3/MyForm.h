#pragma once
#include <vector>
#include <cmath>
#include <chrono>
using namespace std;

namespace Laboratorywork3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	private:
		//int arr_M1[10000];
		//int arr_M2[10000];
		int N = 1000;
		int* arr_M = new int[N];
		int rez_k1 = 0, rez_k2 = 0, rez_k3 = 0, rez_k4 = 0;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox7;

	private: System::Windows::Forms::TextBox^ textBox9;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;


	private: System::Windows::Forms::TextBox^ textBox11;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::TextBox^ textBox15;

	public:
		MyForm(void) {
			InitializeComponent();
			//for (int i = 0; 0 < 10000; i++)
				//arr_M1[i];
			numericUpDown1->Minimum = 1;
			numericUpDown1->Maximum = 10000;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm() {
			if (components) {
				delete[] arr_M;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(174, 630);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 49);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(413, 566);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(178, 43);
			this->textBox4->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(413, 484);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(178, 43);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(413, 312);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(178, 43);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(413, 390);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 43);
			this->textBox1->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(31, 576);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(255, 32);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Метод умножения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(31, 494);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(278, 32);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Метод свёртывания";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(31, 400);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(380, 32);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Метод середины квадратов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(31, 322);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 32);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Метод деления";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(31, 185);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 32);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Количество сравнений";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(412, 175);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(180, 43);
			this->numericUpDown1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(526, 11);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(278, 46);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Хеш функция";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(110, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(401, 40);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Функции хеширования";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(652, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(535, 40);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Методы разрешения коллизий";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(652, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(424, 37);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Метод открытой индексации";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(652, 390);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(232, 37);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Метод цепочек";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(653, 206);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(181, 30);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Время поиска";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(653, 244);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(195, 60);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Среднее число\r\nсравнений";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(653, 320);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(252, 30);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Количество ключей";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(914, 212);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(211, 26);
			this->textBox5->TabIndex = 32;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(914, 266);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(211, 26);
			this->textBox7->TabIndex = 34;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(914, 325);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(211, 26);
			this->textBox9->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(653, 462);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(181, 30);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Время поиска";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(653, 496);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(195, 60);
			this->label17->TabIndex = 39;
			this->label17->Text = L"Среднее число\r\nсравнений";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(653, 566);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(252, 30);
			this->label18->TabIndex = 40;
			this->label18->Text = L"Количество ключей";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(914, 466);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(211, 26);
			this->textBox11->TabIndex = 43;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(914, 519);
			this->textBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(211, 26);
			this->textBox13->TabIndex = 45;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(914, 572);
			this->textBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(211, 26);
			this->textBox15->TabIndex = 47;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(853, 630);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 49);
			this->button2->TabIndex = 48;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1277, 696);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		rez_k1 = 0, rez_k2 = 0, rez_k3 = 0, rez_k4 = 0;
		int quantity_checks = Convert::ToInt32(numericUpDown1->Value);
		for (int j = 0; j < quantity_checks; ++j) {
			// Генерация массива
			arr_M[0] = rand() % 10;
			for (int i = 1; i < N; ++i)
				arr_M[i] = (rand() % 60) + arr_M[i - 1] + 1;
			int k1 = 0, k2 = 0, k3 = 0, k4 = 0; // Количество коллизий каждого метода
			vector <vector <int>> vec(N); // Хеш-таблица
			// Метод деления
			for (int i = 0; i < N; ++i) {
				int hesh_address = divisionMethod(arr_M[i]);
				if (vec[hesh_address].size() > 0) k1++;
				vec[hesh_address].push_back(arr_M[i]);
			}
			// Очистка хеш-таблицы
			for (int i = 0; i < N; ++i)
				vec[i].clear();
			// Метод середины квадрата
			for (int i = 0; i < N; ++i) {
				int hesh_address = midSquaresMethod(arr_M[i]);
				if (vec[hesh_address].size() > 0) k2++;
				vec[hesh_address].push_back(arr_M[i]);
			}
			// Очистка хеш-таблицы
			for (int i = 0; i < N; ++i)
				vec[i].clear();
			// Метод свёртывания
			for (int i = 0; i < N; ++i) {
				int hesh_address = foldingMethod(arr_M[i]);
				if (vec[hesh_address].size() > 0) k3++;
				vec[hesh_address].push_back(arr_M[i]);
			}
			// Очистка хеш-таблицы
			for (int i = 0; i < N; ++i)
				vec[i].clear();
			// Метод умножения
			for (int i = 0; i < N; ++i) {
				int hesh_address = multiplicationMethod(arr_M[i], N);
				if (vec[hesh_address].size() > 0) k4++;
				vec[hesh_address].push_back(arr_M[i]);
			}
			// Очистка хеш-таблицы
			for (int i = 0; i < N; ++i)
				vec[i].clear();
			// Подсчёт лучших результатов коллизии в итерации
			min(k1, k2, k3, k4);
		}
		textBox1->Text = Convert::ToString(rez_k1);
		textBox2->Text = Convert::ToString(rez_k2);
		textBox3->Text = Convert::ToString(rez_k3);
		textBox4->Text = Convert::ToString(rez_k4);
	}
	public:
		// Метод деления
		int divisionMethod (int key) {
			int m = 997; // делитель
			return key % m;
		}
		// Метод середины квадрата
		int midSquaresMethod (int key) {
			int key_pow = key * key;
			int temp = key_pow;
			int length = log10(key_pow) + 1;
			if (length < 4)
				return key_pow;
			else {
				int del = (length % 2) ? (length - 3) / 2 : (length - 3) / 2 + 1;
				for (int i = 0; i < del; ++i) 
					key_pow /= 10;
				return key_pow % 1000;
			}
		}
		// Метод свёртывания
		int foldingMethod (int key) {
			int sum = 0;
			int temp = key;
			int length = log10(key) + 1;
			for (int i = 0; i < length / 3 + 1; i++) {
				sum += temp % 1000;
				temp /= 1000;
			}
			return sum % 1000;
		}
		// Метод умножения
		int multiplicationMethod(int key, int n) {
			const double A = 0.618033;
			return (int)((key * A - floor(key * A)) * n);
		}
		int min(int a, int b) { return a < b ? a : b; }
		// Подсчёт лучших результатов коллизии в итерации
		void min (int a, int b, int с, int d) {
			int res_ab = min(a, b);
			int res_cd = min(с, d);
			int minimum = min(res_ab, res_cd);
			if (a == minimum) rez_k1++;
			if (b == minimum) rez_k2++;
			if (с == minimum) rez_k3++;
			if (d == minimum) rez_k4++;
		}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		const int M = 10000;
		int arr_M1[M], arr_M2[M];
		for (int i = 0; i < M; ++i) {
			arr_M1[i] = rand() % 10000;
			arr_M2[i] = rand() % 20000;
		}
		auto beginHashTable = std::chrono::high_resolution_clock::now();
		vector <vector <int>> vec(M); // Хеш-таблица
		// Формирование хеш-таблицы методом цепочек
		for (int i = 0; i < M; ++i)
			vec[multiplicationMethod(arr_M1[i], M)].push_back(arr_M1[i]);
		int numberOfFound = 0; // Количество найденных
		double numberOfComparisons = 0; // Количество сравнений
		for (int i = 0; i < M; ++i) {
			int heshAddress = multiplicationMethod(arr_M2[i], M);
			numberOfComparisons++;
			for (int j = 0; j < vec[heshAddress].size(); ++j) {
				numberOfComparisons++;
				if (arr_M2[i] == vec[heshAddress][j]) {
					numberOfFound++;
					break;
				}
			}
		}
		auto endHashTable = std::chrono::high_resolution_clock::now();
		auto timeHashTable = std::chrono::duration_cast<std::chrono::duration < double>>(endHashTable - beginHashTable);
		textBox11->Text = Convert::ToString(timeHashTable.count() * 10000);
		textBox13->Text = Convert::ToString(numberOfComparisons / M);
		textBox15->Text = Convert::ToString(numberOfFound);
		
	auto beginFreeAddressing = std::chrono::high_resolution_clock::now();
	int arrhesh[M]; // Хеш-таблица
	for (int i = 0; i < M; ++i) arrhesh[i] = NULL;
	// Формирование хеш таблицы методом свободной адресации
	for (int i = 0; i < M; ++i) {
		int heshAddress = multiplicationMethod(arr_M1[i], M);
		int reserv = heshAddress;
		if (arrhesh[heshAddress] == NULL)
			arrhesh[heshAddress] = arr_M1[i];
		else {
			heshAddress++;
			while (heshAddress != reserv) {
				if (arrhesh[heshAddress] == NULL) {
					arrhesh[heshAddress] = arr_M1[i];
					break;
				}
				heshAddress++;
				if (heshAddress == M)
					heshAddress = 0;
			}
		}
	}
	numberOfFound = 0; // Количество найденных
	numberOfComparisons = 0; // Количество сравнений
	for (int i = 0; i < M; ++i) {
		int heshAddress = multiplicationMethod(arr_M2[i], M);
		int searchReserv = heshAddress;
		if (arrhesh[heshAddress] == arr_M2[i]) {
			numberOfComparisons++;
			numberOfFound++;
		}
		else {
			heshAddress++;
			while (heshAddress != searchReserv) {
				numberOfComparisons++;
				if (arrhesh[heshAddress] == arr_M2[i]) {
					numberOfFound++;
					break;
				}
				else {
					heshAddress++;
					if (heshAddress == M)
						heshAddress = 0;
				}
			}
		}
	}
	auto endFreeAddressing = std::chrono::high_resolution_clock::now();
	auto timeFreeAddressing = std::chrono::duration_cast<std::chrono::duration < double>>(endFreeAddressing - beginFreeAddressing);
	textBox5->Text = Convert::ToString(timeFreeAddressing.count() * 10000);
	textBox7->Text = Convert::ToString(numberOfComparisons / M);
	textBox9->Text = Convert::ToString(numberOfFound);
}
};
}
