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
			this->dataGridView1->Location = System::Drawing::Point(2, 140);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(649, 380);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainApp::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// stacjaPocz
			// 
			this->stacjaPocz->HeaderText = L"stacjaPocz";
			this->stacjaPocz->Name = L"stacjaPocz";
			this->stacjaPocz->ReadOnly = true;
			// 
			// stacjaKonc
			// 
			this->stacjaKonc->HeaderText = L"Stacja_Koncowa";
			this->stacjaKonc->Name = L"stacjaKonc";
			this->stacjaKonc->ReadOnly = true;
			// 
			// godzOdjazdu
			// 
			this->godzOdjazdu->HeaderText = L"Godzina_Odjazdu";
			this->godzOdjazdu->Name = L"godzOdjazdu";
			this->godzOdjazdu->ReadOnly = true;
			// 
			// godzPrzyj
			// 
			this->godzPrzyj->HeaderText = L"Godzina_Przyjazdu";
			this->godzPrzyj->Name = L"godzPrzyj";
			this->godzPrzyj->ReadOnly = true;
			// 
			// cena
			// 
			this->cena->HeaderText = L"Cena";
			this->cena->Name = L"cena";
			this->cena->ReadOnly = true;
			// 
			// MainApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 600);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainApp";
			this->Text = L"MainApp";
			this->Load += gcnew System::EventHandler(this, &MainApp::MainApp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainApp_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "test";
		SqlManage db;
		int id = db.sqlGetId("TicketData");
		DataTable^ dt = gcnew DataTable();
		id = id - 1;
		std::string sid = std::to_string(id);
		for (int i = 0; i < id; i++)
		{
			std::string sql1 = "SELECT * FROM TicketData WHERE Id ="+sid+"";
			TicketData* ticketData = db.getTicket(sql1.c_str());
			ticketData->id;
			this->dataGridView1->Rows->Add(NULL, NULL, NULL, NULL, NULL, NULL);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
	
}
