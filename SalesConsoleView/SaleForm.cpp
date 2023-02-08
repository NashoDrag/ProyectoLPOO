#include "pch.h"
#include "SaleForm.h"
#include "MainForm.h"


System::Void SalesConsoleView::SaleForm::updatabot_Click(System::Object^ sender, System::EventArgs^ e) {

	if (label2->Text == "Sin cliente") {
		Cliente = Controller::QueryClientById(0);
	}
	if (dgvDetails->Rows->Count == 0 || textBox11->Text->Trim() == "0") {
		MessageBox::Show("Tiene que agregar un producto");
		return;
	}
	//medicamento = Controller::QueryMedicineById(txtCustomer->Text);
	/*if () {

	}*/
	Sale^ sale = gcnew Sale();
	sale->Id = Controller::QueryLastSaleId() + 1;
	sale->Person = Cliente;
	sale->Date = dateTimePicker1->Text;
	//sale->Vendedor = (Vendedor^)MainForm::employee;
	sale->Total = Double::Parse(textBox11->Text);
	sale->SaleDetails = gcnew List<Detalle_Pedido^>();
	//Recorrer todos las filas del grid para armar los detalles de venta
	//y añadir cada detalle de venta a SaleDetails
	for (int i = 0; i < dgvDetails->RowCount - 1; i++) {
		Detalle_Pedido^ saleDetail = gcnew Detalle_Pedido();
		int MedicineId = Int32::Parse(dgvDetails->Rows[i]->Cells[0]->Value->ToString());
		saleDetail->Id = i + 1;
		saleDetail->Medicine = Controller::QueryMedicineById(MedicineId);
		saleDetail->UnitPrice = Convert::ToDouble(dgvDetails->Rows[i]->Cells[2]->Value->ToString());
		saleDetail->Quantity = Convert::ToInt32(dgvDetails->Rows[i]->Cells[3]->Value->ToString());
		saleDetail->SubTotal = Convert::ToDouble(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
		sale->SaleDetails->Add(saleDetail);
	}
	// 
	//Completar el RegisterSale
	Controller::RegisterSale(sale);
	MessageBox::Show("Se ha registrado la venta exitosamente.");
}



	

