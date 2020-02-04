#pragma once
#include <msclr\marshal_cppstd.h>
#include"InsuranceToChoose.h"
#include"Insurance.h"
#include"CarBrand.h"
#include"User.h"
namespace CarInsuranceSystem {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerData
	/// </summary>
	public ref class CustomerData : public System::Windows::Forms::Form
	{
	public:
		/*CustomerData(void)
		{

			InitializeComponent();

		}*/
		// counstructor for backButton
		CustomerData(System::Windows::Forms::Form ^previousForm, User &user, CarBrand &carBrand) : user(user), carBrand(carBrand) {
			this->previousForm = previousForm;
			InitializeComponent();
			this->CenterToScreen();

			emergencyInfoLabel->Hide();


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomerData()
		{
			if (components)
			{
				delete components;
			}
		}
		int numChoice = 0;
		bool isChecked = false;

	private: System::Windows::Forms::Button^  submitButton;





	private: System::Windows::Forms::CheckedListBox^  gasInstalationCheckedListBox;
	private: System::Windows::Forms::ComboBox^  numberOfCollisions;










	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::ComboBox^  brandComboBox;
	private: System::Windows::Forms::ComboBox^  modelComboBox;



	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  backButton;
	protected:



	protected:

	private:
		/// <summary>
		User & user;
		CarBrand & carBrand;

		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		System::Windows::Forms::Form ^previousForm;
	private: System::Windows::Forms::ComboBox^  MileageComboBox;



	private: System::Windows::Forms::ComboBox^  productionYear;



	private: System::Windows::Forms::TextBox^  engineCapacityTextBox;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  emergencyInfoLabel;
	private: System::Windows::Forms::Label^  ACMoney;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;





			 int previousChoice = -1;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomerData::typeid));
				 this->submitButton = (gcnew System::Windows::Forms::Button());
				 this->gasInstalationCheckedListBox = (gcnew System::Windows::Forms::CheckedListBox());
				 this->numberOfCollisions = (gcnew System::Windows::Forms::ComboBox());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->brandComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->modelComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->panel1 = (gcnew System::Windows::Forms::Panel());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->backButton = (gcnew System::Windows::Forms::Button());
				 this->MileageComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->productionYear = (gcnew System::Windows::Forms::ComboBox());
				 this->engineCapacityTextBox = (gcnew System::Windows::Forms::TextBox());
				 this->emergencyInfoLabel = (gcnew System::Windows::Forms::Label());
				 this->ACMoney = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->panel2->SuspendLayout();
				 this->panel1->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // submitButton
				 // 
				 this->submitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->submitButton->Location = System::Drawing::Point(482, 352);
				 this->submitButton->Name = L"submitButton";
				 this->submitButton->Size = System::Drawing::Size(114, 51);
				 this->submitButton->TabIndex = 26;
				 this->submitButton->Text = L"Submit";
				 this->submitButton->UseVisualStyleBackColor = false;
				 this->submitButton->Click += gcnew System::EventHandler(this, &CustomerData::submitButton_Click);
				 // 
				 // gasInstalationCheckedListBox
				 // 
				 this->gasInstalationCheckedListBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->gasInstalationCheckedListBox->FormattingEnabled = true;
				 this->gasInstalationCheckedListBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
				 this->gasInstalationCheckedListBox->Location = System::Drawing::Point(87, 373);
				 this->gasInstalationCheckedListBox->Name = L"gasInstalationCheckedListBox";
				 this->gasInstalationCheckedListBox->Size = System::Drawing::Size(89, 55);
				 this->gasInstalationCheckedListBox->TabIndex = 24;
				 this->gasInstalationCheckedListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerData::gasInstalationCheckedListBox_SelectedIndexChanged);
				 // 
				 // numberOfCollisions
				 // 
				 this->numberOfCollisions->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->numberOfCollisions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->numberOfCollisions->FormattingEnabled = true;
				 this->numberOfCollisions->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"0", L"1", L"2", L"3", L"4", L"5 or more" });
				 this->numberOfCollisions->Location = System::Drawing::Point(394, 286);
				 this->numberOfCollisions->Name = L"numberOfCollisions";
				 this->numberOfCollisions->Size = System::Drawing::Size(121, 33);
				 this->numberOfCollisions->TabIndex = 23;
				 this->numberOfCollisions->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerData::numberOfCollisions_SelectedIndexChanged);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
				 this->pictureBox1->Location = System::Drawing::Point(538, 128);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(202, 152);
				 this->pictureBox1->TabIndex = 19;
				 this->pictureBox1->TabStop = false;
				 // 
				 // brandComboBox
				 // 
				 this->brandComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->brandComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->brandComboBox->FormattingEnabled = true;
				 this->brandComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Volkswagen", L"Skoda", L"BMW", L"Fiat" });
				 this->brandComboBox->Location = System::Drawing::Point(64, 168);
				 this->brandComboBox->Name = L"brandComboBox";
				 this->brandComboBox->Size = System::Drawing::Size(121, 33);
				 this->brandComboBox->TabIndex = 16;
				 this->brandComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerData::brandComboBox_SelectedIndexChanged);
				 // 
				 // modelComboBox
				 // 
				 this->modelComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->modelComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->modelComboBox->FormattingEnabled = true;
				 this->modelComboBox->Location = System::Drawing::Point(230, 168);
				 this->modelComboBox->Name = L"modelComboBox";
				 this->modelComboBox->Size = System::Drawing::Size(121, 33);
				 this->modelComboBox->TabIndex = 15;
				 this->modelComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CustomerData::modelComboBox_SelectedIndexChanged);
				 // 
				 // panel2
				 // 
				 this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->panel2->Controls->Add(this->panel1);
				 this->panel2->Controls->Add(this->label1);
				 this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
				 this->panel2->Location = System::Drawing::Point(0, 0);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(782, 70);
				 this->panel2->TabIndex = 14;
				 // 
				 // panel1
				 // 
				 this->panel1->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->panel1->Controls->Add(this->label2);
				 this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
				 this->panel1->Location = System::Drawing::Point(0, 0);
				 this->panel1->Name = L"panel1";
				 this->panel1->Size = System::Drawing::Size(782, 70);
				 this->panel1->TabIndex = 58;
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
				 this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label2->Location = System::Drawing::Point(244, 9);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(301, 44);
				 this->label2->TabIndex = 57;
				 this->label2->Text = L"Car informations";
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.8F));
				 this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->label1->Location = System::Drawing::Point(244, 9);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(301, 44);
				 this->label1->TabIndex = 57;
				 this->label1->Text = L"Car informations";
				 // 
				 // backButton
				 // 
				 this->backButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->backButton->Location = System::Drawing::Point(611, 352);
				 this->backButton->Name = L"backButton";
				 this->backButton->Size = System::Drawing::Size(114, 51);
				 this->backButton->TabIndex = 27;
				 this->backButton->Text = L"Back";
				 this->backButton->UseVisualStyleBackColor = false;
				 this->backButton->Click += gcnew System::EventHandler(this, &CustomerData::backButton_Click);
				 // 
				 // MileageComboBox
				 // 
				 this->MileageComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->MileageComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->MileageComboBox->FormattingEnabled = true;
				 this->MileageComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
					 L"0 - 20 ", L"20 - 30", L"30 - 40", L"40 - 60",
						 L"70 - 100", L"100 - 130", L"130 - 160 ", L"160 - 200", L"200 - 250", L"250 - 300", L"over 300 "
				 });
				 this->MileageComboBox->Location = System::Drawing::Point(64, 286);
				 this->MileageComboBox->Name = L"MileageComboBox";
				 this->MileageComboBox->Size = System::Drawing::Size(121, 33);
				 this->MileageComboBox->TabIndex = 53;
				 // 
				 // productionYear
				 // 
				 this->productionYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->productionYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->productionYear->FormattingEnabled = true;
				 this->productionYear->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
					 L"2018", L"2017", L"2016", L"2015", L"2014",
						 L"2013", L"2012", L"2011", L"2010", L"2009", L"2008", L"2007", L"2006", L"2005", L"2004", L"2003", L"2002", L"2001", L"2000",
						 L"1999", L"1998", L"1997", L"1996", L"1995"
				 });
				 this->productionYear->Location = System::Drawing::Point(395, 168);
				 this->productionYear->Name = L"productionYear";
				 this->productionYear->Size = System::Drawing::Size(121, 33);
				 this->productionYear->TabIndex = 54;
				 // 
				 // engineCapacityTextBox
				 // 
				 this->engineCapacityTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->engineCapacityTextBox->Location = System::Drawing::Point(230, 286);
				 this->engineCapacityTextBox->Name = L"engineCapacityTextBox";
				 this->engineCapacityTextBox->Size = System::Drawing::Size(121, 30);
				 this->engineCapacityTextBox->TabIndex = 70;
				 // 
				 // emergencyInfoLabel
				 // 
				 this->emergencyInfoLabel->AutoSize = true;
				 this->emergencyInfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.8F, System::Drawing::FontStyle::Italic));
				 this->emergencyInfoLabel->ForeColor = System::Drawing::Color::DarkRed;
				 this->emergencyInfoLabel->Location = System::Drawing::Point(356, 86);
				 this->emergencyInfoLabel->Name = L"emergencyInfoLabel";
				 this->emergencyInfoLabel->Size = System::Drawing::Size(292, 26);
				 this->emergencyInfoLabel->TabIndex = 58;
				 this->emergencyInfoLabel->Text = L"Fill in all informations, please";
				 // 
				 // ACMoney
				 // 
				 this->ACMoney->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->ACMoney->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->ACMoney->Location = System::Drawing::Point(76, 145);
				 this->ACMoney->Name = L"ACMoney";
				 this->ACMoney->Size = System::Drawing::Size(100, 17);
				 this->ACMoney->TabIndex = 82;
				 this->ACMoney->Text = L"Brand";
				 this->ACMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label3
				 // 
				 this->label3->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label3->Location = System::Drawing::Point(238, 145);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(100, 17);
				 this->label3->TabIndex = 83;
				 this->label3->Text = L"Model";
				 this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label4
				 // 
				 this->label4->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label4->Location = System::Drawing::Point(61, 263);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(131, 17);
				 this->label4->TabIndex = 84;
				 this->label4->Text = L"Mileage (thousand)";
				 this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label5
				 // 
				 this->label5->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label5->Location = System::Drawing::Point(401, 145);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(114, 17);
				 this->label5->TabIndex = 85;
				 this->label5->Text = L"Production year";
				 this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label6
				 // 
				 this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label6->Location = System::Drawing::Point(392, 263);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(131, 17);
				 this->label6->TabIndex = 86;
				 this->label6->Text = L"Car Collision";
				 this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label7
				 // 
				 this->label7->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label7->Location = System::Drawing::Point(227, 263);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(131, 17);
				 this->label7->TabIndex = 87;
				 this->label7->Text = L"Engine capacity";
				 this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // label8
				 // 
				 this->label8->BackColor = System::Drawing::SystemColors::InactiveCaption;
				 this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->label8->Location = System::Drawing::Point(61, 347);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(131, 22);
				 this->label8->TabIndex = 88;
				 this->label8->Text = L"Gas instalation";
				 this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // CustomerData
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->ClientSize = System::Drawing::Size(782, 453);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->ACMoney);
				 this->Controls->Add(this->emergencyInfoLabel);
				 this->Controls->Add(this->engineCapacityTextBox);
				 this->Controls->Add(this->productionYear);
				 this->Controls->Add(this->MileageComboBox);
				 this->Controls->Add(this->backButton);
				 this->Controls->Add(this->submitButton);
				 this->Controls->Add(this->gasInstalationCheckedListBox);
				 this->Controls->Add(this->numberOfCollisions);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->brandComboBox);
				 this->Controls->Add(this->modelComboBox);
				 this->Controls->Add(this->panel2);
				 this->Name = L"CustomerData";
				 this->Text = L"CustomerData";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->panel2->ResumeLayout(false);
				 this->panel2->PerformLayout();
				 this->panel1->ResumeLayout(false);
				 this->panel1->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
		// if everything is fill in
		if (brandComboBox->SelectedIndex != -1 && modelComboBox->SelectedIndex != -1 && productionYear->SelectedIndex != -1 &&
			MileageComboBox->SelectedIndex != -1 && engineCapacityTextBox->Text->Length != 0 && numberOfCollisions->SelectedIndex != -1
			&& (gasInstalationCheckedListBox->SelectedIndex == 0 || gasInstalationCheckedListBox->SelectedIndex == 1))
		{
			// take chosen car from carBrand 
			Car car = carBrand.getCar(modelComboBox->SelectedIndex);

			// set car informatons ( download them from the textboxs, comboBoxes and checklists)
			car.setProductionYear(this->productionYear->SelectedIndex);
			car.setMileage(this->MileageComboBox->SelectedIndex);
			car.setNumberOfCollisions(this->numberOfCollisions->SelectedIndex);
			car.setGasInstalation(this->gasInstalationCheckedListBox->SelectedIndex);

			//convert TextBox ^ to string
			msclr::interop::marshal_context context;

			string enigneCapacity = context.marshal_as<string>(this->engineCapacityTextBox->Text);
			car.setEngineCapcity(atof(enigneCapacity.c_str()));

			car.countCarVaulue();

			// insert car to user
			user.setCar(car);
			// insert user to Insurance
			Insurance insurance(user);

			this->Hide();
			InsuranceToChoose^ insuranceToChoose = gcnew InsuranceToChoose(this, insurance);
			insuranceToChoose->ShowDialog();
		}
	}
	private: System::Void brandComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->modelComboBox->Items->Clear();

		// -----------------------
		if (this->brandComboBox->SelectedIndex == 0)
			carBrand.setName("VolksWagen");
		else if (this->brandComboBox->SelectedIndex == 1)
			carBrand.setName("Skoda");
		else if (this->brandComboBox->SelectedIndex == 2)
			carBrand.setName("BMW");
		else if (this->brandComboBox->SelectedIndex == 3)
			carBrand.setName("Fiat");
		// ADD New car brands here
		carBrand.deleteCars();
		carBrand.loadCarsFromFile();
		for (int i = 0; i < carBrand.amountOfCars(); i++)
		{
			String^ modelName = gcnew String(carBrand.getCar(i).getModel().c_str());	// konwert string to System::String^
			this->modelComboBox->Items->Insert(i, modelName);
		}

	}
	private: System::Void gasInstalationCheckedListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		// Block possibility of choosing both
		if (this->gasInstalationCheckedListBox->SelectedIndex == 0)
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
			this->gasInstalationCheckedListBox->SetItemChecked(1, 0);
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
			this->gasInstalationCheckedListBox->SetItemChecked(0, 0);
			this->numChoice++;
			this->previousChoice = 1;
		}

	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Show();
	}
	private: System::Void MileageComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void modelComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void numberOfCollisions_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
