#include "pch.h"

#include "salesController.h"
using namespace SalesPersistance;

int salesController::Controller::AddMedicine(Medicine^ medicine)
{
    medicineList->Add(medicine);

    //return medicine->getId();
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
            Persistance::PersistXML("Medicines.xml", medicineList);
            return medicine->id;
        }
    return 0;
}
List<Medicine^>^ salesController::Controller::QueryMedicinesByNameOrDescription(String^ value)
{
    medicineList = (List<Medicine^>^)Persistance::LoadXMLData("Medicines.xml");
    List<Medicine^>^ newMedicineList = gcnew List<Medicine^>();
    for (int i = 0; i < medicineList->Count; i++) {
        if (medicineList[i]->name->Contains(value) || medicineList[i]->description->Contains(value))
            newMedicineList->Add(medicineList[i]);
    }
    return newMedicineList;
}



int salesController::Controller::DeleteMedicine(int medicineId)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->id == medicineId) {
            medicineList->RemoveAt(i);
            Persistance::PersistXML("Medicines.xml", medicineList);
            return medicineId;
        }
    return 0;
}

Medicine^ salesController::Controller::QueryMedicineByName(String^ medicineName)
{
    medicineList = (List<Medicine^>^)Persistance::LoadXMLData("Medicines.xml");
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineName == medicineList[i]->name) {
            return  medicineList[i];
        }
    return nullptr;
    // TODO: Insertar una instrucción "return" aquí
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

List<Sale^>^ salesController::Controller::QueryAllSales()
{
    saleList = (List<Sale^>^)Persistance::LoadXMLData("sales.xml");
    return saleList;
}

int salesController::Controller::QueryLastSaleId()
{
    saleList = (List<Sale^>^)Persistance::LoadXMLData("sales.xml");
    if (saleList->Count == 0) return 0;
    else return saleList[saleList->Count - 1]->Id;
}

void salesController::Controller::RegisterSale(Sale^ sale)
{
    saleList->Add(sale);
    Persistance::PersistXML("sales.xml", saleList);
}

int salesController::Controller::AddProduct_sale(Medicine^ product)
{
    medicineproductList->Add(product);
    return product->id;
}

Medicine^ salesController::Controller::QueryProductById_sale(int productId)
{
    for (int i = 0; i < medicineproductList->Count; i++)
        if (medicineproductList[i]->id == productId)
            return medicineproductList[i];
    return nullptr;
    // TODO: Insertar una instrucción "return" aquí
}

List<Medicine^>^ salesController::Controller::QueryAllProducts_sale()
{
    return medicineproductList;
    // TODO: Insertar una instrucción "return" aquí
}

int salesController::Controller::DeleteProduct_sale(int productId)
{
    for (int i = 0; i < medicineproductList->Count; i++)
        if (medicineproductList[i]->id == productId) {
            medicineproductList->RemoveAt(i);
            return productId;
        }
    return 0;
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

int salesController::Controller::AddClient(Person^ cliente)
{
    ClientList->Add(cliente);
    Persistance::PersistXML("Clientes.xml", ClientList);

    return cliente->Id;
}

Person^ salesController::Controller::QueryClientById(int clienteId)
{
    ClientList = (List<Person^>^)Persistance::LoadXMLData("Clientes.xml");
    for (int i = 0; i < ClientList->Count; i++)
        //if (medicineList[i]->getId() == medicineId)
        if (ClientList[i]->Id == clienteId)
            return ClientList[i];
    return nullptr;
    // TODO: Insertar una instrucción "return" aquí
}

List<Person^>^ salesController::Controller::QueryAllClients()
{
    ClientList = (List<Person^>^)Persistance::LoadXMLData("Clientes.xml");
    return ClientList;
    // TODO: Insertar una instrucción "return" aquí
}

int salesController::Controller::UpdateClient(Person^ cliente)
{
    for (int i = 0; i < ClientList->Count; i++)
        if (ClientList[i]->Id == cliente->Id) {
            ClientList[i] = cliente;
            //Persistance::Persist("products.txt", productList);
            Persistance::PersistXML("Clientes.xml", ClientList);
            //Persistance::PersistBinary("products.bin", ClientList);
            return cliente->Id;
        }
    return 0;
}

int salesController::Controller::DeleteClient(int clienteId)
{
    for (int i = 0; i < ClientList->Count; i++)
        if (ClientList[i]->Id == clienteId) {
            ClientList->RemoveAt(i);
            //Persistance::Persist("products.txt", productList);
            Persistance::PersistXML("Clientes.xml", ClientList);
            //Persistance::PersistBinary("products.bin", ClientList);
            return clienteId;
        }
    return 0;
}

Person^ salesController::Controller::QueryClientByDocNumber(String^ docNumber)
{
    ClientList = (List<Person^>^)Persistance::LoadXMLData("Clientes.xml");
    for (int i = 0; i < ClientList->Count; i++)
        if (docNumber == ClientList[i]->DocNumber) {
            return  ClientList[i];
        }
    return nullptr;
    // TODO: Insertar una instrucción "return" aquí
}




/*Miau*/