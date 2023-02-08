#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace salesModel;
using namespace System::IO;

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
		static List <Person^>^ clientesList = gcnew List<Person^>();  //lista de clientes

		static List <Sale^>^ saleList = gcnew List<Sale^>();
		//static List <Warehouse^>^ warehouse = gcnew List<Warehouse^>();
	public:
		// Metodo CRUD de Medicine
		static int AddMedicine(Medicine^ medicine);
		static Medicine^ QueryMedicineById(int medicineId);
		
		static List<Medicine^>^ QueryAllMedicines();
		static int UpdateMedicine(Medicine^ medicine);
		static int DeleteProduct(int medicineId);

		//Metodo CRUD de la INDUSTRIA PROVEEDORA
		static int AddIndustry(Industria_Proveedora^ industry);
		static int DeleteMedicine(int medicineId);
		static List<Medicine^>^ QueryMedicinesByNameOrDescription(String^ nameDesc);

		//Métodos CRUD de VENDEDOR
		static int AddSalesman(Vendedor^);
		static int UpdateSalesman(Vendedor^);
		static int DeleteSalesman(int vendedorId);
		static Vendedor^ QuerySalesmanById(int vendedorId);
		static List<Vendedor^>^ QueryAllSalesmen();

		// Metodo CRUD de WarehouseManager
		static int AddSalary(Jefe_de_almacen^ salary);
		static int UpdateSalary(Jefe_de_almacen^ salary);
		static int DeleteSalary(int salaryID);
		static Jefe_de_almacen^ QuerySalary(int salaryID);

		

		//metodos CRUD De Clientes
		static int AddClient(Person^ cliente);
		static int UpdateClient(Person^ cliente);
		static int DeleteClient(int clientId);
		static Person^ QueryClientById(int clientId);
		static List<Person^>^ QueryAllClients();
		static Person^ QueryClientByDNI(String^ clientDNI);
		// hola
		// operaciones de venta
		//Operaciones de venta
		static List<Sale^>^ QueryAllSales();
		static int QueryLastSaleId();
		static void RegisterSale(Sale^ sale);
		//Autenticación de usuario
		static Employee^ Login(String^ username, String^ password);
	};
}
