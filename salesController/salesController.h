#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace salesModel;

namespace salesController {
	public ref class Controller
	{
		// TODO: Agregue aquí los métodos de esta clase.
	private:
		static List <Medicine^>^ medicineList = gcnew List<Medicine^>(); // Variable de clase (global) para la lista de productos
		static List <Industria_Proveedora^>^ corporationList = gcnew List<Industria_Proveedora^>(); // Lista de avastecedores
		static List <Vendedor^>^ salesmanList = gcnew List<Vendedor^>(); // Lista de vendedores
		//static List <Manager^>^ ManagerList = gcnew List<Manager^>(); // gerentes de tienda
		static List <Jefe_de_almacen^>^ supervisorList = gcnew List<Jefe_de_almacen^>(); // Lista de supervisores de tienda
		static List <Employee^>^ operatorList = gcnew List<Employee^>(); // Lista de empleados
		static List <Detalle_Pedido^>^ salesList = gcnew List<Detalle_Pedido^>(); // Lista de ventas registradas
		static List <Person^>^ personList = gcnew List<Person^>();

		static List <Sale^>^ sale = gcnew List<Sale^>();
		//static List <Warehouse^>^ warehouse = gcnew List<Warehouse^>();
	public:
		// Metodo CRUD de Medicine
		static int AddMedicine(Medicine^ medicine);
		static Medicine^ QueryMedicineById(int medicineId);
		static List<Medicine^>^ QueryAllMedicines();
		static int UpdateMedicine(Medicine^ medicine);
		static int DeleteProduct(int medicineId);

		// Metodo CRUD de 


		//Autenticación de usuario
		static Employee^ Login(String^ username, String^ password);
	};
}
