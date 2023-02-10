/**
 * Project Untitled
 */


#pragma once
#include "Employee.h"

namespace salesModel {
	[Serializable]
	public ref class Vendedor : public  Employee {
	public:
		property String^ FirstName;
		property String^ LastName;
	};

}

