#pragma once

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace salesController;
	using namespace salesModel;

	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UserName;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnLoginFormAcept;
	private: System::Windows::Forms::Button^ btnLoginFormCancel;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->UserName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLoginFormAcept = (gcnew System::Windows::Forms::Button());
			this->btnLoginFormCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// UserName
			// 
			this->UserName->AutoSize = true;
			this->UserName->Location = System::Drawing::Point(40, 16);
			this->UserName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(58, 13);
			this->UserName->TabIndex = 0;
			this->UserName->Text = L"Username:";
			this->UserName->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(114, 16);
			this->txtUsername->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(163, 20);
			this->txtUsername->TabIndex = 2;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &LoginForm::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(114, 44);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(163, 20);
			this->txtPassword->TabIndex = 3;
			// 
			// btnLoginFormAcept
			// 
			this->btnLoginFormAcept->Location = System::Drawing::Point(51, 77);
			this->btnLoginFormAcept->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnLoginFormAcept->Name = L"btnLoginFormAcept";
			this->btnLoginFormAcept->Size = System::Drawing::Size(69, 22);
			this->btnLoginFormAcept->TabIndex = 4;
			this->btnLoginFormAcept->Text = L"Aceptar";
			this->btnLoginFormAcept->UseVisualStyleBackColor = true;
			this->btnLoginFormAcept->Click += gcnew System::EventHandler(this, &LoginForm::btnLoginFormAcept_Click);
			// 
			// btnLoginFormCancel
			// 
			this->btnLoginFormCancel->Location = System::Drawing::Point(206, 77);
			this->btnLoginFormCancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnLoginFormCancel->Name = L"btnLoginFormCancel";
			this->btnLoginFormCancel->Size = System::Drawing::Size(69, 22);
			this->btnLoginFormCancel->TabIndex = 5;
			this->btnLoginFormCancel->Text = L"Cancelar";
			this->btnLoginFormCancel->UseVisualStyleBackColor = true;
			this->btnLoginFormCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnLoginFormCancel_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 111);
			this->ControlBox = false;
			this->Controls->Add(this->btnLoginFormCancel);
			this->Controls->Add(this->btnLoginFormAcept);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->UserName);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LoginForm";
			this->Text = L"Autenticacion de usuario";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLoginFormAcept_Click(System::Object^ sender, System::EventArgs^ e);

	

	private: System::Void btnLoginFormCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			   if (e->KeyData == Keys::Enter)
				   btnLoginFormAcept->PerformClick();
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
