#pragma once
#include"MainForms.h"
#include "SqlManage.h"
#include "UserId.h"
#include <msclr/marshal.h>

namespace GUIpodejscie5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyAccount
	/// </summary>
	public ref class MyAccount : public System::Windows::Forms::Form
	{
	public:
		MyAccount(void)
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
		~MyAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stacjaPocz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stacjaKonc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ godzOdjazdu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ godzPrzyj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cena;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button3;


	protected:











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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stacjaPocz = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stacjaKonc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->godzOdjazdu = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->godzPrzyj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cena = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->stacjaPocz,
					this->stacjaKonc, this->godzOdjazdu, this->godzPrzyj, this->cena
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(802, 380);
			this->dataGridView1->TabIndex = 23;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyAccount::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Width = 125;
			// 
			// stacjaPocz
			// 
			this->stacjaPocz->HeaderText = L"stacjaPocz";
			this->stacjaPocz->MinimumWidth = 6;
			this->stacjaPocz->Name = L"stacjaPocz";
			this->stacjaPocz->ReadOnly = true;
			this->stacjaPocz->Width = 125;
			// 
			// stacjaKonc
			// 
			this->stacjaKonc->HeaderText = L"Stacja_Koncowa";
			this->stacjaKonc->MinimumWidth = 6;
			this->stacjaKonc->Name = L"stacjaKonc";
			this->stacjaKonc->ReadOnly = true;
			this->stacjaKonc->Width = 125;
			// 
			// godzOdjazdu
			// 
			this->godzOdjazdu->HeaderText = L"Godzina_Odjazdu";
			this->godzOdjazdu->MinimumWidth = 6;
			this->godzOdjazdu->Name = L"godzOdjazdu";
			this->godzOdjazdu->ReadOnly = true;
			this->godzOdjazdu->Width = 125;
			// 
			// godzPrzyj
			// 
			this->godzPrzyj->HeaderText = L"Godzina_Przyjazdu";
			this->godzPrzyj->MinimumWidth = 6;
			this->godzPrzyj->Name = L"godzPrzyj";
			this->godzPrzyj->ReadOnly = true;
			this->godzPrzyj->Width = 125;
			// 
			// cena
			// 
			this->cena->HeaderText = L"Cena";
			this->cena->MinimumWidth = 6;
			this->cena->Name = L"cena";
			this->cena->ReadOnly = true;
			this->cena->Width = 125;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(178, 68);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10);
			this->button1->Size = System::Drawing::Size(342, 69);
			this->button1->TabIndex = 26;
			this->button1->Text = L"ZWROC BILET";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyAccount::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(258, 31);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 31);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyAccount::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(254, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 19);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Wpisz ID pozadanego biletu";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(610, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 36);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Dostêpne Bilety";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyAccount::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox4->Location = System::Drawing::Point(598, 68);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(183, 31);
			this->textBox4->TabIndex = 38;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::BlueViolet;
			this->label2->Location = System::Drawing::Point(640, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 19);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Podaj swoje id";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::BlueViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(598, 105);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 36);
			this->button3->TabIndex = 39;
			this->button3->Text = L"Pokarz moje bilety";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyAccount::button3_Click_1);
			// 
			// MyAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 523);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyAccount";
			this->Text = L"MyAccount";
			this->Load += gcnew System::EventHandler(this, &MyAccount::MyAccount_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:bool switchToApp = false;
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlManage db;

		String^ TicketId = textBox2->Text;
		using namespace System::Runtime::InteropServices;
		const char* charsp2 = (const char*)(Marshal::StringToHGlobalAnsi(TicketId)).ToPointer();
		std::string stdTicketId = charsp2;
		Marshal::FreeHGlobal(IntPtr((void*)charsp2));

		String^ UserId = textBox4->Text;
		using namespace System::Runtime::InteropServices;
		const char* charsp1 = (const char*)(Marshal::StringToHGlobalAnsi(TicketId)).ToPointer();
		std::string stdUserId = charsp1;
		Marshal::FreeHGlobal(IntPtr((void*)charsp1));

		int id = stoi(stdTicketId);
		int i = db.sqlGetId("Booking");
		std::string sql3 = "SELECT * FROM Booking WHERE User_id ='" + stdUserId + "'AND Ticket_id='" + stdTicketId + "'";
		BookingData* bookingData = db.getBooking(sql3.c_str());

		if (bookingData != NULL && id <= i)
		{
			std::string sql1 = "DELETE FROM Booking WHERE User_id ='" + stdUserId + "'AND Ticket_id='" + stdTicketId + "'";
			db.sqlExecute(sql1.c_str());
			MessageBox::Show("ZWROCONO BILET", "  ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToApp = true;
	this->Hide();
}
private: System::Void MyAccount_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   System::String^ StdStringToSystemString(const std::string& stdString) {
		   msclr::interop::marshal_context context;
		   System::String^ managedString = context.marshal_as<System::String^>(stdString.c_str());
		   return managedString;
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	SqlManage db;

	String^ UserId = textBox4->Text;

	using namespace System::Runtime::InteropServices;
	const char* charsp2 = (const char*)(Marshal::StringToHGlobalAnsi(UserId)).ToPointer();
	std::string stdUserId = charsp2;
	Marshal::FreeHGlobal(IntPtr((void*)charsp2));

	DataTable^ dt = gcnew DataTable();
	int ile = db.sqlGetIdWhere("Booking", " User_id = " + stdUserId + "");
	std::cout << ile;
	for (int i = 1; i < ile-1; i++)
	{
		std::cout << "dziala";
		std::string sid = std::to_string(i);
		std::string sql3 = "SELECT * FROM Booking WHERE User_id = " + stdUserId + " AND Id = " + sid + "";
		BookingData* bookingData = db.getBooking(sql3.c_str());
		bookingData->Ticket_id;
		std::string sql4 = "SELECT * FROM TicketData WHERE Id = " + bookingData->Ticket_id + " ";
		TicketData* ticketData = db.getTicket(sql4.c_str());

		ticketData->id;
		ticketData->stacjaPocz;
		ticketData->stacjaKonc;
		ticketData->godzOdjazdu;
		ticketData->godzPrzyjazdu;
		ticketData->cena;
		std::string stdId = ticketData->id;

		System::String^ managedId = StdStringToSystemString(stdId);
		std::string stdSP = ticketData->stacjaPocz;
		System::String^ managedSP = StdStringToSystemString(stdSP);
		std::string stdSK = ticketData->stacjaKonc;
		System::String^ managedSK = StdStringToSystemString(stdSK);
		std::string stdGO = ticketData->godzOdjazdu;
		System::String^ managedGO = StdStringToSystemString(stdGO);
		std::string stdGP = ticketData->godzPrzyjazdu;
		System::String^ managedGP = StdStringToSystemString(stdGP);
		std::string stdCena = ticketData->cena;
		System::String^ managedCena = StdStringToSystemString(stdCena);


		this->dataGridView1->Rows->Add(managedId, managedSP, managedSK, managedGO, managedGP, managedCena);
	}
}
};
}
