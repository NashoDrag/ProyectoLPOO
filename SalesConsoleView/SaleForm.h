#pragma once
#include "CLIENTES_REGISTRADOS.h"
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
	/// Resumen de SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	private:
		Person^ cliente;
		Medicine^ medicamento;
	public:
		SaleForm(void)
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
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ COLUM_MEDICAMENTO;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PRECIO_COLUMNA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CANT_COL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col_SUBTOTAL;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aRCHIVOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uPDATEDATAToolStripMenuItem;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ asasasToolStripMenuItem;
	private: System::Windows::Forms::Button^ updatabot;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COLUM_MEDICAMENTO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRECIO_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Col_SUBTOTAL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aRCHIVOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"EMAIL";
			this->label3->Click += gcnew System::EventHandler(this, &SaleForm::label3_Click);
			// 
			this->label3->TabIndex = 2;
			this->label3->Text = L"EMAIL";
			this->label3->Click += gcnew System::EventHandler(this, &SaleForm::label3_Click);
			// 
			this->label3->TabIndex = 2;
			this->label3->Text = L"EMAIL";
			this->label3->Click += gcnew System::EventHandler(this, &SaleForm::label3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ID_COLUMNA,
					this->COLUM_MEDICAMENTO, this->PRECIO_COLUMNA, this->CANT_COL, this->Col_SUBTOTAL
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 343);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(960, 274);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dataGridView1_CellContentClick);
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dataGridView1_CellValueChanged);
			// 
			// ID_COLUMNA
			// 
			this->ID_COLUMNA->HeaderText = L"ID";
			this->ID_COLUMNA->MinimumWidth = 8;
			this->ID_COLUMNA->Name = L"ID_COLUMNA";
			this->ID_COLUMNA->Width = 50;
			// 
			// COLUM_MEDICAMENTO
			// 
			this->COLUM_MEDICAMENTO->HeaderText = L"MEDICAMENTO";
			this->COLUM_MEDICAMENTO->MinimumWidth = 8;
			this->COLUM_MEDICAMENTO->Name = L"COLUM_MEDICAMENTO";
			this->COLUM_MEDICAMENTO->Width = 250;
			// 
			// PRECIO_COLUMNA
			// 
			this->PRECIO_COLUMNA->HeaderText = L"PRECIO UNITARIO";
			this->PRECIO_COLUMNA->MinimumWidth = 8;
			this->PRECIO_COLUMNA->Name = L"PRECIO_COLUMNA";
			this->PRECIO_COLUMNA->Width = 150;
			// 
			this->label4->Location = System::Drawing::Point(4, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label5->Location = System::Drawing::Point(7, 254);
			this->label4->Text = L"TELEFONO";
			// 
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"TELEFONO";
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"PRECIO UNITARIO";
			this->label8->Click += gcnew System::EventHandler(this, &SaleForm::label8_Click);
			// 
			this->button1->Text = L"AGREGAR MEDICAMENTO";
			this->label8->Text = L"PRECIO UNITARIO";
			this->label8->Click += gcnew System::EventHandler(this, &SaleForm::label8_Click);
			// 
			this->label8->TabIndex = 8;
			this->label8->Text = L"PRECIO UNITARIO";
			this->button2->Location = System::Drawing::Point(677, 455);
			// 
			// button1
			// 
			this->button1->Text = L"AGREGAR MEDICAMENTO";
			this->button1->Name = L"button1";
			this->button2->Location = System::Drawing::Point(276, 283);
			this->button1->TabIndex = 9;
			this->button1->Text = L"AGREGAR MEDICAMENTO";
			this->button1->UseVisualStyleBackColor = true;
			this->button2->Location = System::Drawing::Point(677, 455);
			// 
			// button2
			// 
			this->button3->Text = L"ELIMINAR MEDICAMENTO";
			this->button2->Name = L"button2";
			this->button3->Click += gcnew System::EventHandler(this, &SaleForm::button3_Click);
			this->textBox3->Location = System::Drawing::Point(608, 200);
			// 
			this->textBox9->Location = System::Drawing::Point(608, 167);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(202, 20);
			this->textBox9->TabIndex = 23;
			// 
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(202, 20);
			this->textBox9->TabIndex = 23;
			// 
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(202, 20);
			this->textBox9->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(674, 355);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 20);
			this->label10->TabIndex = 24;
			this->label10->Text = L"SUBTOTAL:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(747, 355);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(89, 20);
			this->textBox10->TabIndex = 25;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(674, 399);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"TOTAL:";
			this->label11->Click += gcnew System::EventHandler(this, &SaleForm::label11_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(747, 396);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(89, 20);
			this->textBox11->TabIndex = 27;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aRCHIVOToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(846, 24);
			this->menuStrip1->TabIndex = 28;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aRCHIVOToolStripMenuItem
			// 
			this->aRCHIVOToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->uPDATEDATAToolStripMenuItem,
					this->asasasToolStripMenuItem
			});
			this->aRCHIVOToolStripMenuItem->Name = L"aRCHIVOToolStripMenuItem";
			this->aRCHIVOToolStripMenuItem->Size = System::Drawing::Size(105, 29);
			this->aRCHIVOToolStripMenuItem->Text = L"ARCHIVO";
			// 
			// uPDATEDATAToolStripMenuItem
			// 
			this->uPDATEDATAToolStripMenuItem->Name = L"uPDATEDATAToolStripMenuItem";
			this->uPDATEDATAToolStripMenuItem->Size = System::Drawing::Size(227, 34);
			this->uPDATEDATAToolStripMenuItem->Text = L"UPDATE DATA";
			this->uPDATEDATAToolStripMenuItem->Click += gcnew System::EventHandler(this, &SaleForm::uPDATEDATAToolStripMenuItem_Click);
			// 
			// asasasToolStripMenuItem
			// 
			this->asasasToolStripMenuItem->Name = L"asasasToolStripMenuItem";
			this->asasasToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->asasasToolStripMenuItem->Text = L"asasas";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// updatabot
			// 
			this->updatabot->Location = System::Drawing::Point(504, 473);
			this->updatabot->Name = L"updatabot";
			this->updatabot->Size = System::Drawing::Size(133, 30);
			this->updatabot->TabIndex = 31;
			this->updatabot->Text = L"UPDATE DATA";
			this->updatabot->UseVisualStyleBackColor = true;
			this->updatabot->Click += gcnew System::EventHandler(this, &SaleForm::updatabot_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 118);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 20);
			this->textBox1->TabIndex = 33;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(519, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 38);
			this->button4->TabIndex = 34;
			this->button4->Text = L"BUSCAR";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SaleForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(519, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 38);
			this->button5->TabIndex = 35;
			this->button5->Text = L"+Cliente";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SaleForm::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 121);
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(47, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 30;
			this->label1->Text = L"FECHA";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(125, 46);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(294, 20);
			this->dateTimePicker1->TabIndex = 31;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"CLIENTE:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 20);
			this->textBox1->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(346, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"SIN CLIENTE";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(595, 62);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(146, 36);
			this->button4->TabIndex = 35;
			this->button4->Text = L"BUSCAR CLIENTE";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SaleForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(595, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(146, 35);
			this->button5->TabIndex = 36;
			this->button5->Text = L"+ CLIENTE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &SaleForm::button5_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(171, 186);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(235, 20);
			this->textBox2->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 13);
			this->label4->TabIndex = 38;
			this->label4->Text = L"ID/NOMBRE MEDICAMENTO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(298, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"SIN MEDICAMENTO";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(595, 218);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 36);
			this->button6->TabIndex = 40;
			this->button6->Text = L"BUSCAR MEDICAMENTO";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SaleForm::button6_Click);
			// 
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L" DNI CLIENTE :";
			// 
			// comboBox1
			this->button6->Text = L"BUSCAR MEDICAMENTO";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SaleForm::button6_Click);
			// 
			this->button6->Text = L"BUSCAR MEDICAMENTO";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &SaleForm::button6_Click);
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(846, 533);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label4);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
		//agregamos mediamento al grid
		
		if (textBox2->Text->Trim() == "") {
			MessageBox::Show("busque el medicamento!");
		}
		medicamento = Controller::QueryMedicineByName(textBox2->Text);
		Medicine^ med = gcnew Medicine();
		med->id = medicamento->id;
		med->name = medicamento->name;
		med->price = medicamento->price;
		Controller::AddProduct_sale(med);
		textBox2->Text = "";
		Addandshowpedido();
		//dataGridView1->Rows->Clear();
		
			//medicamento = Controller::QueryMedicineByName(textBox2->Text);
			//medicamento = Controller::QueryMedicineByName(textBox2->Text);	
		
		
		/*dataGridView1->Rows->Clear();
		
		dataGridView1->Rows->Add(gcnew array<String^>{
				"" + medicamento->id,
					medicamento->name,
					"" + medicamento->price,
					"" ,
					"" 
			});*/
		
		
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}



					"" 
			});*/
		
		
					"" 
			});*/
		
		
	}
		   void FillCmbMedicines() {
			   comboBox1->Items->Clear();
			   List <Medicine^>^ MedicineList = Controller::QueryAllMedicines();
			   for (int i = 0; i < MedicineList->Count; i++) {
				   //cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
				   comboBox1->Items->Add(MedicineList[i]->name);
			   }
		   }
		   private: Void RefreshTotalAmounts() {
			   double total = 0;
			   for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				   total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			   textBox10->Text = "" + (total * (1 - 0));
			   //txtTax->Text = "" + (total * IGV);
			   textBox11->Text = "" + total;
		   }
		   void Addandshowpedido() {
			   List <Medicine^>^ NewMedicineList = Controller::QueryAllProducts_sale();
			for (int i = 0; i < NewMedicineList->Count; i++) {
				dataGridView1->Rows->Add(gcnew array<String^>{
					"" + NewMedicineList[i]->id,
						NewMedicineList[i]->name,
						"" + NewMedicineList[i]->price
						//"" + myProductList[i]->PriceMaj,
						//"" + myProductList[i]->Stock
				});
			   }
		   }
	private: System::Void SaleForm_Load(System::Object^ sender, System::EventArgs^ e) {
		FillCmbMedicines();
	}

	
	private: System::Void dgvDetails_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	}
		   /*void FillMedicinesAtributtes() {
			   txtID->Clear();
			   txtStock->Clear();
			   txtprecio->Clear();
			   List <Medicine^>^ MedicineList = Controller::QueryAllMedicines();
			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < MedicineList->Count; i++) {
				   dataGridView1->Rows->Add(gcnew array<String^>{
					   "" + MedicineList[i]->id,
						   MedicineList[i]->name,
						   "" + MedicineList[i]->PriceMin,
						   "" + MedicineList[i]->PriceMaj,
						   "" + MedicineList[i]->Stock
				   });
			   }

			}*/
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//seleeccionas una medicina y automaticamente se debe llenar el stock, precio e id del producto


	}
	private: System::Void uPDATEDATAToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//presionas y sube los datos del cliente A LA lista de clientes registrados
		//CLIENTES_REGISTRADOS^ clientsForm = gcnew CLIENTES_REGISTRADOS();
		//saleForm->MdiParent = this;
		/*clientsForm->Show();
		Person^ cliente = gcnew Person();
		cliente->Name= txtname->Text;
		cliente->DocNumber = txtdni->Text;
		cliente->Email = txtemail->Text;
		cliente->PhoneNumber = txtphone->Text;
		Controller::UpdateClient(cliente);
		CleanControls_sale_form();*/
		//ShowClientesRegistrados();
		
	}

		   /*void CleanControls_sale_form() {
			   txtname->Clear();
			   txtdni->Clear();
			   txtemail->Clear();
			   txtphone->Clear();
			   
		   }*/
		   /*void ShowClientesRegistrados() {
			   List<Person^>^ myClientesList = Controller::QueryAllClients();

			   dataGridView1->Rows->Clear();
			   for (int i = 0; i < myClientesList->Count; i++) {
				   dataGridView1->Rows->Add(gcnew array<String^>{
					   "" + myClientesList[i]->DocNumber,
						   myClientesList[i]->Name,
						   "" + myClientesList[i]->Email,
						   "" + myClientesList[i]->PhoneNumber
						   
				   });
			   }


		   }*/
private: System::Void updatabot_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//te lleva a la ventana donde agregaremos un cliente
	CustomerForm^ registracliente = gcnew CustomerForm();
	//registracliente->MdiParent = this;
	registracliente->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//BUSCAMOS EN EL CUSTOMER FORM SI EXISTE EL CLIENTE

	Cliente = Controller::QueryClientByDNI(textBox1->Text);
	if (Cliente != nullptr) {
		if (Cliente->GetType() == Person::typeid)
			label2 ->Text = Cliente->DocNumber + " - " + Cliente->Name +
			" " ;
		else
			label2->Text = Cliente->DocNumber + " - " + Cliente->Name;
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   public: Void AddMedicineToSaleDetails(Medicine^ m) {
		   for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
			   int MedicineId = Convert::ToInt32(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
			   if (m->id == MedicineId) {
				   int quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
				   quantity++;
				   dgvDetails->Rows[i]->Cells[3]->Value = quantity;
				   dgvDetails->Rows[i]->Cells[4]->Value = quantity *
					   Double::Parse(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
				   RefreshTotalAmounts();
				   return;
			   }
		   }
		   dgvDetails->Rows->Add(gcnew array<String^> {
			   Convert::ToString(m->id),
				   m->name,
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		CLIENTES_REGISTRADOS^ customerForm = gcnew CLIENTES_REGISTRADOS();
		customerForm->ShowDialog();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//buscar cliente usando DNI
	cliente = Controller::QueryClientByDocNumber(textBox1->Text);

	if (cliente != nullptr) {
		if (cliente->GetType() == Person::typeid)
			label3->Text = cliente->DocNumber + " - " + cliente->Name +
			" " ;
		else
			label3->Text = cliente->DocNumber + " - " + cliente->Name;
	}
	else {
		MessageBox::Show("Cliente no encontrado!");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//BUSCA MEDICAMENTO POR NOMBRE O DESCRIPCION Y TE ESCRIBE EN EL LABEL EL MEDICAMENTO ENCONTRADO Y SU STOCK
	medicamento = Controller::QueryMedicineByName(textBox2->Text);
	if (medicamento != nullptr) {
		if (medicamento->GetType() == Medicine::typeid)
			label6->Text = medicamento->name + " - " + " Stock : "  + medicamento->quantity +
			" ";
		else
			label6->Text = medicamento->name + " - " + " Stock : " + medicamento->quantity;
	}
	else {
		MessageBox::Show("Medicamento no encontrado!");
	}
	//textBox2->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	Sale^ sale = gcnew Sale();
	sale->Id = Controller::QueryLastSaleId() + 1;
	sale->cliente = label3->Text;
	sale->Total = Double::Parse(textBox11->Text);
	sale->SaleDetails = gcnew List<Detalle_Pedido^>();

	for (int i = 0; i < dataGridView1->RowCount - 1; i++) {
		Detalle_Pedido^ detail = gcnew Detalle_Pedido();
		int medicineId = Int32::Parse(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
		detail->Id = i + 1;
		detail->Medicine = Controller::QueryMedicineById(medicamento->id);
		detail->UnitPrice = Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
		detail->Quantity = Convert::ToInt32(dataGridView1->Rows[i]->Cells[3]->Value->ToString());
		detail->SubTotal = Convert::ToDouble(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		sale->SaleDetails->Add(detail);
	}
	Controller::RegisterSale(sale);
	MessageBox::Show("Se ha registrado la venta exitosamente.");
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//calculamos el total y subtotal

}
private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//calculamos el total y subtotal
	if (dataGridView1->Columns[e->ColumnIndex]->Name == "CANT_COL") {
		dataGridView1->Rows[e->RowIndex]->Cells[4]->Value =
			//Int32::Parse(dgvDetails->CurrentCell->Value->ToString())*
			Int32::Parse(dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString()) *
			Double::Parse(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		RefreshTotalAmounts();
	}
}

	   void RefreshTotalAmounts() {
		   double total = 0;
		   for (int i = 0; i < dataGridView1->RowCount - 1; i++)
			   total += Double::Parse(dataGridView1->Rows[i]->Cells[4]->Value->ToString());
		   textBox10->Text = "" + (total * (1 - 0));
		   //txtTax->Text = "" + (total * IGV);
		   textBox11->Text = "" + total;


	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count == 1) {
		if (dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString()->Trim() != "")
			dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		else
			MessageBox::Show("No se puede eliminar una fila vacía.");
	}
	else
		MessageBox::Show("Para eliminar un producto debe seleccionar toda la fila.");
}
};
				   Convert::ToString(m->price)
		   });
		   RefreshTotalAmounts();
	   }

private: System::Void dgvDetails_CellValueChanged(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDetails->Columns[e->ColumnIndex]->Name == "CANT_COL") {
		
	}
	};
	else
		MessageBox::Show("Para eliminar un producto debe seleccionar toda la fila.");
}
};
	else
		MessageBox::Show("Para eliminar un producto debe seleccionar toda la fila.");
}
};
}
