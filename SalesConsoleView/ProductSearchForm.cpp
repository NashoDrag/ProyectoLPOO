#include "pch.h"
#include "ProductSearchForm.h"
#include "SaleForm.h"

System::Void SalesConsoleView::ProductSearchForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ MedicineId = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Medicine^ m = Controller::QueryMedicineById(Int32::Parse(MedicineId));
		if (refForm->GetType() == SaleForm::typeid)
			((SaleForm^)refForm)->AddMedicineToSaleDetails(m);
	}
	this->Close();
}