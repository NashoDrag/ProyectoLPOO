#include "pch.h"
#include "LoginForm.h"
#include "MainForm.h"

System::Void SalesConsoleView::LoginForm::btnLoginFormAcept_Click(System::Object^ sender, System::EventArgs^ e)
{
	Employee^ emp = Controller::Login(txtUsername->Text, txtPassword->Text);
	if (emp != nullptr) {
		MessageBox::Show("Bienvenido " + emp->Name + " " + emp->LastName);
		MainForm::employee = emp;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}