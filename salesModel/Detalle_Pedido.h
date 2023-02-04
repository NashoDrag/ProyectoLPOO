/**
 * Project Untitled
 */

#include "Medicine.h"
#pragma once

using namespace System;
namespace salesModel {
    [Serializable]
    public ref class Detalle_Pedido {
    public:
        property int Id;
        property int Quantity;
        property double SubTotal;
        property double UnitPrice;
        property String^ Features;
        property String^ Brand;
        property Medicine^ Medicine;
    };
}