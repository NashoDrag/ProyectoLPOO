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
		static List <Detalle_Pedido^>^ saledetailList = gcnew List<Detalle_Pedido^>(); // Lista de ventas registradas
		static List <Person^>^ ClientList = gcnew List<Person^>();
		static List <Medicine^>^ medicineproductList = gcnew List<Medicine^>();
		static List <Sale^>^ saleList = gcnew List<Sale^>();
		//static List <Warehouse^>^ warehouse = gcnew List<Warehouse^>();
		//static List<Detalle_Pedido^>
	public:
		// Metodo CRUD de Medicine
		static int AddMedicine(Medicine^ medicine);
		static Medicine^ QueryMedicineById(int medicineId);
		static List<Medicine^>^ QueryAllMedicines();
		static int UpdateMedicine(Medicine^ medicine);
		static int DeleteProduct(int medicineId);
		static Medicine^ QueryMedicineByName(String^ medicineName);

		// Metodo CRUD de la INDUSTRIA PROVEEDORA
		/*static int AddIndustry(Industria_Proveedora^ industry);
		static Industria_Proveedora^ QueryIndustryById(int industryId);
		static List<Industria_Proveedora^>^ QueryAllIndustries();
		static int UpdateIndustry(Industria_Proveedora^ industry);
		static int DeleteIndustry(int industryId);*/

		//Métodos CRUD de VENDEDOR
		static int AddSalesman(Vendedor^);
		static int UpdateSalesman(Vendedor^);
		static int DeleteSalesman(int vendedorId);
		static Vendedor^ QuerySalesmanById(int vendedorId);
		static List<Vendedor^>^ QueryAllSalesmen();

		//metodos crud clientes
		static int AddClient(Person^ cliente);
		static Person^ QueryClientById(int clienteId);
		static List<Person^>^ QueryAllClients();
		static int UpdateClient(Person^ cliente);
		static int DeleteClient(int clienteId);
		static Person^ QueryClientByDocNumber(String^ docNumber);
		//Autenticación de usuario
		static Employee^ Login(String^ username, String^ password);

		// operaciones de venta
		static List<Sale^>^ QueryAllSales();
		static int QueryLastSaleId();
		static void RegisterSale(Sale^ sale);

		//metodos CRUD sin persistencia
		static int AddProduct_sale(Medicine^ product);
		static Medicine^ QueryProductById_sale(int productId);
		static List<Medicine^>^ QueryAllProducts_sale();
		//static int UpdateProduct_sale(Product^ product);
		static int DeleteProduct_sale(int productId);
	};
}
