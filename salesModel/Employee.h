/**
 * Project Untitled
 */




#pragma once
#include "Person.h"
using namespace System;

namespace salesModel {
    [Serializable]
    public ref class Employee : public Person {
    public:
        property String^ LastName;
        property String^ Username;
        property String^ Password;
        property char Gender;
        property String^ Birthday;
        property String^ Post;
        property bool Puntuality;
    };
}
