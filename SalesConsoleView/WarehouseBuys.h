#pragma once

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de WarehouseBuys
	/// </summary>
	public ref class WarehouseBuys : public System::Windows::Forms::Form
	{
	public:
		WarehouseBuys(void)
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
		~WarehouseBuys()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ GridWarehouseSellers;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ cmbManagerContactMedicine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WareHouseContactRUC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WareHouseContactAdmin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WareHouseContactAddress;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->GridWarehouseSellers = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->cmbManagerContactMedicine = (gcnew System::Windows::Forms::ComboBox());
			this->WareHouseContactRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WareHouseContactAdmin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WareHouseContactAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridWarehouseSellers))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Medicamento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cantidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(414, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Posibles  Vendedores:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(369, 35);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Realizar Pedido";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// GridWarehouseSellers
			// 
			this->GridWarehouseSellers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->GridWarehouseSellers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->WareHouseContactRUC,
					this->WareHouseContactAdmin, this->WareHouseContactAddress
			});
			this->GridWarehouseSellers->Location = System::Drawing::Point(418, 67);
			this->GridWarehouseSellers->Name = L"GridWarehouseSellers";
			this->GridWarehouseSellers->RowHeadersWidth = 62;
			this->GridWarehouseSellers->RowTemplate->Height = 28;
			this->GridWarehouseSellers->Size = System::Drawing::Size(618, 173);
			this->GridWarehouseSellers->TabIndex = 6;
			this->GridWarehouseSellers->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WarehouseBuys::dataGridView1_CellContentClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 26);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(169, 214);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 26);
			this->textBox3->TabIndex = 9;
			// 
			// cmbManagerContactMedicine
			// 
			this->cmbManagerContactMedicine->FormattingEnabled = true;
			this->cmbManagerContactMedicine->Location = System::Drawing::Point(169, 67);
			this->cmbManagerContactMedicine->Name = L"cmbManagerContactMedicine";
			this->cmbManagerContactMedicine->Size = System::Drawing::Size(220, 28);
			this->cmbManagerContactMedicine->TabIndex = 10;
			// 
			// WareHouseContactRUC
			// 
			this->WareHouseContactRUC->HeaderText = L"RUC";
			this->WareHouseContactRUC->MinimumWidth = 8;
			this->WareHouseContactRUC->Name = L"WareHouseContactRUC";
			// 
			// WareHouseContactAdmin
			// 
			this->WareHouseContactAdmin->HeaderText = L"Gerente de Venta";
			this->WareHouseContactAdmin->MinimumWidth = 8;
			this->WareHouseContactAdmin->Name = L"WareHouseContactAdmin";
			this->WareHouseContactAdmin->Width = 150;
			// 
			// WareHouseContactAddress
			// 
			this->WareHouseContactAddress->HeaderText = L"Email";
			this->WareHouseContactAddress->MinimumWidth = 8;
			this->WareHouseContactAddress->Name = L"WareHouseContactAddress";
			this->WareHouseContactAddress->Width = 300;
			// 
			// WarehouseBuys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 331);
			this->Controls->Add(this->cmbManagerContactMedicine);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->GridWarehouseSellers);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"WarehouseBuys";
			this->Text = L"WarehouseBuys";
			this->Load += gcnew System::EventHandler(this, &WarehouseBuys::WarehouseBuys_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GridWarehouseSellers))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void WarehouseBuys_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
