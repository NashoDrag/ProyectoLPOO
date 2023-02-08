#include "pch.h"

#include "SalesPersistance.h"

using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace salesModel;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Runtime::Serialization;


//persistencia para medicamentos
void SalesPersistance::Persistance::PersistXML(String^ fileName, Object^ persistObject)
{
    StreamWriter^ output;
    try {
        output = gcnew StreamWriter(fileName);
        if (persistObject->GetType() == List<Medicine^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Medicine^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<String^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Industria_Proveedora^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Industria_Proveedora^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
    }
        if (persistObject->GetType() == List<Person^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Person^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
        if (persistObject->GetType() == List<Person^>::typeid) {
            XmlSerializer^ serializadorXML = gcnew XmlSerializer(List<Sale^>::typeid);
            serializadorXML->Serialize(output, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (output != nullptr) output->Close();
    }
}

Object^ SalesPersistance::Persistance::LoadXMLData(String^ fileName)
{
    Object^ res;
    StreamReader^ sr;
    XmlSerializer^ serializadorXML;
    try {
        if (File::Exists(fileName)) {
            sr = gcnew StreamReader(fileName);
        }
        if (fileName->Equals("Medicines.xml")) {
            res = gcnew List<Medicine^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Medicine^>::typeid);
                res = (List<Medicine^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("stores.xml")) {
            res = gcnew List<String^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<String^>::typeid);
                res = (List<String^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("WarhouseManagerContacts.xml")) {
            res = gcnew List<Industria_Proveedora^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Industria_Proveedora^>::typeid);
                res = (List<Industria_Proveedora^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("Clientes.xml")) {
            res = gcnew List<Person^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Person^>::typeid);
                res = (List<Person^>^)serializadorXML->Deserialize(sr);
            }
        }
        if (fileName->Equals("sales.xml")) {
            res = gcnew List<Sale^>();
            if (File::Exists(fileName)) {
                serializadorXML = gcnew XmlSerializer(List<Sale^>::typeid);
                res = (List<Sale^>^)serializadorXML->Deserialize(sr);
            }
        }
    }
    catch (NullReferenceException^ ex) {
        //Mandar un mensaje por correo
        throw ex;
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (sr != nullptr) sr->Close();
    }
    return res;
    // TODO: Insertar una instrucción "return" aquí
}


