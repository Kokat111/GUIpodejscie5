#pragma once
#include"MainForms.h"
#include "SqlManage.h"
#include <msclr/marshal.h>

namespace GUIpodejscie5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainApp
	/// </summary>
	public ref class MainApp : public System::Windows::Forms::Form
	{
	public:
		MainApp(void)
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
		~MainApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stacjaPocz;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stacjaKonc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ godzOdjazdu;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ godzPrzyj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cena;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;








	protected:

	protected:



	protected:


	protected:




	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1->Location = System::Drawing::Point(1, 148);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(802, 380);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainApp::dataGridView1_CellContentClick);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(292, 8);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Wpisz ID pozadanego biletu";
			this->label1->Click += gcnew System::EventHandler(this, &MainApp::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(296, 33);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 31);
			this->textBox2->TabIndex = 18;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainApp::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::BlueViolet;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(278, 70);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10, 10, 10, 10);
			this->button1->Size = System::Drawing::Size(220, 63);
			this->button1->TabIndex = 21;
			this->button1->Text = L"KUP BILET";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainApp::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(660, -1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 36);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Moje Bilety";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainApp::button2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::BlueViolet;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(13, 14);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(244, 41);
			this->button2->TabIndex = 29;
			this->button2->Text = L"ZNAJDZ POLACZENIA Z";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainApp::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(13, 61);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(244, 20);
			this->textBox1->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::BlueViolet;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(13, 89);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(244, 41);
			this->button3->TabIndex = 31;
			this->button3->Text = L"ZNAJDZ POLACZENIA DO";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainApp::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gainsboro;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox3->Location = System::Drawing::Point(13, 138);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 20);
			this->textBox3->TabIndex = 32;
			// 
			// MainApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 738);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainApp";
			this->Text = L"MainApp";
			this->Load += gcnew System::EventHandler(this, &MainApp::MainApp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ StdStringToSystemString(const std::string& stdString) {
			msclr::interop::marshal_context context;
			System::String^ managedString = context.marshal_as<System::String^>(stdString.c_str());
			return managedString;
		}
	private: System::Void MainApp_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "test";
		SqlManage db;
		int id = db.sqlGetId("TicketData");
		DataTable^ dt = gcnew DataTable();
		id = id - 1;

		for (int i = 0; i < id; i++)
		{
			std::string sid = std::to_string(i + 1);
			std::string sql1 = "SELECT * FROM TicketData WHERE Id =" + sid + "";
			TicketData* ticketData = db.getTicket(sql1.c_str());


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
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("ZAKUPIONO BILET", "  ", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	public:bool switchToAccount = false;
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToAccount = true;
		this->Close();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlManage db;
		String^ from = textBox1->Text;

		using namespace System::Runtime::InteropServices;
		const char* charf = (const char*)(Marshal::StringToHGlobalAnsi(from)).ToPointer();
		std::string stdfrom = charf;
		Marshal::FreeHGlobal(IntPtr((void*)charf));

		std::string sql1 = "SELECT * FROM TicketData WHERE stacjaPocz='" + stdfrom + "'";
		TicketData* ticketData = db.getTicket(sql1.c_str());

		int id = db.sqlGetId("TicketData");
		DataTable^ dt = gcnew DataTable();
		id = id - 1;
		this->dataGridView1->Rows->Add("///////////////////////", "///////////////////////","///////////////////////",
			"///////////////////////", "///////////////////////", "///////////////////////");

		for (int i = 0; i < id; i++)
		{
			std::string sid = std::to_string(i + 1);
			std::string sql1 = "SELECT * FROM TicketData WHERE Id =" + sid + "";
			TicketData* ticketData = db.getTicket(sql1.c_str());


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

			if (stdfrom == ticketData->stacjaPocz) {
				this->dataGridView1->Rows->Add(managedId, managedSP, managedSK, managedGO, managedGP, managedCena);
			}
		}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlManage db;
	String^ to = textBox3->Text;

	using namespace System::Runtime::InteropServices;
	const char* chart = (const char*)(Marshal::StringToHGlobalAnsi(to)).ToPointer();
	std::string stdto = chart;
	Marshal::FreeHGlobal(IntPtr((void*)chart));

	std::string sql1 = "SELECT * FROM TicketData WHERE stacjaKonc='" + stdto + "'";
	TicketData* ticketData = db.getTicket(sql1.c_str());

	int id = db.sqlGetId("TicketData");
	DataTable^ dt = gcnew DataTable();
	id = id - 1;
	this->dataGridView1->Rows->Add("///////////////////////", "///////////////////////", "///////////////////////",
		"///////////////////////", "///////////////////////", "///////////////////////");

	for (int i = 0; i < id; i++)
	{
		std::string sid = std::to_string(i + 1);
		std::string sql1 = "SELECT * FROM TicketData WHERE Id =" + sid + "";
		TicketData* ticketData = db.getTicket(sql1.c_str());


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

		if (stdto == ticketData->stacjaKonc) {
			this->dataGridView1->Rows->Add(managedId, managedSP, managedSK, managedGO, managedGP, managedCena);
		}
	}
}
};
}
