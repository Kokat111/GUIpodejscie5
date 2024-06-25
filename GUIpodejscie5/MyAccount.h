#pragma once

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
	private: System::Windows::Forms::Label^ label6;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(16, 168);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(865, 468);
			this->dataGridView1->TabIndex = 23;
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
			this->button1->Location = System::Drawing::Point(16, 9);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(13, 12, 13, 12);
			this->button1->Size = System::Drawing::Size(293, 151);
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
			this->textBox2->Location = System::Drawing::Point(633, 36);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 39);
			this->textBox2->TabIndex = 25;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyAccount::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::BlueViolet;
			this->label1->Location = System::Drawing::Point(633, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 23);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Wpisz ID pozadanego biletu";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::BlueViolet;
			this->label6->Location = System::Drawing::Point(431, 80);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 23);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Logowanie";
			// 
			// MyAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 644);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Name = L"MyAccount";
			this->Text = L"MyAccount";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:bool switchToAccount = false;
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToAccount = true;
		this->Close();
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("ZWROCONO BILET", "  ", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
