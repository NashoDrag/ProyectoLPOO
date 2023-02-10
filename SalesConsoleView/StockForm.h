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
	private: System::Windows::Forms::TextBox^ txtStockPresentation;

	private: System::Windows::Forms::TextBox^ txtStockFabricacion;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ txtStockVolumen;

	private: System::Windows::Forms::TextBox^ txtStockPeso;

	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtStockIngrediente;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtStockCaracteristica;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtStockMarca;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ OptStockType;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtStockName;

	private: System::Windows::Forms::Button^ btnSetImage;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbStockPhoto;

	private: System::Windows::Forms::TextBox^ txtStockQuantity;

	private: System::Windows::Forms::TextBox^ txtStockPrice;



	private: System::Windows::Forms::TextBox^ txtStockDescription;



	private: System::Windows::Forms::TextBox^ txtStockId;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::DataGridView^ dgvStock;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockBrand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockDetail;













	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtStockPresentation = (gcnew System::Windows::Forms::TextBox());
			this->txtStockFabricacion = (gcnew System::Windows::Forms::TextBox());
			this->txtStockVolumen = (gcnew System::Windows::Forms::TextBox());
			this->txtStockPeso = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtStockIngrediente = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtStockCaracteristica = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtStockMarca = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->OptStockType = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtStockName = (gcnew System::Windows::Forms::TextBox());
			this->btnSetImage = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbStockPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtStockQuantity = (gcnew System::Windows::Forms::TextBox());
			this->txtStockPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtStockDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtStockId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dgvStock = (gcnew System::Windows::Forms::DataGridView());
			this->StockId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StockBrand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StockDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StockDetail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTime = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStockPhoto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->BeginInit();
			this->SuspendLayout();
			// 
			// txtStockPresentation
			// 
			this->txtStockPresentation->Location = System::Drawing::Point(553, 282);
			this->txtStockPresentation->Margin = System::Windows::Forms::Padding(2);
			this->txtStockPresentation->Name = L"txtStockPresentation";
			this->txtStockPresentation->Size = System::Drawing::Size(197, 20);
			this->txtStockPresentation->TabIndex = 107;
			// 
			// txtStockFabricacion
			// 
			this->txtStockFabricacion->Location = System::Drawing::Point(536, 332);
			this->txtStockFabricacion->Margin = System::Windows::Forms::Padding(2);
			this->txtStockFabricacion->Name = L"txtStockFabricacion";
			this->txtStockFabricacion->Size = System::Drawing::Size(198, 20);
			this->txtStockFabricacion->TabIndex = 105;
			// 
			// txtStockVolumen
			// 
			this->txtStockVolumen->Location = System::Drawing::Point(218, 299);
			this->txtStockVolumen->Margin = System::Windows::Forms::Padding(2);
			this->txtStockVolumen->Name = L"txtStockVolumen";
			this->txtStockVolumen->Size = System::Drawing::Size(60, 20);
			this->txtStockVolumen->TabIndex = 104;
			// 
			// txtStockPeso
			// 
			this->txtStockPeso->Location = System::Drawing::Point(106, 299);
			this->txtStockPeso->Margin = System::Windows::Forms::Padding(2);
			this->txtStockPeso->Name = L"txtStockPeso";
			this->txtStockPeso->Size = System::Drawing::Size(53, 20);
			this->txtStockPeso->TabIndex = 103;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(579, 319);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 13);
			this->label15->TabIndex = 102;
			this->label15->Text = L"Manufacturado por:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(422, 282);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(127, 13);
			this->label13->TabIndex = 100;
			this->label13->Text = L"Formato de presentación:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(166, 299);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(51, 13);
			this->label12->TabIndex = 99;
			this->label12->Text = L"Volumen:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(34, 297);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 98;
			this->label11->Text = L"Peso neto:";
			// 
			// txtStockIngrediente
			// 
			this->txtStockIngrediente->Location = System::Drawing::Point(106, 247);
			this->txtStockIngrediente->Margin = System::Windows::Forms::Padding(2);
			this->txtStockIngrediente->Multiline = true;
			this->txtStockIngrediente->Name = L"txtStockIngrediente";
			this->txtStockIngrediente->Size = System::Drawing::Size(285, 48);
			this->txtStockIngrediente->TabIndex = 97;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(34, 258);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 13);
			this->label10->TabIndex = 96;
			this->label10->Text = L"Ingredientes:";
			// 
			// txtStockCaracteristica
			// 
			this->txtStockCaracteristica->Location = System::Drawing::Point(106, 207);
			this->txtStockCaracteristica->Margin = System::Windows::Forms::Padding(2);
			this->txtStockCaracteristica->Multiline = true;
			this->txtStockCaracteristica->Name = L"txtStockCaracteristica";
			this->txtStockCaracteristica->Size = System::Drawing::Size(285, 36);
			this->txtStockCaracteristica->TabIndex = 95;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(34, 210);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 94;
			this->label9->Text = L"Característic:";
			// 
			// txtStockMarca
			// 
			this->txtStockMarca->Location = System::Drawing::Point(106, 178);
			this->txtStockMarca->Margin = System::Windows::Forms::Padding(2);
			this->txtStockMarca->Name = L"txtStockMarca";
			this->txtStockMarca->Size = System::Drawing::Size(285, 20);
			this->txtStockMarca->TabIndex = 93;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 180);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 13);
			this->label8->TabIndex = 92;
			this->label8->Text = L"Marca:";
			// 
			// OptStockType
			// 
			this->OptStockType->FormattingEnabled = true;
			this->OptStockType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Oral", L"Inyectables", L"Uso externo, antisépticos y Desinfectantes" });
			this->OptStockType->Location = System::Drawing::Point(106, 150);
			this->OptStockType->Margin = System::Windows::Forms::Padding(2);
			this->OptStockType->Name = L"OptStockType";
			this->OptStockType->Size = System::Drawing::Size(285, 21);
			this->OptStockType->TabIndex = 91;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(113, 36);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 90;
			this->label7->Text = L"Nombre:";
			// 
			// txtStockName
			// 
			this->txtStockName->Location = System::Drawing::Point(162, 36);
			this->txtStockName->Margin = System::Windows::Forms::Padding(2);
			this->txtStockName->Name = L"txtStockName";
			this->txtStockName->Size = System::Drawing::Size(229, 20);
			this->txtStockName->TabIndex = 89;
			// 
			// btnSetImage
			// 
			this->btnSetImage->Location = System::Drawing::Point(558, 210);
			this->btnSetImage->Name = L"btnSetImage";
			this->btnSetImage->Size = System::Drawing::Size(159, 23);
			this->btnSetImage->TabIndex = 88;
			this->btnSetImage->Text = L"Agregar imagen";
			this->btnSetImage->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(614, 381);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(140, 23);
			this->btnDelete->TabIndex = 87;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &StockForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(317, 381);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(156, 23);
			this->btnUpdate->TabIndex = 86;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StockForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(36, 381);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(148, 23);
			this->btnAdd->TabIndex = 85;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StockForm::btnAdd_Click);
			// 
			// pbStockPhoto
			// 
			this->pbStockPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbStockPhoto->Location = System::Drawing::Point(536, 12);
			this->pbStockPhoto->Name = L"pbStockPhoto";
			this->pbStockPhoto->Size = System::Drawing::Size(203, 192);
			this->pbStockPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbStockPhoto->TabIndex = 84;
			this->pbStockPhoto->TabStop = false;
			// 
			// txtStockQuantity
			// 
			this->txtStockQuantity->Location = System::Drawing::Point(284, 127);
			this->txtStockQuantity->Name = L"txtStockQuantity";
			this->txtStockQuantity->Size = System::Drawing::Size(108, 20);
			this->txtStockQuantity->TabIndex = 83;
			// 
			// txtStockPrice
			// 
			this->txtStockPrice->Location = System::Drawing::Point(106, 124);
			this->txtStockPrice->Name = L"txtStockPrice";
			this->txtStockPrice->Size = System::Drawing::Size(53, 20);
			this->txtStockPrice->TabIndex = 81;
			// 
			// txtStockDescription
			// 
			this->txtStockDescription->Location = System::Drawing::Point(106, 71);
			this->txtStockDescription->Multiline = true;
			this->txtStockDescription->Name = L"txtStockDescription";
			this->txtStockDescription->Size = System::Drawing::Size(285, 46);
			this->txtStockDescription->TabIndex = 80;
			// 
			// txtStockId
			// 
			this->txtStockId->Location = System::Drawing::Point(53, 36);
			this->txtStockId->Name = L"txtStockId";
			this->txtStockId->Size = System::Drawing::Size(44, 20);
			this->txtStockId->TabIndex = 79;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(216, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 78;
			this->label6->Text = L"Cantidad";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Precio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Descripción";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 74;
			this->label2->Text = L"Tipo:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
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
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(788, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dgvStock
			// 
			this->dgvStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStock->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->StockId, this->StockBrand,
					this->StockDescription, this->StockDetail
			});
			this->dgvStock->Location = System::Drawing::Point(11, 421);
			this->dgvStock->Margin = System::Windows::Forms::Padding(2);
			this->dgvStock->Name = L"dgvStock";
			this->dgvStock->RowHeadersWidth = 51;
			this->dgvStock->RowTemplate->Height = 24;
			this->dgvStock->Size = System::Drawing::Size(757, 115);
			this->dgvStock->TabIndex = 108;
			this->dgvStock->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StockForm::dgvStock_CellClick);
			// 
			// StockId
			// 
			this->StockId->HeaderText = L"Id";
			this->StockId->MinimumWidth = 6;
			this->StockId->Name = L"StockId";
			this->StockId->ReadOnly = true;
			this->StockId->Width = 50;
			// 
			// StockBrand
			// 
			this->StockBrand->HeaderText = L"Nombre";
			this->StockBrand->MinimumWidth = 6;
			this->StockBrand->Name = L"StockBrand";
			this->StockBrand->ReadOnly = true;
			this->StockBrand->Width = 150;
			// 
			// StockDescription
			// 
			this->StockDescription->HeaderText = L"Descripción";
			this->StockDescription->MinimumWidth = 6;
			this->StockDescription->Name = L"StockDescription";
			this->StockDescription->ReadOnly = true;
			this->StockDescription->Width = 400;
			// 
			// StockDetail
			// 
			this->StockDetail->HeaderText = L"Stock";
			this->StockDetail->MinimumWidth = 6;
			this->StockDetail->Name = L"StockDetail";
			this->StockDetail->ReadOnly = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 335);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 13);
			this->label5->TabIndex = 110;
			this->label5->Text = L"Fecha de vencimiento:";
			// 
			// dateTime
			// 
			this->dateTime->Location = System::Drawing::Point(162, 331);
			this->dateTime->Margin = System::Windows::Forms::Padding(2);
			this->dateTime->Name = L"dateTime";
			this->dateTime->Size = System::Drawing::Size(229, 20);
			this->dateTime->TabIndex = 111;
			// 
			// StockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 547);
			this->Controls->Add(this->dateTime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvStock);
			this->Controls->Add(this->txtStockPresentation);
			this->Controls->Add(this->txtStockFabricacion);
			this->Controls->Add(this->txtStockVolumen);
			this->Controls->Add(this->txtStockPeso);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtStockIngrediente);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtStockCaracteristica);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtStockMarca);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->OptStockType);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtStockName);
			this->Controls->Add(this->btnSetImage);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbStockPhoto);
			this->Controls->Add(this->txtStockQuantity);
			this->Controls->Add(this->txtStockPrice);
			this->Controls->Add(this->txtStockDescription);
			this->Controls->Add(this->txtStockId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StockForm";
			this->Text = L"StockForm";
			this->Load += gcnew System::EventHandler(this, &StockForm::StockForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbStockPhoto))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Medicine^ medicine = gcnew Medicine();
		medicine->id = Convert::ToInt32(txtStockId->Text);
		medicine->name = txtStockName->Text;
		medicine->description = txtStockDescription->Text;
		medicine->price = Convert::ToDouble(txtStockPrice->Text);
		medicine->quantity = Convert::ToInt32(txtStockQuantity->Text);
		medicine->brand = txtStockMarca->Text;
		medicine->characteristica = txtStockCaracteristica->Text;
		medicine->Ingredients = txtStockIngrediente->Text;
		medicine->peso = Convert::ToInt32(txtStockPeso->Text);
		medicine->volumen = Convert::ToInt32(txtStockVolumen->Text);
		medicine->PresentationFormat = txtStockPresentation->Text;
		medicine->manufacturado = txtStockFabricacion->Text;
		medicine->Status = 'A';
		if (pbStockPhoto != nullptr && pbStockPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbStockPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			medicine->photo = ms->ToArray();
		}

		Controller::AddMedicine(medicine);
		CleanStockMedicine();
		ShowStockMedicine();
	}
		   void ShowStockMedicine() {
			   List<Medicine^>^ myMedicineList = Controller::QueryAllMedicines();

			   dgvStock->Rows->Clear();
			   for (int i = 0; i < myMedicineList->Count; i++) {
				   dgvStock->Rows->Add(gcnew array<String^>{
					   "" + myMedicineList[i]->id,
						   myMedicineList[i]->name,
						   myMedicineList[i]->description,
						   "" + myMedicineList[i]->quantity
				   });
			   }
		   }

		   void CleanStockMedicine() {
			   txtStockId->Clear();
			   txtStockName->Clear();
			   txtStockDescription->Clear();
			   txtStockPrice->Clear();
			   txtStockQuantity->Clear();
			   txtStockMarca->Clear();
			   txtStockCaracteristica->Clear();
			   txtStockIngrediente->Clear();
			   txtStockPeso->Clear();
			   txtStockVolumen->Clear();
			   txtStockPresentation->Clear();
			   txtStockFabricacion->Clear();
			   pbStockPhoto->Image = nullptr;
		   }
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Medicine^ medicine = gcnew Medicine();

		medicine->id = Convert::ToInt32(txtStockId->Text);
		medicine->name = txtStockName->Text;
		medicine->description = txtStockDescription->Text;
		medicine->price = Convert::ToDouble(txtStockPrice->Text);
		medicine->quantity = Convert::ToInt32(txtStockQuantity->Text);
		medicine->brand = txtStockMarca->Text;
		medicine->characteristica = txtStockCaracteristica->Text;
		medicine->Ingredients = txtStockIngrediente->Text;
		medicine->peso = Convert::ToInt32(txtStockPeso->Text);
		medicine->volumen = Convert::ToInt32(txtStockVolumen->Text);
		medicine->PresentationFormat = txtStockPresentation->Text;
		medicine->manufacturado = txtStockFabricacion->Text;
		medicine->Status = 'A';
		if (pbStockPhoto != nullptr && pbStockPhoto->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbStockPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			medicine->photo = ms->ToArray();			
		}
		Controller::UpdateMedicine(medicine);
		CleanStockMedicine();
		ShowStockMedicine();
	}
	private: System::Void StockForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowStockMedicine();
	}
	private: System::Void dgvStock_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndex = dgvStock->SelectedCells[0]->RowIndex;
		int MedicineId = Convert::ToInt32(dgvStock->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Medicine^ med = Controller::QueryMedicineById(MedicineId);
		//textBox2->Text = "" + p->getId();
		txtStockId->Text = "" + med->id;
		txtStockName->Text = " " + med->name;
		txtStockDescription->Text = med->description;
		txtStockQuantity->Text = " " + med->quantity;
		txtStockPrice->Text = " " + med->price;
		txtStockMarca->Text = med->brand;
		txtStockCaracteristica->Text = med->characteristica;
		txtStockIngrediente->Text = med->Ingredients;
		txtStockPeso->Text = " " + med->peso;
		txtStockVolumen->Text = " " + med->volumen;
		txtStockPresentation->Text = " " + med->PresentationFormat;
		txtStockFabricacion->Text = " " + med->manufacturado;


	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtStockId->Text->Trim() == "") {
			MessageBox::Show("Debe seleccionar un MEDICAMENTO");
			return;
		}
		Controller::DeleteProduct(Convert::ToInt32(txtStockId->Text->Trim()));
		CleanStockMedicine();
		ShowStockMedicine();
	}
	};
	};
