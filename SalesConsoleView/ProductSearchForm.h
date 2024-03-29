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
	/// Resumen de ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		ProductSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ProductSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textid;
	private: System::Windows::Forms::TextBox^ textname;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NAMECOL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio_col;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock_col;






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textid = (gcnew System::Windows::Forms::TextBox());
			this->textname = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NAMECOL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripcion:";
			// 
			// textid
			// 
			this->textid->Location = System::Drawing::Point(133, 34);
			this->textid->Name = L"textid";
			this->textid->Size = System::Drawing::Size(233, 20);
			this->textid->TabIndex = 2;
			// 
			// textname
			// 
			this->textname->Location = System::Drawing::Point(133, 80);
			this->textname->Name = L"textname";
			this->textname->Size = System::Drawing::Size(233, 20);
			this->textname->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id_col,
					this->NAMECOL, this->Precio_col, this->Stock_col
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 172);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 140);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dataGridView1_CellClick);
			// 
			// id_col
			// 
			this->id_col->HeaderText = L"ID";
			this->id_col->Name = L"id_col";
			this->id_col->Width = 50;
			// 
			// NAMECOL
			// 
			this->NAMECOL->HeaderText = L"Nombre";
			this->NAMECOL->Name = L"NAMECOL";
			this->NAMECOL->Width = 200;
			// 
			// Precio_col
			// 
			this->Precio_col->HeaderText = L"Precio";
			this->Precio_col->Name = L"Precio_col";
			// 
			// Stock_col
			// 
			this->Stock_col->HeaderText = L"Stock";
			this->Stock_col->Name = L"Stock_col";
			this->Stock_col->Width = 50;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(439, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 29);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProductSearchForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(442, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 20);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(442, 146);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 20);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(442, 187);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 25);
			this->button4->TabIndex = 12;
			this->button4->Text = L"buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ProductSearchForm::button4_Click);
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 379);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textname);
			this->Controls->Add(this->textid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProductSearchForm";
			this->Text = L"ProductSearchForm";
			this->Load += gcnew System::EventHandler(this, &ProductSearchForm::ProductSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProductSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//ShowMedicines();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Medicine^ medicine = gcnew Medicine();
		//medicine->setId(Convert::ToInt32(txtProductId->Text));
		medicine->id = Int32::Parse(textid->Text);
		medicine->name = textname->Text;
		medicine->price = Int32::Parse(textprice->Text);
		medicine->quantity = Int32::Parse(textstock->Text);
		Controller::AddMedicine(medicine);
		CleanControls();
		ShowMedicines();*/
		//boton buscar que mostrar� el producto elegido en el grid

	}
		   /*void ShowMedicines() {
			   List<Medicine^>^ myMedicineList = Controller::QueryAllMedicines();

			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < myMedicineList->Count; i++) {
				   dataGridView1->Rows->Add(gcnew array<String^>{
					   "" + myMedicineList[i]->id,
						   myMedicineList[i]->name,
						   "" + myMedicineList[i]->price,
						   "" + myMedicineList[i]->quantity
				   });
			   }
		   }

		   void CleanControls() {
			   textid->Clear();
			   textname->Clear();
			   textprice->Clear();
			   textstock->Clear();

		   }*/
	};
}

