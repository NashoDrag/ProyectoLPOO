#include "pch.h"

#include "salesController.h"

int salesController::Controller::AddMedicine(Medicine^ medicine)
{
    medicineList->Add(medicine);

    return medicine->getId();
}

Medicine^ salesController::Controller::QueryMedicineById(int medicineId)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->getId() == medicineId)
            return medicineList[i];
    return nullptr;
}

List<Medicine^>^ salesController::Controller::QueryAllMedicines()
{
    return medicineList;
}

int salesController::Controller::UpdateMedicine(Medicine^ medicine)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->getId() == medicine->getId()) {
            medicineList[i] = medicine;
            return medicine->getId();
        }
    return 0;
}

int salesController::Controller::DeleteProduct(int medicineId)
{
    for (int i = 0; i < medicineList->Count; i++)
        if (medicineList[i]->getId() == medicineId) {
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
