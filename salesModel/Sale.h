/**
 * Project Untitled
 */

#include "Vendedor.h"
#pragma once
using namespace System;
namespace salesModel {
    [Serializable]
    public ref class Sale {
    public:
        property int Id;
        property int Id_corporation;
        property String^ Employee;
        property String^ Date;
        property char Status;
        property double Total;
        property Vendedor^ Vendedor;
    };
}