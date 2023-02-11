/**
 * Project Untitled
 */

#include "Vendedor.h"
#include "Detalle_Pedido.h"
#pragma once
#include "Vendedor.h"
#include "Person.h"
#include "Detalle_Pedido.h"

using namespace System;
using namespace System::Collections::Generic;
namespace salesModel {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property int Id_corporation;
        property String^ cliente;
        property String^ Employee;
        property String^ Date;
        property char Status;
        property double Total;
        property Vendedor^ Vendedor;
        property List<Detalle_Pedido^>^ SaleDetails;

        Sale() {
            SaleDetails = gcnew List<Detalle_Pedido^>();
        }
    };
}