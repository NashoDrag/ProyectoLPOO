#pragma once

using namespace System;

namespace SalesPersistance {
	public ref class Persistance
	{
	public:
		// TODO: Agregue aquí los métodos de esta clase.
		static void PersistXML(String^ fileName, Object^ persistObject);
		static Object^ LoadXMLData(String^ fileName);
	};
}