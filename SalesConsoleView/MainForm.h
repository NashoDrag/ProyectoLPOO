#pragma once
#include "LoginForm.h"
#include "SaleForm.h"
#include "ProductSearchForm.h"
#include "CLIENTES_REGISTRADOS.h"
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

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		static Employee^ employee;

		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicamentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asistenciaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fallosToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ contactosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ informeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asistenciaToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ quejasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesRegistradosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estadoDePedidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ jefeAlmacenToolStripMenuItem;













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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asistenciaToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quejasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jefeAlmacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fallosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesRegistradosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estadoDePedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->archivoToolStripMenuItem,
					this->medicamentosToolStripMenuItem, this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(725, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(88, 29);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::salirToolStripMenuItem_Click);
			// 
			// medicamentosToolStripMenuItem
			// 
			this->medicamentosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientoToolStripMenuItem,
					this->pedidosToolStripMenuItem, this->ventaToolStripMenuItem, this->jefeAlmacenToolStripMenuItem
			});
			this->medicamentosToolStripMenuItem->Name = L"medicamentosToolStripMenuItem";
			this->medicamentosToolStripMenuItem->Size = System::Drawing::Size(148, 29);
			this->medicamentosToolStripMenuItem->Text = L"Mantenimiento";
			this->medicamentosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::medicamentosToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->pedidosToolStripMenuItem1,
					this->contactosToolStripMenuItem1, this->informeToolStripMenuItem, this->stockToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(231, 34);
			this->mantenimientoToolStripMenuItem->Text = L"Medicamentos";
			// 
			// pedidosToolStripMenuItem1
			// 
			this->pedidosToolStripMenuItem1->Name = L"pedidosToolStripMenuItem1";
			this->pedidosToolStripMenuItem1->Size = System::Drawing::Size(194, 34);
			this->pedidosToolStripMenuItem1->Text = L"Pedidos";
			// 
			// contactosToolStripMenuItem1
			// 
			this->contactosToolStripMenuItem1->Name = L"contactosToolStripMenuItem1";
			this->contactosToolStripMenuItem1->Size = System::Drawing::Size(194, 34);
			this->contactosToolStripMenuItem1->Text = L"Contactos";
			// 
			// informeToolStripMenuItem
			// 
			this->informeToolStripMenuItem->Name = L"informeToolStripMenuItem";
			this->informeToolStripMenuItem->Size = System::Drawing::Size(194, 34);
			this->informeToolStripMenuItem->Text = L"Informe";
			this->informeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::informeToolStripMenuItem_Click);
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(194, 34);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// pedidosToolStripMenuItem
			// 
			this->pedidosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->asistenciaToolStripMenuItem2,
					this->quejasToolStripMenuItem
			});
			this->pedidosToolStripMenuItem->Name = L"pedidosToolStripMenuItem";
			this->pedidosToolStripMenuItem->Size = System::Drawing::Size(231, 34);
			this->pedidosToolStripMenuItem->Text = L"Personal";
			// 
			// asistenciaToolStripMenuItem2
			// 
			this->asistenciaToolStripMenuItem2->Name = L"asistenciaToolStripMenuItem2";
			this->asistenciaToolStripMenuItem2->Size = System::Drawing::Size(192, 34);
			this->asistenciaToolStripMenuItem2->Text = L"Asistencia";
			// 
			// quejasToolStripMenuItem
			// 
			this->quejasToolStripMenuItem->Name = L"quejasToolStripMenuItem";
			this->quejasToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->quejasToolStripMenuItem->Text = L"Quejas";
			// 
			// ventaToolStripMenuItem
			// 
			this->ventaToolStripMenuItem->Name = L"ventaToolStripMenuItem";
			this->ventaToolStripMenuItem->Size = System::Drawing::Size(231, 34);
			this->ventaToolStripMenuItem->Text = L"Venta";
			this->ventaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ventaToolStripMenuItem_Click);
			// 
			// jefeAlmacenToolStripMenuItem
			// 
			this->jefeAlmacenToolStripMenuItem->Name = L"jefeAlmacenToolStripMenuItem";
			this->jefeAlmacenToolStripMenuItem->Size = System::Drawing::Size(231, 34);
			this->jefeAlmacenToolStripMenuItem->Text = L"Jefe Almacen";
			this->jefeAlmacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::jefeAlmacenToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->asistenciaToolStripMenuItem,
					this->fallosToolStripMenuItem, this->clientesRegistradosToolStripMenuItem, this->estadoDePedidosToolStripMenuItem
			});
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(98, 29);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// asistenciaToolStripMenuItem
			// 
			this->asistenciaToolStripMenuItem->Name = L"asistenciaToolStripMenuItem";
			this->asistenciaToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->asistenciaToolStripMenuItem->Text = L"Asistencia";
			// 
			// fallosToolStripMenuItem
			// 
			this->fallosToolStripMenuItem->Name = L"fallosToolStripMenuItem";
			this->fallosToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->fallosToolStripMenuItem->Text = L"Fallos";
			// 
			// clientesRegistradosToolStripMenuItem
			// 
			this->clientesRegistradosToolStripMenuItem->Name = L"clientesRegistradosToolStripMenuItem";
			this->clientesRegistradosToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->clientesRegistradosToolStripMenuItem->Text = L"Clientes Registrados";
			this->clientesRegistradosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::clientesRegistradosToolStripMenuItem_Click);
			// 
			// estadoDePedidosToolStripMenuItem
			// 
			this->estadoDePedidosToolStripMenuItem->Name = L"estadoDePedidosToolStripMenuItem";
			this->estadoDePedidosToolStripMenuItem->Size = System::Drawing::Size(273, 34);
			this->estadoDePedidosToolStripMenuItem->Text = L"Estado de Pedidos";
			this->estadoDePedidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::estadoDePedidosToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 594);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void medicamentosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog();
}
private: System::Void ventaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaleForm^ saleForm = gcnew SaleForm();
	saleForm->MdiParent = this;
	saleForm->Show();
}
private: System::Void informeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductSearchForm^ productsearchform = gcnew ProductSearchForm(this);
	productsearchform->MdiParent = this;
	productsearchform->Show();
}
private: System::Void clientesRegistradosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CLIENTES_REGISTRADOS^ clientesregistrados = gcnew CLIENTES_REGISTRADOS();
	clientesregistrados->MdiParent = this;
	clientesregistrados->Show();
}
private: System::Void jefeAlmacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ayudaToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	WarehouseManager^ jefe = gcnew WarehouseManager();
	jefe->MdiParent = this;
	jefe->Show();
}
};
}
