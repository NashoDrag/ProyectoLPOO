/**
 * Project Untitled
 */

#pragma once
using namespace System;
namespace salesModel {
    [Serializable]
    public ref class Person {
    public:
        property int Id;
        property String^ DocNumber; //dni  5485454
        property String^ Name;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property String^ Status;
        property int Age;
    };



}
