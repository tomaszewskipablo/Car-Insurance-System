#pragma once
#include<string>
#include <msclr\marshal_cppstd.h>
#include"CustomerData.h"
#include"User.h"
#include"CarBrand.h"

namespace CarInsuranceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserData
	/// </summary>
	public ref class UserData : public System::Windows::Forms::Form
	{
	public:
		/*UserData(void)
		{
			InitializeComponent();
			
		}*/
		// counstructor for backButton
		UserData(System::Windows::Forms::Form ^previousForm)
		{
			this->previousForm = previousForm;
			InitializeComponent();
			this->CenterToScreen();

			emergencyInfoTextBox->Hide();
		

		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserData()
		{
			if (components)
			{
				delete components;
			}
		}
		int numChoice = 0;
		bool isChecked = false;

	private: System::Windows::Forms::Button^  backButton;
	protected:
	private: System::Windows::Forms::Button^  submitButton;

	private: System::Windows::Forms::CheckedListBox^  genderCheckedListBox;
	private: System::Windows::Forms::ComboBox^  anyColisionComboBox;





	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::ComboBox^  ageComboBox;
	private: System::Windows::Forms::ComboBox^  carLicenseComboBox;
	private: System::Windows::Forms::Panel^  panel2;



	private:
		/// <summary>
		/// Required designer variable.
		
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Windows::Forms::Form ^previousForm;	// to move back
	private: System::Windows::Forms::TextBox^  nameTextBox;



	private: System::Windows::Forms::TextBox^  cityTextBox;



	private: System::Windows::Forms::TextBox^  streetTextBox;



	private: System::Windows::Forms::TextBox^  houseNumberTextBox;






	private: System::Windows::Forms::TextBox^  emergencyInfoTextBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  ACMoney;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  phoneNumber;



			 int previousChoice = -1;	//	to checkBock avoid both
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UserData::typeid));
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->genderCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->anyColisionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ageComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->carLicenseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->cityTextBox = (gcnew System::Windows::Forms::TextBox());
			this->streetTextBox = (gcnew System::Windows::Forms::TextBox());
			this->houseNumberTextBox = (gcnew System::Windows::Forms::TextBox());
			this->emergencyInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ACMoney = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->phoneNumber = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(612, 363);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(114, 51);
			this->backButton->TabIndex = 57;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &UserData::backButton_Click);
			// 
			// submitButton
			// 
			this->submitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitButton->Location = System::Drawing::Point(483, 363);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(114, 51);
			this->submitButton->TabIndex = 56;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &UserData::submitButton_Click);
			// 
			// genderCheckedListBox
			// 
			this->genderCheckedListBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->genderCheckedListBox->FormattingEnabled = true;
			this->genderCheckedListBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
			this->genderCheckedListBox->Location = System::Drawing::Point(88, 384);
			this->genderCheckedListBox->Name = L"genderCheckedListBox";
			this->genderCheckedListBox->Size = System::Drawing::Size(89, 55);
			this->genderCheckedListBox->TabIndex = 54;
			this->genderCheckedListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UserData::genderCheckedListBox_SelectedIndexChanged);
			// 
			// anyColisionComboBox
			// 
			this->anyColisionComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->anyColisionComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->anyColisionComboBox->FormattingEnabled = true;
			this->anyColisionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5 or more" });
			this->anyColisionComboBox->Location = System::Drawing::Point(65, 286);
			this->anyColisionComboBox->Name = L"anyColisionComboBox";
			this->anyColisionComboBox->Size = System::Drawing::Size(121, 33);
			this->anyColisionComboBox->TabIndex = 53;
			this->anyColisionComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UserData::anyColisionComboBox_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(537, 139);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 152);
			this->pictureBox1->TabIndex = 49;
			this->pictureBox1->TabStop = false;
			// 
			// ageComboBox
			// 
			this->ageComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ageComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageComboBox->FormattingEnabled = true;
			this->ageComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"16-18", L"19-24", L"25-35", L"35-60", L"60 or more" });
			this->ageComboBox->Location = System::Drawing::Point(226, 175);
			this->ageComboBox->Name = L"ageComboBox";
			this->ageComboBox->Size = System::Drawing::Size(121, 33);
			this->ageComboBox->TabIndex = 46;
			this->ageComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &UserData::ageComboBox_SelectedIndexChanged);
			// 
			// carLicenseComboBox
			// 
			this->carLicenseComboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {
				L"2014", L"2009", L"2004",
					L"erlier"
			});
			this->carLicenseComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->carLicenseComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->carLicenseComboBox->FormattingEnabled = true;
			this->carLicenseComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2014", L"2009", L"2004", L"erlier" });
			this->carLicenseComboBox->Location = System::Drawing::Point(391, 175);
			this->carLicenseComboBox->Name = L"carLicenseComboBox";
			this->carLicenseComboBox->Size = System::Drawing::Size(121, 33);
			this->carLicenseComboBox->TabIndex = 45;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(782, 70);
			this->panel2->TabIndex = 44;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(241, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(320, 44);
			this->label2->TabIndex = 58;
			this->label2->Text = L"User informations";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTextBox->Location = System::Drawing::Point(65, 175);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(121, 30);
			this->nameTextBox->TabIndex = 58;
			this->nameTextBox->TextChanged += gcnew System::EventHandler(this, &UserData::nameTextBox_TextChanged);
			// 
			// cityTextBox
			// 
			this->cityTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cityTextBox->Location = System::Drawing::Point(226, 289);
			this->cityTextBox->Name = L"cityTextBox";
			this->cityTextBox->Size = System::Drawing::Size(121, 30);
			this->cityTextBox->TabIndex = 60;
			// 
			// streetTextBox
			// 
			this->streetTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->streetTextBox->Location = System::Drawing::Point(391, 286);
			this->streetTextBox->Name = L"streetTextBox";
			this->streetTextBox->Size = System::Drawing::Size(121, 30);
			this->streetTextBox->TabIndex = 62;
			// 
			// houseNumberTextBox
			// 
			this->houseNumberTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->houseNumberTextBox->Location = System::Drawing::Point(226, 384);
			this->houseNumberTextBox->Name = L"houseNumberTextBox";
			this->houseNumberTextBox->Size = System::Drawing::Size(121, 30);
			this->houseNumberTextBox->TabIndex = 64;
			// 
			// emergencyInfoTextBox
			// 
			this->emergencyInfoTextBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->emergencyInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->emergencyInfoTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->emergencyInfoTextBox->ForeColor = System::Drawing::Color::DarkRed;
			this->emergencyInfoTextBox->Location = System::Drawing::Point(418, 97);
			this->emergencyInfoTextBox->Name = L"emergencyInfoTextBox";
			this->emergencyInfoTextBox->Size = System::Drawing::Size(295, 23);
			this->emergencyInfoTextBox->TabIndex = 68;
			this->emergencyInfoTextBox->Text = L"Fill in all informations, please";
			// 
			// ACMoney
			// 
			this->ACMoney->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ACMoney->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ACMoney->Location = System::Drawing::Point(74, 152);
			this->ACMoney->Name = L"ACMoney";
			this->ACMoney->Size = System::Drawing::Size(100, 17);
			this->ACMoney->TabIndex = 81;
			this->ACMoney->Text = L"Name";
			this->ACMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(238, 264);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 17);
			this->label1->TabIndex = 82;
			this->label1->Text = L"City";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Location = System::Drawing::Point(74, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 17);
			this->label3->TabIndex = 83;
			this->label3->Text = L"Any collisions\?";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Location = System::Drawing::Point(388, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 17);
			this->label4->TabIndex = 84;
			this->label4->Text = L"Car license after";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Location = System::Drawing::Point(235, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 17);
			this->label5->TabIndex = 85;
			this->label5->Text = L"Age";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Location = System::Drawing::Point(403, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 17);
			this->label6->TabIndex = 86;
			this->label6->Text = L"Street";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Location = System::Drawing::Point(616, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 17);
			this->label7->TabIndex = 87;
			this->label7->Text = L"Phone number";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Location = System::Drawing::Point(85, 364);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 17);
			this->label8->TabIndex = 88;
			this->label8->Text = L"Gender";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Location = System::Drawing::Point(235, 363);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 17);
			this->label9->TabIndex = 89;
			this->label9->Text = L"House number";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// phoneNumber
			// 
			this->phoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phoneNumber->Location = System::Drawing::Point(612, 327);
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->Size = System::Drawing::Size(121, 30);
			this->phoneNumber->TabIndex = 90;
			// 
			// UserData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->phoneNumber);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ACMoney);
			this->Controls->Add(this->emergencyInfoTextBox);
			this->Controls->Add(this->houseNumberTextBox);
			this->Controls->Add(this->streetTextBox);
			this->Controls->Add(this->cityTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->genderCheckedListBox);
			this->Controls->Add(this->anyColisionComboBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ageComboBox);
			this->Controls->Add(this->carLicenseComboBox);
			this->Controls->Add(this->panel2);
			this->Name = L"UserData";
			this->Text = L"UserData";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// if everything is fill in
		if (nameTextBox->Text->Length != 0&& cityTextBox->Text->Length != 0 && streetTextBox->Text->Length != 0 &&
			houseNumberTextBox->Text->Length != 0 && ageComboBox->SelectedIndex!=-1 &&
			carLicenseComboBox->SelectedIndex!=-1 && anyColisionComboBox->SelectedIndex!=-1 && phoneNumber->Text->Length != 0
			&& (genderCheckedListBox->SelectedIndex == 0 || genderCheckedListBox->SelectedIndex == 1))
		{
			User user;

			//convert TextBox ^ to string
			msclr::interop::marshal_context context;

			string name = context.marshal_as<string>(this->nameTextBox->Text);
			user.setName(name);

			string city = context.marshal_as<string>(this->cityTextBox->Text);
			user.setCity(city);

			string street = context.marshal_as<string>(this->streetTextBox->Text);
			user.setStreet(street);

			string houseNumber = context.marshal_as<string>(this->houseNumberTextBox->Text);
			user.setHouseNumber(houseNumber);

			string phoneNumber = context.marshal_as<string>(this->phoneNumber->Text);
			user.setPhoneNumber(phoneNumber);


			user.setAgeGroup(this->ageComboBox->SelectedIndex);
			user.setCarLicenseYear(this->carLicenseComboBox->SelectedIndex);
			user.setNumberOfCollisions(this->anyColisionComboBox->SelectedIndex);
			user.setGender(this->genderCheckedListBox->SelectedIndex);


			// Next page
			emergencyInfoTextBox->Hide();	//	to hide when somebody comes back to correct something
			this->Hide();
			CarBrand carBrand;
			CustomerData^ customerData = gcnew CustomerData(this, user, carBrand);
			customerData->ShowDialog();
		}
		else {
			emergencyInfoTextBox->Show();
		}
	}
	private: System::Void genderCheckedListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->genderCheckedListBox->SelectedIndex == 0)
		{

			if (this->previousChoice == 1 && numChoice % 2)
			{
				this->numChoice = 0;
			}
			if (numChoice % 2)
			{
				this->isChecked = false;
			}
			else
			{
				this->isChecked = true;
			}
			this->genderCheckedListBox->SetItemChecked(1, 0);
			this->numChoice++;
			this->previousChoice = 0;
		}
		else
		{
			if (this->previousChoice == 0 && numChoice % 2)
			{
				this->numChoice = 0;
			}
			if (numChoice % 2)
			{
				this->isChecked = false;
			}
			else
			{
				this->isChecked = true;
			}
			this->genderCheckedListBox->SetItemChecked(0, 0);
			this->numChoice++;
			this->previousChoice = 1;
		}


	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Show();
	}
private: System::Void ageComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void nameTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void anyColisionComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}


};
}
