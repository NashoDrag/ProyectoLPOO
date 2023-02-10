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
	/// Resumen de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textdni;
	private: System::Windows::Forms::TextBox^ textname;
	private: System::Windows::Forms::TextBox^ textemail;
	private: System::Windows::Forms::TextBox^ textphone;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textid;

	private: System::Windows::Forms::Button^ AGREGAR_BOT;
	private: System::Windows::Forms::Button^ ACTUA_BOT;
	private: System::Windows::Forms::Button^ ELIMINAR_BOT;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;






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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textdni = (gcnew System::Windows::Forms::TextBox());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->textemail = (gcnew System::Windows::Forms::TextBox());
			this->textphone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textid = (gcnew System::Windows::Forms::TextBox());
			this->AGREGAR_BOT = (gcnew System::Windows::Forms::Button());
			this->ACTUA_BOT = (gcnew System::Windows::Forms::Button());
			this->ELIMINAR_BOT = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DNI : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NOMBRE : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"EMAIL : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 241);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"TELEFONO :";
			this->label4->Click += gcnew System::EventHandler(this, &CustomerForm::label4_Click);
			// 
			// textdni
			// 
			this->textdni->Location = System::Drawing::Point(88, 87);
			this->textdni->Name = L"textdni";
			this->textdni->Size = System::Drawing::Size(252, 20);
			this->textdni->TabIndex = 4;
			// 
			// textname
			// 
			this->textname->Location = System::Drawing::Point(88, 135);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(252, 20);
			this->textname->TabIndex = 5;
			// 
			// textemail
			// 
			this->textemail->Location = System::Drawing::Point(88, 186);
			this->textemail->Name = L"textemail";
			this->textemail->Size = System::Drawing::Size(252, 20);
			this->textemail->TabIndex = 6;
			// 
			// textphone
			// 
			this->textphone->Location = System::Drawing::Point(88, 238);
			this->textphone->Name = L"textphone";
			this->textphone->Size = System::Drawing::Size(252, 20);
			this->textphone->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"ID : ";
			// 
			// textid
			// 
			this->textid->Location = System::Drawing::Point(88, 49);
			this->textid->Name = L"textid";
			this->textid->Size = System::Drawing::Size(252, 20);
			this->textid->TabIndex = 9;
			// 
			// AGREGAR_BOT
			// 
			this->AGREGAR_BOT->Location = System::Drawing::Point(578, 70);
			this->AGREGAR_BOT->Name = L"AGREGAR_BOT";
			this->AGREGAR_BOT->Size = System::Drawing::Size(131, 33);
			this->AGREGAR_BOT->TabIndex = 10;
			this->AGREGAR_BOT->Text = L"AGREGAR";
			this->AGREGAR_BOT->UseVisualStyleBackColor = true;
			this->AGREGAR_BOT->Click += gcnew System::EventHandler(this, &CustomerForm::AGREGAR_BOT_Click);
			// 
			// ACTUA_BOT
			// 
			this->ACTUA_BOT->Location = System::Drawing::Point(578, 138);
			this->ACTUA_BOT->Name = L"ACTUA_BOT";
			this->ACTUA_BOT->Size = System::Drawing::Size(131, 37);
			this->ACTUA_BOT->TabIndex = 11;
			this->ACTUA_BOT->Text = L"ACTUALIZAR";
			this->ACTUA_BOT->UseVisualStyleBackColor = true;
			this->ACTUA_BOT->Click += gcnew System::EventHandler(this, &CustomerForm::ACTUA_BOT_Click);
			// 
			// ELIMINAR_BOT
			// 
			this->ELIMINAR_BOT->Location = System::Drawing::Point(578, 222);
			this->ELIMINAR_BOT->Name = L"ELIMINAR_BOT";
			this->ELIMINAR_BOT->Size = System::Drawing::Size(131, 32);
			this->ELIMINAR_BOT->TabIndex = 12;
			this->ELIMINAR_BOT->Text = L"ELIMINAR";
			this->ELIMINAR_BOT->UseVisualStyleBackColor = true;
			this->ELIMINAR_BOT->Click += gcnew System::EventHandler(this, &CustomerForm::ELIMINAR_BOT_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colID,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(4, 308);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(736, 189);
			this->dataGridView1->TabIndex = 13;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dataGridView1_CellContentClick);
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			this->colID->Width = 50;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"DNI";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Email";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 200;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Telefono";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 560);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->ELIMINAR_BOT);
			this->Controls->Add(this->ACTUA_BOT);
			this->Controls->Add(this->AGREGAR_BOT);
			this->Controls->Add(this->textid);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textphone);
			this->Controls->Add(this->textemail);
			this->Controls->Add(this->textname);
			this->Controls->Add(this->textdni);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AGREGAR_BOT_Click(System::Object^ sender, System::EventArgs^ e) {
	//agrega los datos del cliente a la lista de clientes registrados
	Person^ cliente = gcnew Person();
	cliente->Id = Convert::ToInt32(textid->Text);
	cliente->Name = textname->Text;
	cliente->DocNumber = textdni->Text;
	cliente->Email = textemail->Text;
	cliente->PhoneNumber = textphone->Text;
	Controller::AddClient(cliente);
	CleanControls_sale_form();
	showclients();

}
	   void CleanControls_sale_form() {
		   textid->Clear();
		   textname->Clear();
		   textdni->Clear();
		   textemail->Clear();
		   textphone->Clear();

	   }
	   void showclients() {
		   List<Person^>^ myClientList = Controller::QueryAllClients();

		   dataGridView1->Rows->Clear();
		   for (int i = 0; i < myClientList->Count; i++) {
			   dataGridView1->Rows->Add(gcnew array<String^>{
				   "" + myClientList[i]->Id,
					   myClientList[i]->DocNumber,
					   "" + myClientList[i]->Name,
					   "" + myClientList[i]->Email,
					   "" + myClientList[i]->PhoneNumber
			   });
		   }

	   }
private: System::Void ACTUA_BOT_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Person^ p = gcnew Person();
	try {
		if (textid->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vacío.");
			return;
		}
		p->Id = Int32::Parse(textid->Text);
		//p->Gender = rbtnMasc->Checked ? 'M' : 'F';
		p->DocNumber = textdni->Text;
		p->Name = textname->Text;
		p->Email = textemail->Text;
		p->PhoneNumber = textphone->Text;
		
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
		return;
	}*/
	Person^ cliente = gcnew Person();
	cliente->Id = Convert::ToInt32(textid->Text);
	cliente->Name = textname->Text;
	cliente->DocNumber = textdni->Text;
	cliente->Email = textemail->Text;
	cliente->PhoneNumber = textphone->Text;
	//Controller::AddClient(cliente);

	Controller::UpdateClient(cliente);
	CleanControls_sale_form();
	showclients();
	//RefreshPersonsDGV();
	//CleanControls_sale_form();

}
	   

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridView1->SelectedCells[0]->RowIndex;
	int clientId = Convert::ToInt32(dataGridView1->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Person^ p = Controller::QueryClientById(clientId);
	//textid->Text = "" + p->getId();
	textid->Text = "" + p->Id;
	textname->Text = p->Name;
	textdni->Text = p->DocNumber;
	textemail->Text = p->Email;
	textphone->Text = p->PhoneNumber;
	
	

}
private: System::Void ELIMINAR_BOT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textid->Text->Trim() == "") {
		MessageBox::Show("Debe seleccionar un producto");
		return;
	}
	Controller::DeleteClient(Convert::ToInt32(textid->Text->Trim()));
	CleanControls_sale_form();
	showclients();

}
private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	showclients();
}
};
}
