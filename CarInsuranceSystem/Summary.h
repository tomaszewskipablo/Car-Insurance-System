#pragma once
#include"Insurance.h"

namespace CarInsuranceSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Summary
	/// </summary>
	public ref class Summary : public System::Windows::Forms::Form
	{
	public:
		Summary(System::Windows::Forms::Form ^previousForm, Insurance & insurance) : insurance(insurance) {
			this->previousForm = previousForm;
			InitializeComponent();
			this->CenterToScreen();

			//
			
			String^ price = gcnew String((to_string(insurance.count()) + "zl").c_str());
			transferPrice->Text = price;

			String^ title = gcnew String(insurance.getUserName().c_str());
			transferTitle->Text = title;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Summary()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		Insurance & insurance;
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::Button^  finishButton;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  transferTitle;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  transferPrice;























		System::Windows::Forms::Form ^previousForm;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Summary::typeid));
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->finishButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->transferTitle = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->transferPrice = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(611, 370);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(114, 51);
			this->backButton->TabIndex = 96;
			this->backButton->Text = L"Back";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &Summary::backButton_Click);
			// 
			// finishButton
			// 
			this->finishButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->finishButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finishButton->Location = System::Drawing::Point(482, 370);
			this->finishButton->Name = L"finishButton";
			this->finishButton->Size = System::Drawing::Size(114, 51);
			this->finishButton->TabIndex = 95;
			this->finishButton->Text = L"Finish";
			this->finishButton->UseVisualStyleBackColor = false;
			this->finishButton->Click += gcnew System::EventHandler(this, &Summary::finishButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(538, 146);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 152);
			this->pictureBox1->TabIndex = 92;
			this->pictureBox1->TabStop = false;
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
			this->panel2->TabIndex = 89;
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
			this->label2->Location = System::Drawing::Point(313, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 44);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Summary";
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
			// name
			// 
			this->name->AutoSize = true;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->name->Location = System::Drawing::Point(61, 117);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(398, 29);
			this->name->TabIndex = 97;
			this->name->Text = L"Thank you for buying our insurance. ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(16, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(484, 29);
			this->label3->TabIndex = 98;
			this->label3->Text = L"To complete your order pay by bank transfer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(55, 189);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(404, 29);
			this->label5->TabIndex = 100;
			this->label5->Text = L"account number: 4012888888881881";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(55, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 29);
			this->label4->TabIndex = 101;
			this->label4->Text = L"transfer title: ";
			// 
			// transferTitle
			// 
			this->transferTitle->AutoSize = true;
			this->transferTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferTitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->transferTitle->Location = System::Drawing::Point(200, 235);
			this->transferTitle->Name = L"transferTitle";
			this->transferTitle->Size = System::Drawing::Size(0, 29);
			this->transferTitle->TabIndex = 102;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(12, 330);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(604, 29);
			this->label6->TabIndex = 103;
			this->label6->Text = L"The file with your purhased insurance has been created";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(12, 301);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(559, 29);
			this->label7->TabIndex = 104;
			this->label7->Text = L"To change insurance components click back button";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(61, 269);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 29);
			this->label8->TabIndex = 105;
			this->label8->Text = L"Price:";
			// 
			// transferPrice
			// 
			this->transferPrice->AutoSize = true;
			this->transferPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transferPrice->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->transferPrice->Location = System::Drawing::Point(216, 269);
			this->transferPrice->Name = L"transferPrice";
			this->transferPrice->Size = System::Drawing::Size(75, 29);
			this->transferPrice->TabIndex = 106;
			this->transferPrice->Text = L"Price:";
			// 
			// Summary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->transferPrice);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->transferTitle);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->name);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->finishButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Name = L"Summary";
			this->Text = L"Summary";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void finishButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
	this->previousForm->Show();
}
};
}
