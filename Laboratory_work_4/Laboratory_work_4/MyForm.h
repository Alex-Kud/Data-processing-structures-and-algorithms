#pragma once
#include "Tree.h"
#include <msclr\marshal_cppstd.h>
namespace Laboratorywork4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace Collections;
	using namespace Windows::Forms;
	using namespace Data;
	using namespace Drawing;

	public ref class MyForm : public Form {
	public:
		Tree* tree = new Tree();
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			tree->clear(tree->get_root());
			if (components)
				delete components;
		}
	private:
	TextBox^ textBox1, ^ textBox2, ^ textBox3;
	GroupBox^ groupBox1;
	Button^ button1, ^ button2;

	System::ComponentModel::Container ^components;

	void InitializeComponent(void) {
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->groupBox1->SuspendLayout();
		this->SuspendLayout();
		// 
		// textBox1
		// 
		this->textBox1->BackColor = System::Drawing::SystemColors::Info;
		this->textBox1->Location = System::Drawing::Point(14, 260);
		this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->textBox1->Multiline = true;
		this->textBox1->Name = L"textBox1";
		this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
		this->textBox1->Size = System::Drawing::Size(402, 323);
		this->textBox1->TabIndex = 0;
		// 
		// textBox2
		// 
		this->textBox2->BackColor = System::Drawing::SystemColors::Info;
		this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->textBox2->Location = System::Drawing::Point(28, 29);
		this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(340, 31);
		this->textBox2->TabIndex = 1;
		// 
		// textBox3
		// 
		this->textBox3->BackColor = System::Drawing::SystemColors::Info;
		this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->textBox3->Location = System::Drawing::Point(28, 181);
		this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(340, 31);
		this->textBox3->TabIndex = 2;
		// 
		// groupBox1
		// 
		this->groupBox1->Controls->Add(this->button2);
		this->groupBox1->Controls->Add(this->button1);
		this->groupBox1->Controls->Add(this->textBox3);
		this->groupBox1->Controls->Add(this->textBox2);
		this->groupBox1->Location = System::Drawing::Point(13, 14);
		this->groupBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->groupBox1->Name = L"groupBox1";
		this->groupBox1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->groupBox1->Size = System::Drawing::Size(402, 236);
		this->groupBox1->TabIndex = 3;
		this->groupBox1->TabStop = false;
		this->groupBox1->Text = L"Работа";
		// 
		// button2
		// 
		this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->button2->Location = System::Drawing::Point(210, 84);
		this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(158, 74);
		this->button2->TabIndex = 4;
		this->button2->Text = L"Искать";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
		// 
		// button1
		// 
		this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->button1->Location = System::Drawing::Point(28, 84);
		this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(158, 74);
		this->button1->TabIndex = 3;
		this->button1->Text = L"Добавить";
		this->button1->UseVisualStyleBackColor = true;
		this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ClientSize = System::Drawing::Size(429, 596);
		this->Controls->Add(this->groupBox1);
		this->Controls->Add(this->textBox1);
		this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
		this->Name = L"MyForm";
		this->Text = L"MyForm";
		this->groupBox1->ResumeLayout(false);
		this->groupBox1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}

	Void button1_Click(Object^ sender, EventArgs^ e) {
		textBox1->Text += textBox2->Text + System::Environment::NewLine;
		string str = msclr::interop::marshal_as<std::string>(textBox2->Text);
		tree->add(str);
	}
	Void button2_Click(Object^ sender, EventArgs^ e) {
		string str = msclr::interop::marshal_as<std::string>(textBox2->Text);
		textBox3->Text = tree->search(str) ? "Слово найдено" : "Слово НЕ найдено";
	}
};
}
