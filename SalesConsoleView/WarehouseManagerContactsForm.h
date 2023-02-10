#pragma once
#include "WarehouseManager.h"

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace salesController;
	using namespace salesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de WarehouseManagerContactsForm
	/// </summary>
	public ref class WarehouseManagerContactsForm : public System::Windows::Forms::Form
	{
		Form^ refForm; //Variable de instancia
	public:
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~WarehouseManagerContactsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ gridWarehouseContacts;
	protected:

	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContactsRUC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContactsNameOfMedicine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContacsProductStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContacsProductPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContactsAdmin;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ WarehouseManagerContactsEmail;










	protected:

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
			this->gridWarehouseContacts = (gcnew System::Windows::Forms::DataGridView());
			this->WarehouseManagerContactsRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WarehouseManagerContactsNameOfMedicine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WarehouseManagerContacsProductStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WarehouseManagerContacsProductPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WarehouseManagerContactsAdmin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->WarehouseManagerContactsEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridWarehouseContacts))->BeginInit();
			this->SuspendLayout();
			// 
			// gridWarehouseContacts
			// 
			this->gridWarehouseContacts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->gridWarehouseContacts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->WarehouseManagerContactsRUC,
					this->WarehouseManagerContactsNameOfMedicine, this->WarehouseManagerContacsProductStock, this->WarehouseManagerContacsProductPrice,
					this->WarehouseManagerContactsAdmin, this->WarehouseManagerContactsEmail
			});
			this->gridWarehouseContacts->Location = System::Drawing::Point(12, 12);
			this->gridWarehouseContacts->Name = L"gridWarehouseContacts";
			this->gridWarehouseContacts->RowHeadersWidth = 62;
			this->gridWarehouseContacts->RowTemplate->Height = 28;
			this->gridWarehouseContacts->Size = System::Drawing::Size(1321, 669);
			this->gridWarehouseContacts->TabIndex = 0;
			this->gridWarehouseContacts->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &WarehouseManagerContactsForm::dataGridView1_CellContentClick);
			// 
			// WarehouseManagerContactsRUC
			// 
			this->WarehouseManagerContactsRUC->HeaderText = L"RUC";
			this->WarehouseManagerContactsRUC->MinimumWidth = 8;
			this->WarehouseManagerContactsRUC->Name = L"WarehouseManagerContactsRUC";
			this->WarehouseManagerContactsRUC->Width = 150;
			// 
			// WarehouseManagerContactsNameOfMedicine
			// 
			this->WarehouseManagerContactsNameOfMedicine->HeaderText = L"Medicamento";
			this->WarehouseManagerContactsNameOfMedicine->MinimumWidth = 8;
			this->WarehouseManagerContactsNameOfMedicine->Name = L"WarehouseManagerContactsNameOfMedicine";
			this->WarehouseManagerContactsNameOfMedicine->Width = 200;
			// 
			// WarehouseManagerContacsProductStock
			// 
			this->WarehouseManagerContacsProductStock->HeaderText = L"Stock (miles)";
			this->WarehouseManagerContacsProductStock->MinimumWidth = 8;
			this->WarehouseManagerContacsProductStock->Name = L"WarehouseManagerContacsProductStock";
			this->WarehouseManagerContacsProductStock->Width = 150;
			// 
			// WarehouseManagerContacsProductPrice
			// 
			this->WarehouseManagerContacsProductPrice->HeaderText = L"Precio";
			this->WarehouseManagerContacsProductPrice->MinimumWidth = 8;
			this->WarehouseManagerContacsProductPrice->Name = L"WarehouseManagerContacsProductPrice";
			this->WarehouseManagerContacsProductPrice->Width = 150;
			// 
			// WarehouseManagerContactsAdmin
			// 
			this->WarehouseManagerContactsAdmin->HeaderText = L"Nombre (Gerente de ventas)";
			this->WarehouseManagerContactsAdmin->MinimumWidth = 8;
			this->WarehouseManagerContactsAdmin->Name = L"WarehouseManagerContactsAdmin";
			this->WarehouseManagerContactsAdmin->Width = 200;
			// 
			// WarehouseManagerContactsEmail
			// 
			this->WarehouseManagerContactsEmail->HeaderText = L"Email";
			this->WarehouseManagerContactsEmail->MinimumWidth = 8;
			this->WarehouseManagerContactsEmail->Name = L"WarehouseManagerContactsEmail";
			this->WarehouseManagerContactsEmail->Width = 400;
			// 
			// WarehouseManagerContactsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1345, 694);
			this->Controls->Add(this->gridWarehouseContacts);
			this->Name = L"WarehouseManagerContactsForm";
			this->Text = L"WarehouseManagerContactsForm";
			this->Load += gcnew System::EventHandler(this, &WarehouseManagerContactsForm::WarehouseManagerContactsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridWarehouseContacts))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void WarehouseManagerContactsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowWareManagerContacts();
}
	   void ShowWareManagerContacts() {
		   List<Industria_Proveedora^>^ myContactsIndustryList = Controller::QueryAllIndustries();

		   gridWarehouseContacts->Rows->Clear();
		   for (int i = 0; i < myContactsIndustryList->Count; i++) {
			   gridWarehouseContacts->Rows->Add(gcnew array<String^>{
				   "" + myContactsIndustryList[i]->RUC,
					   myContactsIndustryList[i]->Product,
					   "" + myContactsIndustryList[i]->ProductStock,
					   "" + myContactsIndustryList[i]->ProductPrice,
					   "" + myContactsIndustryList[i]->Admin,
					   "" + myContactsIndustryList[i]->Address,


			   });
		   }
	   }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
