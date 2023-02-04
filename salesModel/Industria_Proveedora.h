/**
 * Project Untitled
 */



#include "Distribuidora.h"
#pragma once

using namespace System;


namespace salesModel {
    [Serializable]
    public ref class Industria_Proveedora {
    public:
        property int Id_corporation;
        property String^ RUC;
        property  String^ Name;
        property String^ Admin;
        property String^ Address;
        property String^ PhoneNumber;
    };


}


