#pragma once
#include <algorithm>
#include <chrono>

namespace SecondTry {

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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;   
	public:
		MyForm(void)
		{
			InitializeComponent();
			numericUpDown1->Maximum = 10000000;
			// Заполнение массива
			arr[0] = rand() % 10;
			for (int i = 1; i < N - 1; ++i)
				arr[i] = (rand() % 3) + arr[i-1] + 1;
			//std::sort(arr, arr + N - 1);
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

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(243, 15);
			this->label1->Margin = System::Windows::Forms::Padding(6);
			this->label1->MaximumSize = System::Drawing::Size(675, 62);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(6);
			this->label1->Size = System::Drawing::Size(258, 49);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Бинарный поиск";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(258, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ключ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(487, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Оптимальный поиск";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(87, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(280, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Неоптимальный поиск";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 192);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 26);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(30, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Индекс";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(407, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Индекс";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(116, 249);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(182, 26);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(493, 192);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(182, 26);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(493, 249);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(182, 26);
			this->textBox4->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(30, 251);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Время";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(407, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Время";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(206, 302);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(377, 37);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Последовательный поиск";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(208, 364);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 25);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Индекс";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(208, 421);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 25);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Время";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(320, 364);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(206, 26);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(320, 419);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(206, 26);
			this->textBox6->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(308, 494);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 38);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(334, 95);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(144, 26);
			this->numericUpDown1->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(748, 558);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"СиАОД 2 лабораторная";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int key = Convert::ToInt32(numericUpDown1->Value); // Считываем ключ
		int left = 0; // Левая граница
		int right = N; // Правая граница
		textBox3->Text = "No";
		textBox5->Text = "No";
		// Алгоритм Неоптимального поиска
		int answer_neopt = -1;
		auto begin_unoptimal = std::chrono::high_resolution_clock::now();
		while (right >= left) {
			int i = (left + right) / 2;
			if (arr[i] == key) {
				answer_neopt = i;
				break;  // Совпадение с ключом найдено, успешный выход из алгоритма
			}
			else if (arr[i] > key)
				right = --i;
			else
				left = ++i;
		}
		auto end_unoptimal = std::chrono::high_resolution_clock::now();
		auto time_took_unoptimal = std::chrono::duration_cast<std::chrono::duration < double>>(end_unoptimal - begin_unoptimal);
		textBox2->Text = Convert::ToString(time_took_unoptimal.count() * 10000);
		if (answer_neopt == -1)
			textBox1->Text = "No";
		else
			textBox1->Text = Convert::ToString(answer_neopt);
		// Алгоритм оптимального поиска
		int answer_opt = -1;
		auto begin_optimal = std::chrono::high_resolution_clock::now();
		while (right > left) {
			int i = (left + right) / 2;
			if (arr[i] >= key)
				right = i;
			else
				left = ++i;
		}
		if (arr[right] == key)
			answer_opt = right; // Совпадение с ключом найдено
		auto end_optimal = std::chrono::high_resolution_clock::now();
		auto time_took_optimal = std::chrono::duration_cast<std::chrono::duration < double>>(end_optimal - begin_optimal);
		textBox4->Text = Convert::ToString(time_took_optimal.count() * 10000);
		if (answer_opt == -1)
			textBox3->Text = "No";
		else
			textBox3->Text = Convert::ToString(answer_opt);
		// Алгоритм интерполяционного поиска
		/*auto begin_interpolate = std::chrono::high_resolution_clock::now();
		textBox5->Text = "No";
		int mid;
		while ((arr[left] < key) && (arr[right] > key)) {
			mid = left + (key - arr[left]) * (right - left) / (right - left);
			if (arr[mid] < key)
				left = mid + 1;
			else if (arr[mid] > key)
				right = mid - 1;
			else
				textBox5->Text = Convert::ToString(mid);
		}
		if (arr[left] == key)
			textBox5->Text = Convert::ToString(left);
		if (arr[right] == key)
			textBox5->Text = Convert::ToString(right);
		auto end_interpolate = std::chrono::high_resolution_clock::now();
		auto time_took_interpolate = std::chrono::duration_cast<std::chrono::duration < double>>(end_interpolate - begin_interpolate);
		textBox6->Text = Convert::ToString(time_took_interpolate.count() * 10000);*/
		// Алгоритм оптимального поиска как в упорядоченном
		auto begin_ordered = std::chrono::high_resolution_clock::now();
		int answer_up = -1;
		arr[1000000] = key + 1;
		int k = 0;
		while (key > arr[k])
			++k;
		if (key == arr[k])
			answer_up = k;
		auto end_ordered = std::chrono::high_resolution_clock::now();
		auto time_took_ordered = std::chrono::duration_cast<std::chrono::duration < double>>(end_ordered - begin_ordered);
		textBox6->Text = Convert::ToString(time_took_ordered.count() * 10000);
		if (answer_up == -1)
			textBox5->Text = "No";
		else
			textBox5->Text = Convert::ToString(answer_opt);
}
};
}
