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

int salesController::Controller::AddIndustry(Industria_Proveedora^ industry)
{
    corporationList->Add(industry);

    //return medicine->getId();
    Persistance::PersistXML("WarhouseManagerContacts.xml", corporationList);

    return industry->Id_corporation;
}

Industria_Proveedora^ salesController::Controller::QueryIndustryById(int industryId)
{
    corporationList = (List<Industria_Proveedora^>^)Persistance::LoadXMLData("WarhouseManagerContacts.xml");
    for (int i = 0; i < corporationList->Count; i++)
        //if (medicineList[i]->getId() == medicineId)
        if (corporationList[i]->Id_corporation == industryId)
            return corporationList[i];
    return nullptr;
}

List<Industria_Proveedora^>^ salesController::Controller::QueryAllIndustries()
{
    corporationList = (List<Industria_Proveedora^>^)Persistance::LoadXMLData("WarhouseManagerContacts.xml");
    return corporationList;
}

int salesController::Controller::UpdateIndustry(Industria_Proveedora^ industry)
{
    for (int i = 0; i < corporationList->Count; i++)
        if (corporationList[i]->Id_corporation == industry->Id_corporation) {
            corporationList[i] = industry;
            return industry->Id_corporation;
        }
    return 0;
}

int salesController::Controller::DeleteIndustry(int industryId)
{
    for (int i = 0; i < corporationList->Count; i++)
        if (corporationList[i]->Id_corporation == industryId) {
            corporationList->RemoveAt(i);
            return industryId;
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
    // TODO: Insertar una instrucci�n "return" aqu�
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

int salesController::Controller::AddSalary(Jefe_de_almacen^ salary)
{
    supervisorList->Add(salary);
    Persistance::PersistXML("EmployeeSalary.xml", supervisorList);

    return salary->salaryId;
}

int salesController::Controller::UpdateSalary(Jefe_de_almacen^ salary)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorList[i]->salaryId == salary->salaryId) {
            supervisorList[i] = salary;
            return salary->salaryId;
        }
    return 0;
}

int salesController::Controller::DeleteSalary(int salaryID)
{
    for (int i = 0; i < supervisorList->Count; i++)
        if (supervisorList[i]->salaryId == salaryID) {
            supervisorList->RemoveAt(i);
            return salaryID;
        }
    return 0;
}

Jefe_de_almacen^ salesController::Controller::QuerySalary(int salaryID)
{
    supervisorList = (List<Jefe_de_almacen^>^)Persistance::LoadXMLData("EmployeeSalary.xml");
    for (int i = 0; i < supervisorList->Count; i++)
        //if (medicineList[i]->getId() == medicineId)
        if (supervisorList[i]->salaryId == salaryID)
            return supervisorList[i];
    return nullptr;
}


