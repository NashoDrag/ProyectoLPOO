#include "pch.h"

#include "salesController.h"
using namespace SalesPersistance;

int salesController::Controller::AddMedicine(Medicine^ medicine)
{
    medicineList->Add(medicine);

    
    Persistance::PersistXML("Medicines.xml", medicineList);

    return medicine->id;


}

Medicine^ salesController::Controller::QueryMedicineById(int medicineId)
{
    medicineList = (List<Medicine^>^)Persistance::LoadXMLData("Medicines.xml");
    for (int i = 0; i < medicineList->Count; i++)
        //if (medicineList[i]->getId() == medicineId)
        if (medicineList[i]->id == medicineId)
            return medicineList[i];
    return nullptr;
}

List<Medicine^>^ salesController::Controller::QueryAllMedicines()
{
    medicineList = (List<Medicine^>^)Persistance::LoadXMLData("Medicines.xml");
    return medicineList;
}

int salesController::Controller::UpdateMedicine(Medicine^ medicine)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->id == medicine->id) {
            medicineList[i] = medicine;
            return medicine->id;
        }
    return 0;
}

int salesController::Controller::DeleteProduct(int medicineId)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->id == medicineId) {
            medicineList->RemoveAt(i);
            return medicineId;
        }
    return 0;
}

Employee^ salesController::Controller::Login(String^ username, String^ password)
{
    Employee^ employee;

    if (username == "jefealmacen" && password == "password") {
        employee = gcnew Employee();
        employee->Id = 1;
        employee->Name = "jefe";
        employee->LastName = "almacen";
        employee->Email = "johan.baldeon@pucp.edu.pe";
        employee->Address = "Elm Street 666";
        employee->DocNumber = "66666666";
        employee->PhoneNumber = "999999999";
        employee->Username = "jefealmacen";
    }
    if (username == "vendedor" && password == "password") {
        employee = gcnew Employee();
        employee->Id = 1;
        employee->Name = "vendedor";
        employee->LastName = "e";
        employee->Email = "johan.baldeon@pucp.edu.pe";
        employee->Address = "Elm Street 666";
        employee->DocNumber = "66666666";
        employee->PhoneNumber = "999999999";
        employee->Username = "vendedor";
    }
    if (username == "operario" && password == "password") {
        employee = gcnew Employee();
        employee->Id = 1;
        employee->Name = "operario";
        employee->LastName = "almacen";
        employee->Email = "johan.baldeon@pucp.edu.pe";
        employee->Address = "Elm Street 666";
        employee->DocNumber = "66666666";
        employee->PhoneNumber = "999999999";
        employee->Username = "operario";
    }
    return employee;
    // TODO: Insertar una instrucción "return" aquí
}

int salesController::Controller::AddSalesman(Vendedor^ vendedor)
{
    //vendedor->Status = 'A';
    salesmanList->Add(vendedor);
    return 1;
}

int salesController::Controller::UpdateSalesman(Vendedor^ vendedor)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (vendedor->Id == salesmanList[i]->Id) {
            //vendedor->Status = 'A';
            salesmanList[i] = vendedor;
            return 1;
        }
    return 0;
}

int salesController::Controller::DeleteSalesman(int vendedorId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (vendedorId == salesmanList[i]->Id) {
            salesmanList->RemoveAt(i);
            //salesmanList[i]->Status = 'I';
            return 1;
        }
    return 0;
}

Vendedor^ salesController::Controller::QuerySalesmanById(int vendedorId)
{
    for (int i = 0; i < salesmanList->Count; i++)
        if (vendedorId == salesmanList[i]->Id) {
            return salesmanList[i];
        }
    return nullptr;
}

List<Vendedor^>^ salesController::Controller::QueryAllSalesmen()
{
    List<Vendedor^>^ activeSalesmanList = gcnew List<Vendedor^>();
    for (int i = 0; i < salesmanList->Count; i++) {
        /*if (salesmanList[i]->Status == 'A') {
            activeSalesmanList->Add(salesmanList[i]);
        }*/
    }
    return activeSalesmanList;
}


