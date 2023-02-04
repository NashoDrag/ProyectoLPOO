/**
 * Project Untitled
 */


#pragma once

using namespace System;

namespace salesModel {
    [Serializable]
    public ref class Medicine {
    protected:
        int id;
        void Activate();
    public:
        //Métodos de acceso para id
        int getId() {
            return id;
        }
        void setId(int id) {
            this->id = id;
            //id = _id;
        }
        property String^ name;
        property String^ brand;
        property String^ description;
        property double price;
        property int stock;
        property array<Byte>^ photo;
        property String^ due_date;

        void Deactivate();
    };

}


