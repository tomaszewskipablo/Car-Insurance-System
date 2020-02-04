#pragma once
#include"User.h"
#include"Insurance.h"
#include"AC.h"
#include"OC.h"
#include"NNW.h"
#include"ASS.h"
#include"Summary.h"
namespace CarInsuranceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InsuranceToChoose
	/// </summary>
	public ref class InsuranceToChoose : public System::Windows::Forms::Form
	{
	public:

		InsuranceToChoose(System::Windows::Forms::Form ^previousForm, Insurance & insurance) : insurance(insurance) {
			this->previousForm = previousForm;
			InitializeComponent();
			this->CenterToScreen();

			// ------- Hide initially ---------------------
			
			// Money's buttons
			ACMoney->Hide();
			OCMoney->Hide();
			ASSMoney->Hide();
			NNWMoney->Hide();

			// resign's buttons
			resignButtonAC->Hide();
			resignButtonOC->Hide();
			resignButtonASS->Hide();
			resignButtonNNW->Hide();

			// Ac's buttons
			theftButton->Hide();
			collisionButton->Hide();
			floodButton->Hide();
			hailButton->Hide();
			thunderStrikeButton->Hide();

			// ASS's buttons
			lostKeysHelpButton->Hide();
			tireChangeButton->Hide();
			ASSTowingComboBox->Hide();
			ASSInfo->Hide();

			// NNW's buttons
			NNWInfo->Hide();
			NWWMAXMoneyComboBox->Hide();

			// -------- END of Hiding ---------------------

			AC ac("PZU", 0.08);
			insurance.setAc(ac);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InsuranceToChoose()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  ACButton;
	private: System::Windows::Forms::Panel^  panel2;



	private: System::Windows::Forms::Button^  OCButton;
	private: System::Windows::Forms::Button^  ASSButton;

	private: System::Windows::Forms::Button^  NWWButton;

	private:
		/// <summary>
		/// Required designer variable.
		Insurance & insurance;
		// AC's buttons
		bool theftButtonClicked;
		bool collisionButtonClicked;
		bool floodButtonClicked;
		bool hailButtonClicked;
		bool thunderButtonClicked;
		// ASS's buttons
		bool lostKeysHelpButtonClicked;
		bool tireChangeButtonClicked;
		/// </summary>
		System::ComponentModel::Container ^components;








	private: System::Windows::Forms::TextBox^  ASSInfo;
	private: System::Windows::Forms::TextBox^  NNWInfo;
	private: System::Windows::Forms::ComboBox^  NWWMAXMoneyComboBox;
	private: System::Windows::Forms::Button^  backButton;




	private: System::Windows::Forms::Button^  submitButton;




	private: System::Windows::Forms::Button^  collisionButton;
	private: System::Windows::Forms::Button^  floodButton;



	private: System::Windows::Forms::Button^  theftButton;
	private: System::Windows::Forms::Button^  thunderStrikeButton;



	private: System::Windows::Forms::Button^  hailButton;
	private: System::Windows::Forms::Button^  lostKeysHelpButton;
	private: System::Windows::Forms::Button^  tireChangeButton;
	private: System::Windows::Forms::ComboBox^  ASSTowingComboBox;
private: System::Windows::Forms::Button^  resignButtonAC;
private: System::Windows::Forms::Button^  resignButtonOC;
private: System::Windows::Forms::Button^  resignButtonASS;
private: System::Windows::Forms::Button^  resignButtonNNW;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  ACMoney;
private: System::Windows::Forms::Label^  OCMoney;
private: System::Windows::Forms::Label^  ASSMoney;
private: System::Windows::Forms::Label^  NNWMoney;








			 System::Windows::Forms::Form ^previousForm;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->ACButton = (gcnew System::Windows::Forms::Button());
				 this->panel2 = (gcnew System::Windows::Forms::Panel());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->OCButton = (gcnew System::Windows::Forms::Button());
				 this->ASSButton = (gcnew System::Windows::Forms::Button());
				 this->NWWButton = (gcnew System::Windows::Forms::Button());
				 this->ASSInfo = (gcnew System::Windows::Forms::TextBox());
				 this->NNWInfo = (gcnew System::Windows::Forms::TextBox());
				 this->NWWMAXMoneyComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->backButton = (gcnew System::Windows::Forms::Button());
				 this->submitButton = (gcnew System::Windows::Forms::Button());
				 this->collisionButton = (gcnew System::Windows::Forms::Button());
				 this->floodButton = (gcnew System::Windows::Forms::Button());
				 this->theftButton = (gcnew System::Windows::Forms::Button());
				 this->thunderStrikeButton = (gcnew System::Windows::Forms::Button());
				 this->hailButton = (gcnew System::Windows::Forms::Button());
				 this->lostKeysHelpButton = (gcnew System::Windows::Forms::Button());
				 this->tireChangeButton = (gcnew System::Windows::Forms::Button());
				 this->ASSTowingComboBox = (gcnew System::Windows::Forms::ComboBox());
				 this->resignButtonAC = (gcnew System::Windows::Forms::Button());
				 this->resignButtonOC = (gcnew System::Windows::Forms::Button());
				 this->resignButtonASS = (gcnew System::Windows::Forms::Button());
				 this->resignButtonNNW = (gcnew System::Windows::Forms::Button());
				 this->ACMoney = (gcnew System::Windows::Forms::Label());
				 this->OCMoney = (gcnew System::Windows::Forms::Label());
				 this->ASSMoney = (gcnew System::Windows::Forms::Label());
				 this->NNWMoney = (gcnew System::Windows::Forms::Label());
				 this->panel2->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // ACButton
				 // 
				 this->ACButton->BackColor = System::Drawing::Color::Brown;
				 this->ACButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->ACButton->Location = System::Drawing::Point(41, 139);
				 this->ACButton->Name = L"ACButton";
				 this->ACButton->Size = System::Drawing::Size(157, 218);
				 this->ACButton->TabIndex = 48;
				 this->ACButton->Text = L"\r\nAC";
				 this->ACButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->ACButton->UseVisualStyleBackColor = false;
				 this->ACButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::ACButton_Click);
				 // 
				 // panel2
				 // 
				 this->panel2->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 this->panel2->Controls->Add(this->label1);
				 this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
				 this->panel2->Location = System::Drawing::Point(0, 0);
				 this->panel2->Name = L"panel2";
				 this->panel2->Size = System::Drawing::Size(782, 70);
				 this->panel2->TabIndex = 44;
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
				 this->label1->Location = System::Drawing::Point(94, 9);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(604, 44);
				 this->label1->TabIndex = 80;
				 this->label1->Text = L"Click on insurnace you want to buy";
				 // 
				 // OCButton
				 // 
				 this->OCButton->BackColor = System::Drawing::Color::Goldenrod;
				 this->OCButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->OCButton->Location = System::Drawing::Point(220, 139);
				 this->OCButton->Name = L"OCButton";
				 this->OCButton->Size = System::Drawing::Size(157, 218);
				 this->OCButton->TabIndex = 50;
				 this->OCButton->Text = L"\r\nOC";
				 this->OCButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->OCButton->UseVisualStyleBackColor = false;
				 this->OCButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::OCButton_Click);
				 // 
				 // ASSButton
				 // 
				 this->ASSButton->BackColor = System::Drawing::SystemColors::Info;
				 this->ASSButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->ASSButton->Location = System::Drawing::Point(408, 139);
				 this->ASSButton->Name = L"ASSButton";
				 this->ASSButton->Size = System::Drawing::Size(157, 218);
				 this->ASSButton->TabIndex = 51;
				 this->ASSButton->Text = L"\r\nASS";
				 this->ASSButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->ASSButton->UseVisualStyleBackColor = false;
				 this->ASSButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::ASSButton_Click);
				 // 
				 // NWWButton
				 // 
				 this->NWWButton->BackColor = System::Drawing::Color::ForestGreen;
				 this->NWWButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->NWWButton->Location = System::Drawing::Point(585, 139);
				 this->NWWButton->Name = L"NWWButton";
				 this->NWWButton->Size = System::Drawing::Size(157, 218);
				 this->NWWButton->TabIndex = 52;
				 this->NWWButton->Text = L"\r\nNNW";
				 this->NWWButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				 this->NWWButton->UseVisualStyleBackColor = false;
				 this->NWWButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::NWWButton_Click);
				 // 
				 // ASSInfo
				 // 
				 this->ASSInfo->BackColor = System::Drawing::SystemColors::Info;
				 this->ASSInfo->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 this->ASSInfo->Location = System::Drawing::Point(434, 238);
				 this->ASSInfo->Name = L"ASSInfo";
				 this->ASSInfo->Size = System::Drawing::Size(100, 15);
				 this->ASSInfo->TabIndex = 57;
				 this->ASSInfo->Text = L"towing up to";
				 this->ASSInfo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				 // 
				 // NNWInfo
				 // 
				 this->NNWInfo->BackColor = System::Drawing::Color::ForestGreen;
				 this->NNWInfo->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 this->NNWInfo->Location = System::Drawing::Point(596, 238);
				 this->NNWInfo->Name = L"NNWInfo";
				 this->NNWInfo->Size = System::Drawing::Size(130, 15);
				 this->NNWInfo->TabIndex = 58;
				 this->NNWInfo->Text = L"max incurance money";
				 this->NNWInfo->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				 this->NNWInfo->TextChanged += gcnew System::EventHandler(this, &InsuranceToChoose::textBox3_TextChanged);
				 // 
				 // NWWMAXMoneyComboBox
				 // 
				 this->NWWMAXMoneyComboBox->BackColor = System::Drawing::Color::ForestGreen;
				 this->NWWMAXMoneyComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->NWWMAXMoneyComboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->NWWMAXMoneyComboBox->FormattingEnabled = true;
				 this->NWWMAXMoneyComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
					 L"don\'t want", L"5 000", L"10 000",
						 L"25 000 ", L"50 000"
				 });
				 this->NWWMAXMoneyComboBox->Location = System::Drawing::Point(605, 266);
				 this->NWWMAXMoneyComboBox->Name = L"NWWMAXMoneyComboBox";
				 this->NWWMAXMoneyComboBox->Size = System::Drawing::Size(121, 24);
				 this->NWWMAXMoneyComboBox->TabIndex = 59;
				 this->NWWMAXMoneyComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &InsuranceToChoose::NWWMAXMoneyComboBox_SelectedIndexChanged);
				 // 
				 // backButton
				 // 
				 this->backButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->backButton->Location = System::Drawing::Point(612, 376);
				 this->backButton->Name = L"backButton";
				 this->backButton->Size = System::Drawing::Size(114, 51);
				 this->backButton->TabIndex = 62;
				 this->backButton->Text = L"Back";
				 this->backButton->UseVisualStyleBackColor = false;
				 this->backButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::backButton_Click_1);
				 // 
				 // submitButton
				 // 
				 this->submitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->submitButton->Location = System::Drawing::Point(483, 376);
				 this->submitButton->Name = L"submitButton";
				 this->submitButton->Size = System::Drawing::Size(114, 51);
				 this->submitButton->TabIndex = 61;
				 this->submitButton->Text = L"Submit";
				 this->submitButton->UseVisualStyleBackColor = false;
				 this->submitButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::submitButton_Click);
				 // 
				 // collisionButton
				 // 
				 this->collisionButton->BackColor = System::Drawing::Color::Firebrick;
				 this->collisionButton->FlatAppearance->BorderColor = System::Drawing::Color::Black;
				 this->collisionButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->collisionButton->Location = System::Drawing::Point(71, 228);
				 this->collisionButton->Name = L"collisionButton";
				 this->collisionButton->Size = System::Drawing::Size(100, 23);
				 this->collisionButton->TabIndex = 68;
				 this->collisionButton->Text = L"collision";
				 this->collisionButton->UseVisualStyleBackColor = false;
				 this->collisionButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::collisionButton_Click);
				 // 
				 // floodButton
				 // 
				 this->floodButton->BackColor = System::Drawing::Color::Firebrick;
				 this->floodButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->floodButton->Location = System::Drawing::Point(71, 256);
				 this->floodButton->Name = L"floodButton";
				 this->floodButton->Size = System::Drawing::Size(100, 23);
				 this->floodButton->TabIndex = 69;
				 this->floodButton->Text = L"flood";
				 this->floodButton->UseVisualStyleBackColor = false;
				 this->floodButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::floodButton_Click);
				 // 
				 // theftButton
				 // 
				 this->theftButton->BackColor = System::Drawing::Color::Firebrick;
				 this->theftButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->theftButton->Location = System::Drawing::Point(71, 199);
				 this->theftButton->Name = L"theftButton";
				 this->theftButton->Size = System::Drawing::Size(100, 23);
				 this->theftButton->TabIndex = 70;
				 this->theftButton->Text = L"theft";
				 this->theftButton->UseVisualStyleBackColor = false;
				 this->theftButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::theftButton_Click);
				 // 
				 // thunderStrikeButton
				 // 
				 this->thunderStrikeButton->BackColor = System::Drawing::Color::Firebrick;
				 this->thunderStrikeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->thunderStrikeButton->Location = System::Drawing::Point(71, 314);
				 this->thunderStrikeButton->Name = L"thunderStrikeButton";
				 this->thunderStrikeButton->Size = System::Drawing::Size(100, 23);
				 this->thunderStrikeButton->TabIndex = 71;
				 this->thunderStrikeButton->Text = L"thunder";
				 this->thunderStrikeButton->UseVisualStyleBackColor = false;
				 this->thunderStrikeButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::thunderStrikeButton_Click);
				 // 
				 // hailButton
				 // 
				 this->hailButton->BackColor = System::Drawing::Color::Firebrick;
				 this->hailButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->hailButton->Location = System::Drawing::Point(71, 285);
				 this->hailButton->Name = L"hailButton";
				 this->hailButton->Size = System::Drawing::Size(100, 23);
				 this->hailButton->TabIndex = 72;
				 this->hailButton->Text = L"hail";
				 this->hailButton->UseVisualStyleBackColor = false;
				 this->hailButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::hailButton_Click);
				 // 
				 // lostKeysHelpButton
				 // 
				 this->lostKeysHelpButton->BackColor = System::Drawing::SystemColors::Info;
				 this->lostKeysHelpButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->lostKeysHelpButton->Location = System::Drawing::Point(433, 296);
				 this->lostKeysHelpButton->Name = L"lostKeysHelpButton";
				 this->lostKeysHelpButton->Size = System::Drawing::Size(111, 23);
				 this->lostKeysHelpButton->TabIndex = 74;
				 this->lostKeysHelpButton->Text = L"lost keys help";
				 this->lostKeysHelpButton->UseVisualStyleBackColor = false;
				 this->lostKeysHelpButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::lostKeysHelpButton_Click);
				 // 
				 // tireChangeButton
				 // 
				 this->tireChangeButton->BackColor = System::Drawing::SystemColors::Info;
				 this->tireChangeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->tireChangeButton->Location = System::Drawing::Point(434, 325);
				 this->tireChangeButton->Name = L"tireChangeButton";
				 this->tireChangeButton->Size = System::Drawing::Size(110, 23);
				 this->tireChangeButton->TabIndex = 73;
				 this->tireChangeButton->Text = L"tire change";
				 this->tireChangeButton->UseVisualStyleBackColor = false;
				 this->tireChangeButton->Click += gcnew System::EventHandler(this, &InsuranceToChoose::tireChangeButton_Click_1);
				 // 
				 // ASSTowingComboBox
				 // 
				 this->ASSTowingComboBox->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->ASSTowingComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->ASSTowingComboBox->FlatStyle = System::Windows::Forms::FlatStyle::System;
				 this->ASSTowingComboBox->FormattingEnabled = true;
				 this->ASSTowingComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"don\'t want", L"200 km", L"400 km", L"800 km" });
				 this->ASSTowingComboBox->Location = System::Drawing::Point(423, 266);
				 this->ASSTowingComboBox->Name = L"ASSTowingComboBox";
				 this->ASSTowingComboBox->Size = System::Drawing::Size(121, 24);
				 this->ASSTowingComboBox->TabIndex = 75;
				 this->ASSTowingComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &InsuranceToChoose::ASSTowingComboBox_SelectedIndexChanged);
				 // 
				 // resignButtonAC
				 // 
				 this->resignButtonAC->BackColor = System::Drawing::Color::Brown;
				 this->resignButtonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->resignButtonAC->Location = System::Drawing::Point(86, 76);
				 this->resignButtonAC->Name = L"resignButtonAC";
				 this->resignButtonAC->Size = System::Drawing::Size(75, 29);
				 this->resignButtonAC->TabIndex = 76;
				 this->resignButtonAC->Text = L"resign";
				 this->resignButtonAC->UseVisualStyleBackColor = false;
				 this->resignButtonAC->Click += gcnew System::EventHandler(this, &InsuranceToChoose::resignButtonAC_Click);
				 // 
				 // resignButtonOC
				 // 
				 this->resignButtonOC->BackColor = System::Drawing::Color::Goldenrod;
				 this->resignButtonOC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->resignButtonOC->Location = System::Drawing::Point(259, 76);
				 this->resignButtonOC->Name = L"resignButtonOC";
				 this->resignButtonOC->Size = System::Drawing::Size(75, 29);
				 this->resignButtonOC->TabIndex = 77;
				 this->resignButtonOC->Text = L"resign";
				 this->resignButtonOC->UseVisualStyleBackColor = false;
				 this->resignButtonOC->Click += gcnew System::EventHandler(this, &InsuranceToChoose::resignButtonOC_Click);
				 // 
				 // resignButtonASS
				 // 
				 this->resignButtonASS->BackColor = System::Drawing::SystemColors::Info;
				 this->resignButtonASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->resignButtonASS->Location = System::Drawing::Point(445, 76);
				 this->resignButtonASS->Name = L"resignButtonASS";
				 this->resignButtonASS->Size = System::Drawing::Size(75, 29);
				 this->resignButtonASS->TabIndex = 78;
				 this->resignButtonASS->Text = L"resign";
				 this->resignButtonASS->UseVisualStyleBackColor = false;
				 this->resignButtonASS->Click += gcnew System::EventHandler(this, &InsuranceToChoose::resignButtonASS_Click);
				 // 
				 // resignButtonNNW
				 // 
				 this->resignButtonNNW->BackColor = System::Drawing::Color::ForestGreen;
				 this->resignButtonNNW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->resignButtonNNW->Location = System::Drawing::Point(623, 76);
				 this->resignButtonNNW->Name = L"resignButtonNNW";
				 this->resignButtonNNW->Size = System::Drawing::Size(75, 29);
				 this->resignButtonNNW->TabIndex = 79;
				 this->resignButtonNNW->Text = L"resign";
				 this->resignButtonNNW->UseVisualStyleBackColor = false;
				 this->resignButtonNNW->Click += gcnew System::EventHandler(this, &InsuranceToChoose::resignButtonNNW_Click);
				 // 
				 // ACMoney
				 // 
				 this->ACMoney->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->ACMoney->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->ACMoney->Location = System::Drawing::Point(71, 111);
				 this->ACMoney->Name = L"ACMoney";
				 this->ACMoney->Size = System::Drawing::Size(100, 23);
				 this->ACMoney->TabIndex = 80;
				 this->ACMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // OCMoney
				 // 
				 this->OCMoney->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->OCMoney->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->OCMoney->Location = System::Drawing::Point(246, 108);
				 this->OCMoney->Name = L"OCMoney";
				 this->OCMoney->Size = System::Drawing::Size(100, 23);
				 this->OCMoney->TabIndex = 81;
				 this->OCMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // ASSMoney
				 // 
				 this->ASSMoney->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->ASSMoney->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->ASSMoney->Location = System::Drawing::Point(433, 108);
				 this->ASSMoney->Name = L"ASSMoney";
				 this->ASSMoney->Size = System::Drawing::Size(100, 23);
				 this->ASSMoney->TabIndex = 82;
				 this->ASSMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // NNWMoney
				 // 
				 this->NNWMoney->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				 this->NNWMoney->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->NNWMoney->Location = System::Drawing::Point(612, 108);
				 this->NNWMoney->Name = L"NNWMoney";
				 this->NNWMoney->Size = System::Drawing::Size(100, 23);
				 this->NNWMoney->TabIndex = 83;
				 this->NNWMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // InsuranceToChoose
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 this->ClientSize = System::Drawing::Size(782, 453);
				 this->Controls->Add(this->NNWMoney);
				 this->Controls->Add(this->ASSMoney);
				 this->Controls->Add(this->OCMoney);
				 this->Controls->Add(this->ACMoney);
				 this->Controls->Add(this->resignButtonNNW);
				 this->Controls->Add(this->resignButtonASS);
				 this->Controls->Add(this->resignButtonOC);
				 this->Controls->Add(this->resignButtonAC);
				 this->Controls->Add(this->ASSTowingComboBox);
				 this->Controls->Add(this->lostKeysHelpButton);
				 this->Controls->Add(this->tireChangeButton);
				 this->Controls->Add(this->hailButton);
				 this->Controls->Add(this->thunderStrikeButton);
				 this->Controls->Add(this->theftButton);
				 this->Controls->Add(this->floodButton);
				 this->Controls->Add(this->collisionButton);
				 this->Controls->Add(this->backButton);
				 this->Controls->Add(this->submitButton);
				 this->Controls->Add(this->NWWMAXMoneyComboBox);
				 this->Controls->Add(this->NNWInfo);
				 this->Controls->Add(this->ASSInfo);
				 this->Controls->Add(this->NWWButton);
				 this->Controls->Add(this->ASSButton);
				 this->Controls->Add(this->OCButton);
				 this->Controls->Add(this->ACButton);
				 this->Controls->Add(this->panel2);
				 this->Name = L"InsuranceToChoose";
				 this->Text = L" ";
				 this->panel2->ResumeLayout(false);
				 this->panel2->PerformLayout();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Show();
	}

	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ACButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//AC ac("PZU",0.08);
		//Insurance.SetAc(ac);
		ACMoney->Show();
		resignButtonAC->Show();
		//ACcheckedListBox->Show();
		theftButton->Show();
		collisionButton->Show();
		floodButton->Show();
		hailButton->Show();
		thunderStrikeButton->Show();

		//insurance.countAC();
		ACMoney->Show();
		/*String^ ACPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = ACPrice;*/
	}
	private: System::Void OCButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		OC oc("PZU", 0.08);
		insurance.setOc(oc);
		insurance.countOC();

		resignButtonOC->Show();
		OCMoney->Show();

		String^ OCPrice = gcnew String((to_string(insurance.getOcPrice()) + "zl").c_str());
		OCMoney->Text = OCPrice;
	}
	private: System::Void ASSButton_Click(System::Object^  sender, System::EventArgs^  e) {

		resignButtonASS->Show();
		ASSMoney->Show();
		ASSInfo->Show();
		ASSTowingComboBox->Show();
		lostKeysHelpButton->Show();
		tireChangeButton->Show();
	}
	private: System::Void NWWButton_Click(System::Object^  sender, System::EventArgs^  e) {
		resignButtonNNW->Show();
		NNWInfo->Show();
		NNWMoney->Show();
		NWWMAXMoneyComboBox->Show();
	}

// -------------------- AC BUTTONS START ------------------------
	private: System::Void theftButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (theftButtonClicked == false) {
			insurance.getAc().setTheft(true);
			theftButtonClicked = true;
			this->theftButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getAc().setTheft(false);
			theftButtonClicked = false;
			this->theftButton->BackColor = System::Drawing::Color::Firebrick;
		}

		insurance.countAC();
		String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = AcPrice;
	}
	private: System::Void collisionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (collisionButtonClicked == false) {
			insurance.getAc().setCollision(true);
			collisionButtonClicked = true;
			this->collisionButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getAc().setCollision(false);
			collisionButtonClicked = false;
			this->collisionButton->BackColor = System::Drawing::Color::Firebrick;
		}

		insurance.countAC();
		String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = AcPrice;
	}
	private: System::Void floodButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (floodButtonClicked == false) {
			insurance.getAc().setFlood(true);
			floodButtonClicked = true;
			this->floodButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getAc().setFlood(false);
			floodButtonClicked = false;
			this->floodButton->BackColor = System::Drawing::Color::Firebrick;
		}

		insurance.countAC();
		String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = AcPrice;
	}
	private: System::Void hailButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (hailButtonClicked == false) {
			insurance.getAc().setHail(true);
			hailButtonClicked = true;
			this->hailButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getAc().setHail(false);
			hailButtonClicked = false;
			this->hailButton->BackColor = System::Drawing::Color::Firebrick;
		}

		insurance.countAC();
		String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = AcPrice;
	}
	private: System::Void thunderStrikeButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (thunderButtonClicked == false) {
			insurance.getAc().setThunder(true);
			thunderButtonClicked = true;
			this->thunderStrikeButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getAc().setThunder(false);
			thunderButtonClicked = false;
			this->thunderStrikeButton->BackColor = System::Drawing::Color::Firebrick;
		}

		insurance.countAC();
		String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
		ACMoney->Text = AcPrice;
	}
			 // -------------------- AC BUTTONS END ------------------------
	private: System::Void backButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		this->previousForm->Show();
	}

			 // -------------------- ASS BUTTONS START ------------------------
	private: System::Void lostKeysHelpButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (lostKeysHelpButtonClicked == false) {
			insurance.getASS().setLostKeysHelp(true);
			lostKeysHelpButtonClicked = true;
			this->lostKeysHelpButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getASS().setLostKeysHelp(false);
			lostKeysHelpButtonClicked = false;
			this->lostKeysHelpButton->BackColor = System::Drawing::SystemColors::Info;
		}

		insurance.countASS();
		String^ ASSPrice = gcnew String((to_string(insurance.getAssPrice()) + "zl").c_str());
		ASSMoney->Text = ASSPrice;
	}
	private: System::Void tireChangeButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (tireChangeButtonClicked == false) {
			insurance.getASS().setTireChange(true);
			tireChangeButtonClicked = true;
			this->tireChangeButton->BackColor = System::Drawing::Color::IndianRed;
		}
		else
		{
			insurance.getASS().setTireChange(false);
			tireChangeButtonClicked = false;
			this->tireChangeButton->BackColor = System::Drawing::SystemColors::Info;
		}

		insurance.countASS();
		String^ ASSPrice = gcnew String((to_string(insurance.getAssPrice()) + "zl").c_str());
		ASSMoney->Text = ASSPrice;
	}
	private: System::Void ASSTowingComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->ASSTowingComboBox->SelectedIndex == 0)
			insurance.getASS().setMaxTowingDistance(0);
		else if (this->ASSTowingComboBox->SelectedIndex == 1)
			insurance.getASS().setMaxTowingDistance(200);
		else if (this->ASSTowingComboBox->SelectedIndex == 2)
			insurance.getASS().setMaxTowingDistance(400);
		else if (this->ASSTowingComboBox->SelectedIndex == 3)
			insurance.getASS().setMaxTowingDistance(800);

		insurance.countASS();
		String^ ASSPrice = gcnew String((to_string(insurance.getAssPrice()) + "zl").c_str());
		ASSMoney->Text = ASSPrice;
	}
			 // -------------------- ASS BUTTONS END ------------------------

			  // -------------------- NNW BUTTONS START ------------------------
	private: System::Void NWWMAXMoneyComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (this->NWWMAXMoneyComboBox->SelectedIndex == 0)
			insurance.getNNW().setMaxInsuranceAmount(0);
		if (this->NWWMAXMoneyComboBox->SelectedIndex == 1)
			insurance.getNNW().setMaxInsuranceAmount(5000);
		else if (this->NWWMAXMoneyComboBox->SelectedIndex == 2)
			insurance.getNNW().setMaxInsuranceAmount(10000);
		else if (this->NWWMAXMoneyComboBox->SelectedIndex == 3)
			insurance.getNNW().setMaxInsuranceAmount(25000);
		else if (this->NWWMAXMoneyComboBox->SelectedIndex == 4)
			insurance.getNNW().setMaxInsuranceAmount(50000);

		insurance.countNNW();
		String^ NNWPrice = gcnew String((to_string(insurance.getNnwPrice()) + "zl").c_str());
		NNWMoney->Text = NNWPrice;
	}
private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	insurance.createFile();

	this->Hide();
	Summary^ summary = gcnew Summary(this, insurance);
	summary->ShowDialog();
}
private: System::Void resignButtonAC_Click(System::Object^  sender, System::EventArgs^  e) {
	
	// Hide all AC buttons and text
	resignButtonAC->Hide();
	ACMoney->Hide();
	theftButton->Hide();
	collisionButton->Hide();
	floodButton->Hide();
	hailButton->Hide();
	thunderStrikeButton->Hide();

	// set button tu unclicked
	insurance.getAc().setTheft(false);
	theftButtonClicked = false;
	this->theftButton->BackColor = System::Drawing::Color::Firebrick;

	insurance.getAc().setCollision(false);
	collisionButtonClicked = false;
	this->collisionButton->BackColor = System::Drawing::Color::Firebrick;

	insurance.getAc().setFlood(false);
	floodButtonClicked = false;
	this->floodButton->BackColor = System::Drawing::Color::Firebrick;

	insurance.getAc().setHail(false);
	hailButtonClicked = false;
	this->hailButton->BackColor = System::Drawing::Color::Firebrick;

	insurance.getAc().setThunder(false);
	thunderButtonClicked = false;
	this->thunderStrikeButton->BackColor = System::Drawing::Color::Firebrick;

	// conut AC 
	insurance.countAC();
	String^ AcPrice = gcnew String((to_string(insurance.getAcPrice()) + "zl").c_str());
	ACMoney->Text = AcPrice;

}
private: System::Void resignButtonOC_Click(System::Object^  sender, System::EventArgs^  e) {
	
	// Hide all OC buttons and text
	OCMoney->Hide();
	resignButtonOC->Hide();

	// count OC
	insurance.setOcPrice(0);
	String^ OCPrice = gcnew String((to_string(insurance.getOcPrice()) + "zl").c_str());
	OCMoney->Text = OCPrice;
}
private: System::Void resignButtonASS_Click(System::Object^  sender, System::EventArgs^  e) {
	// Hide all OC buttons and text
	ASSMoney->Hide();
	resignButtonASS->Hide();
	ASSTowingComboBox->Hide();
	lostKeysHelpButton->Hide();
	tireChangeButton->Hide();

	// unclick all ASS buttons
	insurance.getASS().setLostKeysHelp(false);
	lostKeysHelpButtonClicked = false;
	this->lostKeysHelpButton->BackColor = System::Drawing::SystemColors::Info;
	ASSInfo->Hide();

	insurance.getASS().setTireChange(false);
	tireChangeButtonClicked = false;
	this->tireChangeButton->BackColor = System::Drawing::SystemColors::Info;
	
	this->ASSTowingComboBox->SelectedIndex = 0;

	// count ASS
	insurance.countASS();
	String^ ASSPrice = gcnew String((to_string(insurance.getAssPrice()) + "zl").c_str());
	ASSMoney->Text = ASSPrice;
}
private: System::Void resignButtonNNW_Click(System::Object^  sender, System::EventArgs^  e) {
	// Hide all NNW buttons and text
	NNWMoney->Hide();
	resignButtonNNW->Hide();
	NNWInfo->Hide();

	NWWMAXMoneyComboBox->Hide();

	this->NWWMAXMoneyComboBox->SelectedIndex = 0;

	insurance.countNNW();
	String^ NNWPrice = gcnew String((to_string(insurance.getNnwPrice()) + "zl").c_str());
	NNWMoney->Text = NNWPrice;
}
};
}
