#pragma once
#include"UserData.h"
#include"Contact.h"

#include "Insurance.h"
#include"CarBrand.h"
#include"Car.h"
#include<string.h>
#include<Windows.h>

namespace CarInsuranceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			this->CenterToScreen();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  newCustomer;
	private: System::Windows::Forms::Button^  login;















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->newCustomer = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(782, 70);
			this->panel1->TabIndex = 0;
			// 
			// newCustomer
			// 
			this->newCustomer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newCustomer->FlatAppearance->BorderSize = 0;
			this->newCustomer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->newCustomer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newCustomer->Location = System::Drawing::Point(133, 176);
			this->newCustomer->Name = L"newCustomer";
			this->newCustomer->Size = System::Drawing::Size(170, 94);
			this->newCustomer->TabIndex = 5;
			this->newCustomer->Text = L"Buy insurance";
			this->newCustomer->UseVisualStyleBackColor = true;
			this->newCustomer->Click += gcnew System::EventHandler(this, &MainWindow::newCustomer_Click);
			// 
			// login
			// 
			this->login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login->FlatAppearance->BorderSize = 0;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(460, 176);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(175, 94);
			this->login->TabIndex = 6;
			this->login->Text = L"Contact";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &MainWindow::login_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->login);
			this->Controls->Add(this->newCustomer);
			this->Controls->Add(this->panel1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void newCustomer_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	
	UserData^ userData = gcnew UserData(this);
	userData->ShowDialog();
}
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Contact^ contact= gcnew Contact(this);
	contact->ShowDialog();
}
};
}
