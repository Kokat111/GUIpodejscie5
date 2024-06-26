#pragma once
#include "Register.h"
#include "SqlManage.h"
#include "MainApp.h"
#include "UserId.h"
#include <iostream>

namespace GUIpodejscie5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainForms
	/// </summary>
	public ref class MainForms : public System::Windows::Forms::Form
	{
	public:
		MainForms(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainForms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::BlueViolet;
			this->label6->Location = System::Drawing::Point(193, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 19);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Rejestracja";
			this->label6->Click += gcnew System::EventHandler(this, &MainForms::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(181, 446);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 19);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Nie masz konta";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->ForeColor = System::Drawing::Color::Gray;
			this->checkBox2->Location = System::Drawing::Point(322, 321);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(92, 19);
			this->checkBox2->TabIndex = 30;
			this->checkBox2->Text = L"Poka¿ has³o";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainForms::checkBox2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(59, 361);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10);
			this->button1->Size = System::Drawing::Size(349, 70);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Zaloguj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForms::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(59, 283);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(349, 31);
			this->textBox2->TabIndex = 28;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(59, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 31);
			this->textBox1->TabIndex = 27;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(53, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 31);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Has³o";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(53, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 31);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(105, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 55);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Logowanie";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(194, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"test udany";
			this->label4->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(56, 318);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 16);
			this->label7->TabIndex = 34;
			this->label7->Text = L"label7";

			// 
			// MainForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(476, 585);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForms";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForms::MainForms_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForms::MainForms_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchToApp = false;
	public:bool switchToRegister = false;
	public:bool dzial = true;
	public:int userid;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlManage db;
		String^ password = textBox1->Text;
		String^ login = textBox2->Text;

		using namespace System::Runtime::InteropServices;
		const char* charsl = (const char*)(Marshal::StringToHGlobalAnsi(login)).ToPointer();
		std::string stdlogin = charsl;
		Marshal::FreeHGlobal(IntPtr((void*)charsl));

		using namespace System::Runtime::InteropServices;
		const char* charsp = (const char*)(Marshal::StringToHGlobalAnsi(password)).ToPointer();
		std::string stdpassword = charsp;
		Marshal::FreeHGlobal(IntPtr((void*)charsp));

		std::string sql1 = "SELECT * FROM UserData WHERE UserName='" + stdlogin + "'";
		UserData* loginData = db.getUser(sql1.c_str());
		this->label7->Text = "Zly login lub haslo";
		this->label7->ForeColor = System::Drawing::Color::OrangeRed;
		if (loginData != NULL) {
			if (stdpassword == loginData->Password) {
				this->switchToApp = true;
				this->Close();
			}
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	
		this->switchToRegister = true;
		this->Hide();
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		textBox2->PasswordChar = NULL;
	}
	else {
		textBox2->PasswordChar = '*';
	}

}
;	private: System::Void MainForms_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	}
	private: System::Void MainForms_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		dzial=false;
	}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
