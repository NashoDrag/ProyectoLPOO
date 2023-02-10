#pragma once
#include "WarehouseManagerContactsForm.h"

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace salesModel;
	using namespace salesController;

	/// <summary>
	/// Resumen de WarehouseManager
	/// </summary>
	public ref class WarehouseManager : public System::Windows::Forms::Form
	{
	public:
		WarehouseManager(void)
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
		~WarehouseManager()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ asistenciaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quejasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sueldosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pedidosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ medicinaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ incidentesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quejasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sueldosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pedidosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicinaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->incidentesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->empleadosToolStripMenuItem,
					this->pedidosToolStripMenuItem, this->medicinaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1296, 33);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->asistenciaToolStripMenuItem,
					this->quejasToolStripMenuItem, this->sueldosToolStripMenuItem, this->reporteToolStripMenuItem
			});
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(116, 29);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			// 
			// asistenciaToolStripMenuItem
			// 
			this->asistenciaToolStripMenuItem->Name = L"asistenciaToolStripMenuItem";
			this->asistenciaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->asistenciaToolStripMenuItem->Text = L"Asistencia";
			// 
			// quejasToolStripMenuItem
			// 
			this->quejasToolStripMenuItem->Name = L"quejasToolStripMenuItem";
			this->quejasToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->quejasToolStripMenuItem->Text = L"Quejas";
			// 
			// sueldosToolStripMenuItem
			// 
			this->sueldosToolStripMenuItem->Name = L"sueldosToolStripMenuItem";
			this->sueldosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->sueldosToolStripMenuItem->Text = L"Sueldos";
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// pedidosToolStripMenuItem
			// 
			this->pedidosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pedidosToolStripMenuItem1,
					this->reporteToolStripMenuItem1
			});
			this->pedidosToolStripMenuItem->Name = L"pedidosToolStripMenuItem";
			this->pedidosToolStripMenuItem->Size = System::Drawing::Size(89, 29);
			this->pedidosToolStripMenuItem->Text = L"Clientes";
			// 
			// pedidosToolStripMenuItem1
			// 
			this->pedidosToolStripMenuItem1->Name = L"pedidosToolStripMenuItem1";
			this->pedidosToolStripMenuItem1->Size = System::Drawing::Size(274, 34);
			this->pedidosToolStripMenuItem1->Text = L"Registro de pedidos";
			// 
			// reporteToolStripMenuItem1
			// 
			this->reporteToolStripMenuItem1->Name = L"reporteToolStripMenuItem1";
			this->reporteToolStripMenuItem1->Size = System::Drawing::Size(274, 34);
			this->reporteToolStripMenuItem1->Text = L"Reporte";
			// 
			// medicinaToolStripMenuItem
			// 
			this->medicinaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->almacenToolStripMenuItem,
					this->contactosToolStripMenuItem, this->reporteToolStripMenuItem2
			});
			this->medicinaToolStripMenuItem->Name = L"medicinaToolStripMenuItem";
			this->medicinaToolStripMenuItem->Size = System::Drawing::Size(99, 29);
			this->medicinaToolStripMenuItem->Text = L"Medicina";
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->stockToolStripMenuItem,
					this->incidentesToolStripMenuItem
			});
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(194, 34);
			this->stockToolStripMenuItem->Text = L"Stock";
			// 
			// incidentesToolStripMenuItem
			// 
			this->incidentesToolStripMenuItem->Name = L"incidentesToolStripMenuItem";
			this->incidentesToolStripMenuItem->Size = System::Drawing::Size(194, 34);
			this->incidentesToolStripMenuItem->Text = L"Incidentes";
			// 
			// contactosToolStripMenuItem
			// 
			this->contactosToolStripMenuItem->Name = L"contactosToolStripMenuItem";
			this->contactosToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->contactosToolStripMenuItem->Text = L"Contactos";
			this->contactosToolStripMenuItem->Click += gcnew System::EventHandler(this, &WarehouseManager::contactosToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem2
			// 
			this->reporteToolStripMenuItem2->Name = L"reporteToolStripMenuItem2";
			this->reporteToolStripMenuItem2->Size = System::Drawing::Size(270, 34);
			this->reporteToolStripMenuItem2->Text = L"Reporte";
			// 
			// WarehouseManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1296, 585);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"WarehouseManager";
			this->Text = L"WarehouseManager";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contactosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		WarehouseManagerContactsForm^ contacts = gcnew WarehouseManagerContactsForm();
		contacts->MdiParent = this;
		contacts->Show();
	}
};
}
