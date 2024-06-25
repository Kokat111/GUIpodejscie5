#pragma once
#include"MainForms.h"
#include "SqlManage.h"

namespace GUIpodejscie5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
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
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::BlueViolet;
			this->label6->Location = System::Drawing::Point(256, 657);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 23);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Logowanie";
			this->label6->Click += gcnew System::EventHandler(this, &Register::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(240, 634);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 23);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Masz ju¿ konto";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->ForeColor = System::Drawing::Color::Gray;
			this->checkBox2->Location = System::Drawing::Point(428, 463);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(117, 23);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"Poka¿ has³o";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Register::checkBox2_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(77, 529);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(13, 12, 13, 12);
			this->button1->Size = System::Drawing::Size(465, 86);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Zarejestruj";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(77, 417);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(465, 39);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(77, 334);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(465, 39);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(77, 250);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(465, 39);
			this->textBox1->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(69, 375);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(227, 38);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Powtórz Has³o";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(69, 292);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 38);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Has³o";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Location = System::Drawing::Point(69, 208);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 38);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(135, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 68);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Rejestracja";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Location = System::Drawing::Point(74, 460);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 19);
			this->label7->TabIndex = 24;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Location = System::Drawing::Point(74, 479);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 19);
			this->label8->TabIndex = 25;
			this->label8->Text = L"label8";
			this->label8->Click += gcnew System::EventHandler(this, &Register::label8_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 720);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private:bool CapitallLetter(std::string& tekst) {//funkcja do sprawdzania czy w tekscie jest wielka litera
		for (char c : tekst) {
			if (isupper(c)) {
				return false;
			}
		}
		return true;
	}
	public:bool switchToRegister = false;
	public:bool switchToApp = false;
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlManage db;
		String^ reglogin = textBox1->Text;
		String^ regpassword = textBox2->Text;
		String^ regpassword2 = textBox3->Text;

		using namespace System::Runtime::InteropServices;
		const char* charsl = (const char*)(Marshal::StringToHGlobalAnsi(reglogin)).ToPointer();
		std::string stdlogin = charsl;
		Marshal::FreeHGlobal(IntPtr((void*)charsl));

		using namespace System::Runtime::InteropServices;
		const char* charsp = (const char*)(Marshal::StringToHGlobalAnsi(regpassword)).ToPointer();
		std::string stdpassword = charsp;
		Marshal::FreeHGlobal(IntPtr((void*)charsp));

		using namespace System::Runtime::InteropServices;
		const char* charsp2 = (const char*)(Marshal::StringToHGlobalAnsi(regpassword2)).ToPointer();
		std::string stdpassword2 = charsp2;
		Marshal::FreeHGlobal(IntPtr((void*)charsp2));

		std::string sql1 = "SELECT * FROM UserData WHERE UserName='" + stdlogin + "'";
		UserData* loginData = db.getUser(sql1.c_str());
		if (loginData != NULL) {
			std::string sql1 = "SELECT * FROM UserData WHERE UserName='" + stdlogin + "'";
			UserData* loginData = db.getUser(sql1.c_str());
			label7->Text = "Istniejacy login";
			label7->ForeColor = System::Drawing::Color::OrangeRed;
			label8->ForeColor = System::Drawing::Color::WhiteSmoke;
		}
		else {
			if (CapitallLetter(stdpassword) && stdpassword == stdpassword2) {
				label7->Text = "Brak wielkiej litery";
				label7->ForeColor = System::Drawing::Color::OrangeRed;
			}
			if (stdpassword != stdpassword2) {
				label7->Text = "Niezgodnosc powtorzonego hasla";
				label7->ForeColor = System::Drawing::Color::OrangeRed;
			}
			if (CapitallLetter(stdpassword) && stdpassword != stdpassword2) {
				label8->Text = "Brak wielkiej litery";
				label8->ForeColor = System::Drawing::Color::OrangeRed;
			}
			else {
				label8->ForeColor = System::Drawing::Color::WhiteSmoke;
			}

			/*std::string ida;
			int id= db.sqlGetId("UserData");
			ida=std::to_string(id);
			std::string sql1 = "INSERT INTO UserData (Id,UserName, Password, Money) VALUES ( "+ida+",'" + stdlogin + "', '" + stdpassword + "',0);";
			db.sqlExecute(sql1.c_str());
			this->switchToApp = true;*/
		}
	}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		textBox2->PasswordChar = NULL;
		textBox3->PasswordChar = NULL;
	}
	else {
		textBox2->PasswordChar = '*';
		textBox3->PasswordChar = '*';
	}

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
