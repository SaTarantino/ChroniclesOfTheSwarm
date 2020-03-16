#pragma once
#include "Controller.h"
#include "Players.h"

namespace CRLForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:


	protected:
		Controller cont;


	private: System::Windows::Forms::Button^  Start;
	
	// Player's Hand
	private: System::Windows::Forms::TextBox^  CardType0;
	private: System::Windows::Forms::TextBox^  CardPower0;

	private: System::Windows::Forms::TextBox^  CardType1;
	private: System::Windows::Forms::TextBox^  CardPower1;

	private: System::Windows::Forms::TextBox^  CardType2;
	private: System::Windows::Forms::TextBox^  CardPower2;

	private: System::Windows::Forms::TextBox^  CardType3;
	private: System::Windows::Forms::TextBox^  CardPower3;

	private: System::Windows::Forms::TextBox^  CardType4;
	private: System::Windows::Forms::TextBox^  CardPower4;

	private: System::Windows::Forms::Button^  Play0;
	private: System::Windows::Forms::TextBox^  CardType0_0;
	private: System::Windows::Forms::TextBox^  CardPower0_0;

	private: System::Windows::Forms::Button^  Play1;
	private: System::Windows::Forms::TextBox^  CardType1_1;
	private: System::Windows::Forms::TextBox^  CardPower1_1;

	private: System::Windows::Forms::Button^  Play2;
	private: System::Windows::Forms::TextBox^  CardType2_2;
	private: System::Windows::Forms::TextBox^  CardPower2_2;

	private: System::Windows::Forms::Button^  Play3;
	private: System::Windows::Forms::TextBox^  CardType3_3;
	private: System::Windows::Forms::TextBox^  CardPower3_3;

	private: System::Windows::Forms::Button^  Play4;
	private: System::Windows::Forms::TextBox^  CardType4_4;
	private: System::Windows::Forms::TextBox^  CardPower4_4;

	
	private: System::Windows::Forms::Button^  Roll;
	private: System::Windows::Forms::TextBox^  TotalPower_P;

	private:
		int cardType0_P, cardType1_P, cardType2_P, cardType3_P, cardType4_P;
		int cardPower0_P, cardPower1_P, cardPower2_P, cardPower3_P, cardPower4_P;
		int totalPower_P;
		String^ playerTotalPower;

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
			this->Start = (gcnew System::Windows::Forms::Button());
			this->CardType0 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower0 = (gcnew System::Windows::Forms::TextBox());
			this->CardType1 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower1 = (gcnew System::Windows::Forms::TextBox());
			this->CardType2 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower2 = (gcnew System::Windows::Forms::TextBox());
			this->CardType3 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower3 = (gcnew System::Windows::Forms::TextBox());
			this->CardType4 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower4 = (gcnew System::Windows::Forms::TextBox());
			this->Play0 = (gcnew System::Windows::Forms::Button());
			this->CardType0_0 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower0_0 = (gcnew System::Windows::Forms::TextBox());
			this->Play1 = (gcnew System::Windows::Forms::Button());
			this->CardType1_1 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower1_1 = (gcnew System::Windows::Forms::TextBox());
			this->Play2 = (gcnew System::Windows::Forms::Button());
			this->CardType2_2 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower2_2 = (gcnew System::Windows::Forms::TextBox());
			this->Play3 = (gcnew System::Windows::Forms::Button());
			this->CardType3_3 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower3_3 = (gcnew System::Windows::Forms::TextBox());
			this->Play4 = (gcnew System::Windows::Forms::Button());
			this->CardType4_4 = (gcnew System::Windows::Forms::TextBox());
			this->CardPower4_4 = (gcnew System::Windows::Forms::TextBox());
			this->Roll = (gcnew System::Windows::Forms::Button());
			this->TotalPower_P = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(71, 2);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(51, 23);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// CardType0
			// 
			this->CardType0->Location = System::Drawing::Point(22, 423);
			this->CardType0->Name = L"CardType0";
			this->CardType0->ReadOnly = true;
			this->CardType0->Size = System::Drawing::Size(100, 20);
			this->CardType0->TabIndex = 1;
			// 
			// CardPower0
			// 
			this->CardPower0->Location = System::Drawing::Point(22, 459);
			this->CardPower0->Name = L"CardPower0";
			this->CardPower0->ReadOnly = true;
			this->CardPower0->Size = System::Drawing::Size(100, 20);
			this->CardPower0->TabIndex = 2;
			// 
			// CardType1
			// 
			this->CardType1->Location = System::Drawing::Point(188, 423);
			this->CardType1->Name = L"CardType1";
			this->CardType1->ReadOnly = true;
			this->CardType1->Size = System::Drawing::Size(100, 20);
			this->CardType1->TabIndex = 3;
			// 
			// CardPower1
			// 
			this->CardPower1->Location = System::Drawing::Point(188, 459);
			this->CardPower1->Name = L"CardPower1";
			this->CardPower1->ReadOnly = true;
			this->CardPower1->Size = System::Drawing::Size(100, 20);
			this->CardPower1->TabIndex = 4;
			// 
			// CardType2
			// 
			this->CardType2->Location = System::Drawing::Point(351, 423);
			this->CardType2->Name = L"CardType2";
			this->CardType2->ReadOnly = true;
			this->CardType2->Size = System::Drawing::Size(100, 20);
			this->CardType2->TabIndex = 5;
			// 
			// CardPower2
			// 
			this->CardPower2->Location = System::Drawing::Point(351, 459);
			this->CardPower2->Name = L"CardPower2";
			this->CardPower2->ReadOnly = true;
			this->CardPower2->Size = System::Drawing::Size(100, 20);
			this->CardPower2->TabIndex = 6;
			// 
			// CardType3
			// 
			this->CardType3->Location = System::Drawing::Point(509, 423);
			this->CardType3->Name = L"CardType3";
			this->CardType3->ReadOnly = true;
			this->CardType3->Size = System::Drawing::Size(100, 20);
			this->CardType3->TabIndex = 7;
			// 
			// CardPower3
			// 
			this->CardPower3->Location = System::Drawing::Point(509, 459);
			this->CardPower3->Name = L"CardPower3";
			this->CardPower3->ReadOnly = true;
			this->CardPower3->Size = System::Drawing::Size(100, 20);
			this->CardPower3->TabIndex = 8;
			// 
			// CardType4
			// 
			this->CardType4->Location = System::Drawing::Point(666, 423);
			this->CardType4->Name = L"CardType4";
			this->CardType4->ReadOnly = true;
			this->CardType4->Size = System::Drawing::Size(100, 20);
			this->CardType4->TabIndex = 9;
			// 
			// CardPower4
			// 
			this->CardPower4->Location = System::Drawing::Point(666, 459);
			this->CardPower4->Name = L"CardPower4";
			this->CardPower4->ReadOnly = true;
			this->CardPower4->Size = System::Drawing::Size(100, 20);
			this->CardPower4->TabIndex = 10;
			// 
			// Play0
			// 
			this->Play0->Location = System::Drawing::Point(34, 485);
			this->Play0->Name = L"Play0";
			this->Play0->Size = System::Drawing::Size(75, 23);
			this->Play0->TabIndex = 11;
			this->Play0->Text = L"Play";
			this->Play0->UseVisualStyleBackColor = true;
			this->Play0->Click += gcnew System::EventHandler(this, &MyForm::Play0_Click);
			// 
			// CardType0_0
			// 
			this->CardType0_0->Location = System::Drawing::Point(22, 318);
			this->CardType0_0->Name = L"CardType0_0";
			this->CardType0_0->ReadOnly = true;
			this->CardType0_0->Size = System::Drawing::Size(100, 20);
			this->CardType0_0->TabIndex = 12;
			// 
			// CardPower0_0
			// 
			this->CardPower0_0->Location = System::Drawing::Point(22, 361);
			this->CardPower0_0->Name = L"CardPower0_0";
			this->CardPower0_0->ReadOnly = true;
			this->CardPower0_0->Size = System::Drawing::Size(100, 20);
			this->CardPower0_0->TabIndex = 13;
			// 
			// Play1
			// 
			this->Play1->Location = System::Drawing::Point(200, 485);
			this->Play1->Name = L"Play1";
			this->Play1->Size = System::Drawing::Size(75, 23);
			this->Play1->TabIndex = 14;
			this->Play1->Text = L"Play";
			this->Play1->UseVisualStyleBackColor = true;
			this->Play1->Click += gcnew System::EventHandler(this, &MyForm::Play1_Click);
			// 
			// CardType1_1
			// 
			this->CardType1_1->Location = System::Drawing::Point(188, 318);
			this->CardType1_1->Name = L"CardType1_1";
			this->CardType1_1->ReadOnly = true;
			this->CardType1_1->Size = System::Drawing::Size(100, 20);
			this->CardType1_1->TabIndex = 15;
			// 
			// CardPower1_1
			// 
			this->CardPower1_1->Location = System::Drawing::Point(188, 361);
			this->CardPower1_1->Name = L"CardPower1_1";
			this->CardPower1_1->ReadOnly = true;
			this->CardPower1_1->Size = System::Drawing::Size(100, 20);
			this->CardPower1_1->TabIndex = 16;
			// 
			// Play2
			// 
			this->Play2->Location = System::Drawing::Point(364, 485);
			this->Play2->Name = L"Play2";
			this->Play2->Size = System::Drawing::Size(75, 23);
			this->Play2->TabIndex = 17;
			this->Play2->Text = L"Play";
			this->Play2->UseVisualStyleBackColor = true;
			this->Play2->Click += gcnew System::EventHandler(this, &MyForm::Play2_Click);
			// 
			// CardType2_2
			// 
			this->CardType2_2->Location = System::Drawing::Point(351, 318);
			this->CardType2_2->Name = L"CardType2_2";
			this->CardType2_2->ReadOnly = true;
			this->CardType2_2->Size = System::Drawing::Size(100, 20);
			this->CardType2_2->TabIndex = 18;
			// 
			// CardPower2_2
			// 
			this->CardPower2_2->Location = System::Drawing::Point(351, 361);
			this->CardPower2_2->Name = L"CardPower2_2";
			this->CardPower2_2->ReadOnly = true;
			this->CardPower2_2->Size = System::Drawing::Size(100, 20);
			this->CardPower2_2->TabIndex = 19;
			// 
			// Play3
			// 
			this->Play3->Location = System::Drawing::Point(521, 485);
			this->Play3->Name = L"Play3";
			this->Play3->Size = System::Drawing::Size(75, 23);
			this->Play3->TabIndex = 20;
			this->Play3->Text = L"Play";
			this->Play3->UseVisualStyleBackColor = true;
			this->Play3->Click += gcnew System::EventHandler(this, &MyForm::Play3_Click);
			// 
			// CardType3_3
			// 
			this->CardType3_3->Location = System::Drawing::Point(509, 318);
			this->CardType3_3->Name = L"CardType3_3";
			this->CardType3_3->ReadOnly = true;
			this->CardType3_3->Size = System::Drawing::Size(100, 20);
			this->CardType3_3->TabIndex = 21;
			// 
			// CardPower3_3
			// 
			this->CardPower3_3->Location = System::Drawing::Point(509, 361);
			this->CardPower3_3->Name = L"CardPower3_3";
			this->CardPower3_3->ReadOnly = true;
			this->CardPower3_3->Size = System::Drawing::Size(100, 20);
			this->CardPower3_3->TabIndex = 22;
			// 
			// Play4
			// 
			this->Play4->Location = System::Drawing::Point(678, 485);
			this->Play4->Name = L"Play4";
			this->Play4->Size = System::Drawing::Size(75, 23);
			this->Play4->TabIndex = 23;
			this->Play4->Text = L"Play";
			this->Play4->UseVisualStyleBackColor = true;
			this->Play4->Click += gcnew System::EventHandler(this, &MyForm::Play4_Click);
			// 
			// CardType4_4
			// 
			this->CardType4_4->Location = System::Drawing::Point(666, 318);
			this->CardType4_4->Name = L"CardType4_4";
			this->CardType4_4->ReadOnly = true;
			this->CardType4_4->Size = System::Drawing::Size(100, 20);
			this->CardType4_4->TabIndex = 24;
			// 
			// CardPower4_4
			// 
			this->CardPower4_4->Location = System::Drawing::Point(666, 361);
			this->CardPower4_4->Name = L"CardPower4_4";
			this->CardPower4_4->ReadOnly = true;
			this->CardPower4_4->Size = System::Drawing::Size(100, 20);
			this->CardPower4_4->TabIndex = 25;
			// 
			// Roll
			// 
			this->Roll->Location = System::Drawing::Point(12, 2);
			this->Roll->Name = L"Roll";
			this->Roll->Size = System::Drawing::Size(51, 23);
			this->Roll->TabIndex = 26;
			this->Roll->Text = L"Roll";
			this->Roll->UseVisualStyleBackColor = true;
			this->Roll->Click += gcnew System::EventHandler(this, &MyForm::Roll_Click);
			// 
			// TotalPower_P
			// 
			this->TotalPower_P->Location = System::Drawing::Point(776, 280);
			this->TotalPower_P->Name = L"TotalPower_P";
			this->TotalPower_P->ReadOnly = true;
			this->TotalPower_P->Size = System::Drawing::Size(100, 20);
			this->TotalPower_P->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 534);
			this->Controls->Add(this->TotalPower_P);
			this->Controls->Add(this->Roll);
			this->Controls->Add(this->CardPower4_4);
			this->Controls->Add(this->CardType4_4);
			this->Controls->Add(this->Play4);
			this->Controls->Add(this->CardPower3_3);
			this->Controls->Add(this->CardType3_3);
			this->Controls->Add(this->Play3);
			this->Controls->Add(this->CardPower2_2);
			this->Controls->Add(this->CardType2_2);
			this->Controls->Add(this->Play2);
			this->Controls->Add(this->CardPower1_1);
			this->Controls->Add(this->CardType1_1);
			this->Controls->Add(this->Play1);
			this->Controls->Add(this->CardPower0_0);
			this->Controls->Add(this->CardType0_0);
			this->Controls->Add(this->Play0);
			this->Controls->Add(this->CardPower4);
			this->Controls->Add(this->CardType4);
			this->Controls->Add(this->CardPower3);
			this->Controls->Add(this->CardType3);
			this->Controls->Add(this->CardPower2);
			this->Controls->Add(this->CardType2);
			this->Controls->Add(this->CardPower1);
			this->Controls->Add(this->CardType1);
			this->Controls->Add(this->CardPower0);
			this->Controls->Add(this->CardType0);
			this->Controls->Add(this->Start);
			this->Name = L"MyForm";
			this->Text = L"Chronicles Of The Swarm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Roll_Click(System::Object^  sender, System::EventArgs^  e) {

		Start->Enabled = true;

		//
		// Return Player's Card Type
		//
		cardType0_P = cont.getCardsType(cardType0_P);
		String^ type0;
		type0 = System::Convert::ToString(cardType0_P);
		this->CardType0->Text = type0;

		cardType1_P = cont.getCardsType(cardType1_P);
		String^ type1;
		type1 = System::Convert::ToString(cardType1_P);
		this->CardType1->Text = type1;

		cardType2_P = cont.getCardsType(cardType2_P);
		String^ type2;
		type2 = System::Convert::ToString(cardType2_P);
		this->CardType2->Text = type2;

		cardType3_P = cont.getCardsType(cardType3_P);
		String^ type3;
		type3 = System::Convert::ToString(cardType3_P);
		this->CardType3->Text = type3;

		cardType4_P = cont.getCardsType(cardType4_P);
		String^ type4;
		type4 = System::Convert::ToString(cardType4_P);
		this->CardType4->Text = type4;

		//
		// Return Player's Card Power
		//
		cardPower0_P = cont.getCardPower(cardPower0_P);
		String^ power0;
		power0 = System::Convert::ToString(cardPower0_P);
		this->CardPower0->Text = power0;

		cardPower1_P = cont.getCardPower(cardPower1_P);
		String^ power1;
		power1 = System::Convert::ToString(cardPower1_P);
		this->CardPower1->Text = power1;

		cardPower2_P = cont.getCardPower(cardPower2_P);
		String^ power2;
		power2 = System::Convert::ToString(cardPower2_P);
		this->CardPower2->Text = power2;

		cardPower3_P = cont.getCardPower(cardPower3_P);
		String^ power3;
		power3 = System::Convert::ToString(cardPower3_P);
		this->CardPower3->Text = power3;

		cardPower4_P = cont.getCardPower(cardPower4_P);
		String^ power4;
		power4 = System::Convert::ToString(cardPower4_P);
		this->CardPower4->Text = power4;
	}

	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {

		Play0->Enabled = true;
		Play1->Enabled = true;
		Play2->Enabled = true;
		Play3->Enabled = true;
		Play4->Enabled = true;

		Start->Enabled = false;
		Roll->Enabled = false;
	}

	private: System::Void Play0_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Set the board text box with the value of the card
		this->CardType0_0->Text = CardType0->Text;
		this->CardPower0_0->Text = CardPower0->Text;

		//if (cardType0_P == 0) {
		//	playerTotalPower = playerTotalPower + cardPower0_P;
		//	playerTotalPower = System::Convert::ToString(cardPower0_P);
		//	this->TotalPower_P->Text = playerTotalPower;
		//}

		Play0->Enabled = false;
		CardType0->Enabled = false;
		CardPower0->Enabled = false;
	}

	private: System::Void Play1_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType1_1->Text = CardType1->Text;
		this->CardPower1_1->Text = CardPower1->Text;

		Play1->Enabled = false;
		CardType1->Enabled = false;
		CardPower1->Enabled = false;
	}

	private: System::Void Play2_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType2_2->Text = CardType2->Text;
		this->CardPower2_2->Text = CardPower2->Text;

		if (cardType2_P == 0) {
			totalPower_P = totalPower_P + cardPower2_P;
			playerTotalPower = System::Convert::ToString(totalPower_P);
			this->TotalPower_P->Text = playerTotalPower;
		}

		Play2->Enabled = false;
		CardType2->Enabled = false;
		CardPower2->Enabled = false;
	}

	private: System::Void Play3_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType3_3->Text = CardType3->Text;
		this->CardPower3_3->Text = CardPower3->Text;

		if (cardType3_P == 0) {
			totalPower_P = totalPower_P + cardPower3_P;
			playerTotalPower = System::Convert::ToString(totalPower_P);
			this->TotalPower_P->Text = playerTotalPower;
		}

		Play3->Enabled = false;
		CardType3->Enabled = false;
		CardPower3->Enabled = false;
	}

	private: System::Void Play4_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType4_4->Text = CardType4->Text;
		this->CardPower4_4->Text = CardPower4->Text;

		Play4->Enabled = false;
		CardType4->Enabled = false;
		CardPower4->Enabled = false;
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		Play0->Enabled = false;
		Play1->Enabled = false;
		Play2->Enabled = false;
		Play3->Enabled = false;
		Play4->Enabled = false;
		Start->Enabled = false;
	}
};
}
