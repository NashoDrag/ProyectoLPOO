/**
 * Project Untitled
 */




//#include "Industria_Proveedora.h"

#pragma once

using namespace System;


namespace salesModel {
    [Serializable]
    public ref class Distribuidora {
    public:
        property int Id_Corporation;
        property String^ RUC;
        property String^ Name;
        property String^ Admin;
        property String^ Address;
        property String^ PhoneNumber;
    };

}

