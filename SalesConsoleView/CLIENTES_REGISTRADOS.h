#pragma once

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace salesModel;
	using namespace salesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de CLIENTES_REGISTRADOS
	/// </summary>
	public ref class CLIENTES_REGISTRADOS : public System::Windows::Forms::Form
	{
	public:
		CLIENTES_REGISTRADOS(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CLIENTES_REGISTRADOS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvclientes;
	protected:

	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE_COLUM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EMAIL_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PHONE_COLUMNA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvclientes = (gcnew System::Windows::Forms::DataGridView());
			this->DNI_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOMBRE_COLUM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EMAIL_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PHONE_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvclientes))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvclientes
			// 
			this->dgvclientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvclientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DNI_COLUMNA,
					this->NOMBRE_COLUM, this->EMAIL_COLUMNA, this->PHONE_COLUMNA
			});
			this->dgvclientes->Location = System::Drawing::Point(12, 31);
			this->dgvclientes->Name = L"dgvclientes";
			this->dgvclientes->Size = System::Drawing::Size(893, 308);
			this->dgvclientes->TabIndex = 0;
			this->dgvclientes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CLIENTES_REGISTRADOS::dgvclientes_CellContentClick);
			// 
			// DNI_COLUMNA
			// 
			this->DNI_COLUMNA->HeaderText = L"DNI";
			this->DNI_COLUMNA->Name = L"DNI_COLUMNA";
			this->DNI_COLUMNA->Width = 150;
			// 
			// NOMBRE_COLUM
			// 
			this->NOMBRE_COLUM->HeaderText = L"NOMBRE";
			this->NOMBRE_COLUM->Name = L"NOMBRE_COLUM";
			this->NOMBRE_COLUM->Width = 250;
			// 
			// EMAIL_COLUMNA
			// 
			this->EMAIL_COLUMNA->HeaderText = L"EMAIL";
			this->EMAIL_COLUMNA->Name = L"EMAIL_COLUMNA";
			this->EMAIL_COLUMNA->Width = 300;
			// 
			// PHONE_COLUMNA
			// 
			this->PHONE_COLUMNA->HeaderText = L"TELEFONO";
			this->PHONE_COLUMNA->Name = L"PHONE_COLUMNA";
			this->PHONE_COLUMNA->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 364);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CANTIDAD CLIENTES REGISTRADOS";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(245, 361);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 2;
			// 
			// CLIENTES_REGISTRADOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 396);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvclientes);
			this->Name = L"CLIENTES_REGISTRADOS";
			this->Text = L"CLIENTES_REGISTRADOS";
			this->Load += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::CLIENTES_REGISTRADOS_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvclientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void ShowClientesRegistrados() {
			List<Person^>^ myClientesList = Controller::QueryAllClients();

			dgvclientes->Rows->Clear();
			for (int i = 0; i < myClientesList->Count; i++) {
				dgvclientes->Rows->Add(gcnew array<String^>{
					"" + myClientesList[i]->DocNumber,
						myClientesList[i]->Name,
						"" + myClientesList[i]->Email,
						"" + myClientesList[i]->PhoneNumber

				});
			}


		}
	private: System::Void CLIENTES_REGISTRADOS_Load(System::Object^ sender, System::EventArgs^ e) {
		
		//CleanControls_sale_form();
		ShowClientesRegistrados();
	}
		   
		   
private: System::Void dgvclientes_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
