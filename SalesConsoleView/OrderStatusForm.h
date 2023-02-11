#pragma once

namespace SalesConsoleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de OrderStatusForm
	/// </summary>
	public ref class OrderStatusForm : public System::Windows::Forms::Form
	{
	public:
		OrderStatusForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~OrderStatusForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::CheckBox^ PackingBox;
	private: System::Windows::Forms::CheckBox^ DeliveryBox;
	private: System::Windows::Forms::CheckBox^ ReceivedBox;




	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrderStatusForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->PackingBox = (gcnew System::Windows::Forms::CheckBox());
			this->DeliveryBox = (gcnew System::Windows::Forms::CheckBox());
			this->ReceivedBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(86, 66);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(182, 169);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(620, 56);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(183, 167);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// PackingBox
			// 
			this->PackingBox->AutoSize = true;
			this->PackingBox->Location = System::Drawing::Point(126, 241);
			this->PackingBox->Name = L"PackingBox";
			this->PackingBox->Size = System::Drawing::Size(80, 20);
			this->PackingBox->TabIndex = 3;
			this->PackingBox->Text = L"Proceso";
			this->PackingBox->UseVisualStyleBackColor = true;
			// 
			// DeliveryBox
			// 
			this->DeliveryBox->AutoSize = true;
			this->DeliveryBox->Location = System::Drawing::Point(395, 241);
			this->DeliveryBox->Name = L"DeliveryBox";
			this->DeliveryBox->Size = System::Drawing::Size(79, 20);
			this->DeliveryBox->TabIndex = 4;
			this->DeliveryBox->Text = L"Enviado";
			this->DeliveryBox->UseVisualStyleBackColor = true;
			// 
			// ReceivedBox
			// 
			this->ReceivedBox->AutoSize = true;
			this->ReceivedBox->Location = System::Drawing::Point(664, 241);
			this->ReceivedBox->Name = L"ReceivedBox";
			this->ReceivedBox->Size = System::Drawing::Size(84, 20);
			this->ReceivedBox->TabIndex = 5;
			this->ReceivedBox->Text = L"Recibido";
			this->ReceivedBox->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(362, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 143);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// OrderStatusForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 347);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ReceivedBox);
			this->Controls->Add(this->DeliveryBox);
			this->Controls->Add(this->PackingBox);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"OrderStatusForm";
			this->Text = L"Estado de Pedido";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
};
