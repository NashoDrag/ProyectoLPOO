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




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DNI_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NOMBRE_COLUM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EMAIL_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PHONE_COLUMNA;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DNI_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NOMBRE_COLUM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EMAIL_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PHONE_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvclientes
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->DNI_COLUMNA, this->NOMBRE_COLUM, this->EMAIL_COLUMNA, this->PHONE_COLUMNA
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 207);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(903, 132);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CLIENTES_REGISTRADOS::dataGridView1_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"NOMBRE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"EMAIL";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"TELEFONO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"ID:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(91, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(91, 50);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(237, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(91, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(237, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(91, 129);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(237, 20);
			this->textBox5->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(91, 165);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(237, 20);
			this->textBox6->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(777, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 30);
			this->button1->TabIndex = 13;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(777, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 31);
			this->button2->TabIndex = 14;
			this->button2->Text = L"MODIFICAR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(777, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 29);
			this->button3->TabIndex = 15;
			this->button3->Text = L"ELIMINAR";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(384, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"direccion";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(440, 19);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(213, 20);
			this->textBox7->TabIndex = 17;
			// 
			// CLIENTES_REGISTRADOS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(927, 396);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvclientes);
			this->Name = L"CLIENTES_REGISTRADOS";
			this->Text = L"CLIENTES_REGISTRADOS";
			this->Load += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::CLIENTES_REGISTRADOS_Load);
			this->Click += gcnew System::EventHandler(this, &CLIENTES_REGISTRADOS::CLIENTES_REGISTRADOS_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CLIENTES_REGISTRADOS_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowClientes();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Person^ cliente = gcnew Person();
	//cliente->setId(Convert::ToInt32(txtProductId->Text));
	cliente->Id = Convert::ToInt32(textBox2->Text);
	cliente->DocNumber = textBox3->Text;
	cliente->Name = textBox4->Text;
	cliente->Email = textBox5->Text;
	cliente->PhoneNumber = textBox6->Text;
	cliente->Address = textBox7->Text;

	Controller::AddClient(cliente);

	CleanControls();
	ShowClientes();
}

	   void CleanControls() {
		   textBox2->Clear();
		   textBox3->Clear();
		   textBox4->Clear();
		   textBox5->Clear();
		   textBox6->Clear();

	   }
	   void ShowClientes() {
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Person^ cliente = gcnew Person();
	//cliente->setId(Convert::ToInt32(txtProductId->Text));
	cliente->Id = Convert::ToInt32(textBox2->Text);
	cliente->DocNumber = textBox3->Text;
	cliente->Name = textBox4->Text;
	cliente->Email = textBox5->Text;
	cliente->PhoneNumber = textBox6->Text;
	cliente->Address = textBox7->Text;

	Controller::UpdateClient(cliente);

	CleanControls();
	ShowClientes();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text->Trim() == "") {
		MessageBox::Show("Debe seleccionar un cliente");
		return;
	}
	Controller::DeleteClient(Convert::ToInt32(textBox2->Text->Trim()));
	CleanControls();
	ShowClientes();
}
private: System::Void CLIENTES_REGISTRADOS_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //cuando le das clik a la fila que quieres eliminar o modificar te muestra los valores agregados en el grid
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dataGridView1->SelectedCells[0]->RowIndex;
	int clientId = Convert::ToInt32(dataGridView1->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Person^ c = Controller::QueryClientById(clientId);
	//textBox2->Text = "" + p->getId();
	textBox2->Text = "" + c->Id;
	textBox3->Text = " " + c->DocNumber;
	textBox4->Text = c->Name;
	textBox5->Text = c->Email;
	textBox6->Text = "" + c->PhoneNumber;
	textBox7->Text = c->Address;
	
}
};
}
