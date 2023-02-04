/**
 * Project Untitled
 */

#include "Medicine.h"
#pragma once

using namespace System;

namespace salesModel {
    [Serializable]
    public ref class Almacen {
    public:
        property double StorageCapacity;
        property Medicine^ Medicine;
    };



}


