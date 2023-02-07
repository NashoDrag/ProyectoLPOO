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
	/// Resumen de StockForm
	/// </summary>
	public ref class StockForm : public System::Windows::Forms::Form
	{
	public:
		StockForm(void)
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
		~StockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPresentation;
	protected:
	private: System::Windows::Forms::TextBox^ txtUse;
	private: System::Windows::Forms::TextBox^ txtFabricacion;
	private: System::Windows::Forms::TextBox^ txtVolumen;
	private: System::Windows::Forms::TextBox^ txtPeso;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtIngrediente;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtCaracteristica;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtMarca;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ OptType;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::TextBox^ txtPriceMaj;
	private: System::Windows::Forms::TextBox^ txtPriceMin;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtProductId;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->txtPresentation = (gcnew System::Windows::Forms::TextBox());
			this->txtUse = (gcnew System::Windows::Forms::TextBox());
			this->txtFabricacion = (gcnew System::Windows::Forms::TextBox());
			this->txtVolumen = (gcnew System::Windows::Forms::TextBox());
			this->txtPeso = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtIngrediente = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtCaracteristica = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->OptType = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMaj = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceMin = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtProductId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtPresentation
			// 
			this->txtPresentation->Location = System::Drawing::Point(564, 365);
			this->txtPresentation->Name = L"txtPresentation";
			this->txtPresentation->Size = System::Drawing::Size(261, 22);
			this->txtPresentation->TabIndex = 107;
			// 
			// txtUse
			// 
			this->txtUse->Location = System::Drawing::Point(140, 403);
			this->txtUse->Multiline = true;
			this->txtUse->Name = L"txtUse";
			this->txtUse->Size = System::Drawing::Size(380, 50);
			this->txtUse->TabIndex = 106;
			// 
			// txtFabricacion
			// 
			this->txtFabricacion->Location = System::Drawing::Point(564, 425);
			this->txtFabricacion->Name = L"txtFabricacion";
			this->txtFabricacion->Size = System::Drawing::Size(262, 22);
			this->txtFabricacion->TabIndex = 105;
			// 
			// txtVolumen
			// 
			this->txtVolumen->Location = System::Drawing::Point(291, 362);
			this->txtVolumen->Name = L"txtVolumen";
			this->txtVolumen->Size = System::Drawing::Size(58, 22);
			this->txtVolumen->TabIndex = 104;
			// 
			// txtPeso
			// 
			this->txtPeso->Location = System::Drawing::Point(141, 362);
			this->txtPeso->Name = L"txtPeso";
			this->txtPeso->Size = System::Drawing::Size(69, 22);
			this->txtPeso->TabIndex = 103;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(561, 406);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(122, 16);
			this->label15->TabIndex = 102;
			this->label15->Text = L"Manufacturado por:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(45, 403);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(89, 16);
			this->label14->TabIndex = 101;
			this->label14->Text = L"Modo de uso:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(388, 368);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(160, 16);
			this->label13->TabIndex = 100;
			this->label13->Text = L"Formato de presentación:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(222, 365);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 16);
			this->label12->TabIndex = 99;
			this->label12->Text = L"Volumen:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(45, 365);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 16);
			this->label11->TabIndex = 98;
			this->label11->Text = L"Peso neto:";
			// 
			// txtIngrediente
			// 
			this->txtIngrediente->Location = System::Drawing::Point(141, 304);
			this->txtIngrediente->Multiline = true;
			this->txtIngrediente->Name = L"txtIngrediente";
			this->txtIngrediente->Size = System::Drawing::Size(379, 44);
			this->txtIngrediente->TabIndex = 97;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(45, 317);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 16);
			this->label10->TabIndex = 96;
			this->label10->Text = L"Ingredientes:";
			// 
			// txtCaracteristica
			// 
			this->txtCaracteristica->Location = System::Drawing::Point(141, 255);
			this->txtCaracteristica->Multiline = true;
			this->txtCaracteristica->Name = L"txtCaracteristica";
			this->txtCaracteristica->Size = System::Drawing::Size(379, 43);
			this->txtCaracteristica->TabIndex = 95;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(45, 258);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(84, 16);
			this->label9->TabIndex = 94;
			this->label9->Text = L"Característic:";
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(141, 219);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(379, 22);
			this->txtMarca->TabIndex = 93;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(45, 222);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 16);
			this->label8->TabIndex = 92;
			this->label8->Text = L"Marca:";
			// 
			// OptType
			// 
			this->OptType->FormattingEnabled = true;
			this->OptType->Location = System::Drawing::Point(141, 185);
			this->OptType->Name = L"OptType";
			this->OptType->Size = System::Drawing::Size(379, 24);
			this->OptType->TabIndex = 91;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(151, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 16);
			this->label7->TabIndex = 90;
			this->label7->Text = L"Nombre:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(216, 41);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(304, 22);
			this->txtName->TabIndex = 89;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(595, 270);
			this->btnSetImage->Margin = System::Windows::Forms::Padding(4);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(212, 28);
			this->btnSetImage->TabIndex = 88;
			this->btnSetImage->Text = L"Actualizar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(608, 469);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(187, 28);
			this->btnDelete->TabIndex = 87;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(316, 469);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(4);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(208, 28);
			this->btnUpdate->TabIndex = 86;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(48, 469);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(197, 28);
			this->btnAdd->TabIndex = 85;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(556, 39);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(4);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(269, 211);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 84;
			this->pbPhoto->TabStop = false;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(437, 152);
			this->txtStock->Margin = System::Windows::Forms::Padding(4);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(83, 22);
			this->txtStock->TabIndex = 83;
			// 
			// txtPriceMaj
			// 
			this->txtPriceMaj->Location = System::Drawing::Point(316, 152);
			this->txtPriceMaj->Margin = System::Windows::Forms::Padding(4);
			this->txtPriceMaj->Name = L"txtPriceMaj";
			this->txtPriceMaj->Size = System::Drawing::Size(58, 22);
			this->txtPriceMaj->TabIndex = 82;
			// 
			// txtPriceMin
			// 
			this->txtPriceMin->Location = System::Drawing::Point(141, 152);
			this->txtPriceMin->Margin = System::Windows::Forms::Padding(4);
			this->txtPriceMin->Name = L"txtPriceMin";
			this->txtPriceMin->Size = System::Drawing::Size(66, 22);
			this->txtPriceMin->TabIndex = 81;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(141, 87);
			this->txtDescription->Margin = System::Windows::Forms::Padding(4);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(379, 56);
			this->txtDescription->TabIndex = 80;
			// 
			// txtProductId
			// 
			this->txtProductId->Location = System::Drawing::Point(71, 41);
			this->txtProductId->Margin = System::Windows::Forms::Padding(4);
			this->txtProductId->Name = L"txtProductId";
			this->txtProductId->Size = System::Drawing::Size(57, 22);
			this->txtProductId->TabIndex = 79;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(388, 155);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 16);
			this->label6->TabIndex = 78;
			this->label6->Text = L"Stock";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(222, 155);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 16);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Precio (may.)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 152);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 16);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Precio (min.)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 90);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 185);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 16);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Tipo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 73;
			this->label1->Text = L"Id";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(862, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(101, 534);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(625, 103);
			this->dataGridView1->TabIndex = 108;
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 673);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtPresentation);
			this->Controls->Add(this->txtUse);
			this->Controls->Add(this->txtFabricacion);
			this->Controls->Add(this->txtVolumen);
			this->Controls->Add(this->txtPeso);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtIngrediente);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtCaracteristica);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMarca);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->OptType);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtPriceMaj);
			this->Controls->Add(this->txtPriceMin);
			this->Controls->Add(this->txtDescription);
			this->Controls->Add(this->txtProductId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
