#pragma once
#include "CLIENTES_REGISTRADOS.h"
#include "CustomerForm.h"
#include "ProductSearchForm.h"
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
		Person^ Cliente;
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
	private: System::Windows::Forms::DataGridView^ dgvDetails;
	protected:

	protected:








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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


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
			this->components = (gcnew System::ComponentModel::Container());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->ID_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->COLUM_MEDICAMENTO = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PRECIO_COLUMNA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CANT_COL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col_SUBTOTAL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aRCHIVOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uPDATEDATAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asasasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->updatabot = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &SaleForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 119);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 174);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 20);
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
			this->dataGridView1->Location = System::Drawing::Point(12, 330);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(960, 274);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dataGridView1_CellContentClick);
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
			// CANT_COL
			// 
			this->CANT_COL->HeaderText = L"CANTIDAD";
			this->CANT_COL->MinimumWidth = 8;
			this->CANT_COL->Name = L"CANT_COL";
			this->CANT_COL->Width = 150;
			// 
			// Col_SUBTOTAL
			// 
			this->Col_SUBTOTAL->HeaderText = L"SUB TOTAL";
			this->Col_SUBTOTAL->MinimumWidth = 8;
			this->Col_SUBTOTAL->Name = L"Col_SUBTOTAL";
			this->Col_SUBTOTAL->Width = 150;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 223);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"TELEFONO";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 274);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(225, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"MEDICAMENTO ADQUIRIDO";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 374);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"CANTIDAD";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(824, 312);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"STOCK";
			this->label7->Click += gcnew System::EventHandler(this, &SaleForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(735, 368);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"PRECIO UNITARIO";
			this->label8->Click += gcnew System::EventHandler(this, &SaleForm::label8_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 34);
			this->button1->TabIndex = 9;
			this->button1->Text = L"AGREGAR PRODUCTO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SaleForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(414, 435);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 52);
			this->button2->TabIndex = 10;
			this->button2->Text = L"MODIFICAR VENTA";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(520, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 52);
			this->button3->TabIndex = 12;
			this->button3->Text = L"ELIMINAR PRODUCTO";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SaleForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 68);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(351, 26);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(912, 363);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 26);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(912, 308);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 26);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(289, 119);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(350, 26);
			this->textBox4->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(288, 171);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(351, 26);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(289, 220);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(350, 26);
			this->textBox6->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(129, 369);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(216, 26);
			this->textBox8->TabIndex = 20;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(884, 32);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(384, 199);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SaleForm::pictureBox1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(840, 262);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"ID";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(912, 257);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(228, 26);
			this->textBox9->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(674, 358);
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
			this->menuStrip1->Size = System::Drawing::Size(858, 24);
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
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L" DNI CLIENTE :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(164, 204);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(235, 21);
			this->comboBox1->TabIndex = 29;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SaleForm::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(154, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"MEDICAMENTO ADQUIRIDO:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(169, 45);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(257, 20);
			this->dateTimePicker1->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"FECHA TRANSACCION : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(372, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Sin cliente";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &SaleForm::label2_Click);
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 533);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Detalle_Pedido^ detail = gcnew Detalle_Pedido();
		//detail->Medicine->name = comboBox1->SelectedItem->ToString();
		
		/*List<Medicine^>^ MedicineList = Controller::QueryMedicinesByNameOrDescription(comboBox1->SelectedItem->ToString());
		dataGridView1->Rows->Clear();
		for (int i = 0; i < MedicineList->Count; i++) {
			dataGridView1->Rows->Add(gcnew array<String^> {
				"" + MedicineList[i]->id,
					MedicineList[i]->name,
					//Convert::ToString(MedicineList[i]->price),
					Convert::ToString(MedicineList[i]->price)
			});
		}*/
		ProductSearchForm^ productForm = gcnew ProductSearchForm(this);
		productForm->ShowDialog();

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
				   Convert::ToString(m->price),
				   "1",
				   Convert::ToString(m->price)
		   });
		   RefreshTotalAmounts();
	   }

private: System::Void dgvDetails_CellValueChanged(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDetails->Columns[e->ColumnIndex]->Name == "CANT_COL") {
		
		dgvDetails->Rows[e->RowIndex]->Cells[4]->Value =
			//Int32::Parse(dgvDetails->CurrentCell->Value->ToString())*
			Int32::Parse(dgvDetails->Rows[e->RowIndex]->Cells[3]->Value->ToString()) * //cantidad de medicamentos a llevar
			Double::Parse(dgvDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		RefreshTotalAmounts();
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvDetails->SelectedRows->Count == 1) {
		if (dgvDetails->SelectedRows[0]->Cells[0]->Value->ToString()->Trim() != "")
			dgvDetails->Rows->RemoveAt(dgvDetails->SelectedRows[0]->Index);
		else
			MessageBox::Show("No se puede eliminar una fila vacía.");
	}
	else
		MessageBox::Show("Para eliminar un producto debe seleccionar toda la fila.");
}
};
}
