/**
 * Project Untitled
 */


#pragma once

using namespace System;

namespace salesModel {
    [Serializable]
    public ref class Medicine {
    protected:
       // int id;
        void Activate();
    public:
        //Métodos de acceso para id
       /* int getId() {
            return id;
        }
        void setId(int id) {
            this->id = id;
            //id = _id;
        }*/
        property int id;
        property String^ name;
        property String^ brand;
        property String^ description;
        property double price;
        property int quantity;
        property array<Byte>^ photo;
        property String^ due_date;
        property String^ PresentationFormat;
        property String^ Ingredients;
        property char Status;
        property String^ type;
        property String^ characteristica;
        property int peso;
        property int volumen;
        property String^ manufacturado;

        void Deactivate();
    };

}


