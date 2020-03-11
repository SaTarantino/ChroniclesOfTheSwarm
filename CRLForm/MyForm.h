#pragma once
#include "Controller.h"
#include "BaseCard.h"

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  CardType;
	private: System::Windows::Forms::TextBox^  CardPower;
	private: System::Windows::Forms::TextBox^  CardName;
	protected:

	protected:


	protected:
		Controller cont;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CardType = (gcnew System::Windows::Forms::TextBox());
			this->CardPower = (gcnew System::Windows::Forms::TextBox());
			this->CardName = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->CardType->Location = System::Drawing::Point(217, 258);
			this->CardType->Name = L"CardType";
			this->CardType->Size = System::Drawing::Size(100, 20);
			this->CardType->TabIndex = 1;
			// 
			// textBox2
			// 
			this->CardPower->Location = System::Drawing::Point(349, 258);
			this->CardPower->Name = L"CardPower";
			this->CardPower->Size = System::Drawing::Size(100, 20);
			this->CardPower->TabIndex = 2;
			// 
			// textBox3
			// 
			this->CardName->Location = System::Drawing::Point(486, 258);
			this->CardName->Name = L"CardName";
			this->CardName->Size = System::Drawing::Size(100, 20);
			this->CardName->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 561);
			this->Controls->Add(this->CardName);
			this->Controls->Add(this->CardPower);
			this->Controls->Add(this->CardType);
			this->Controls->Add(this->button1);
			this->Name = L"Chronicles Of The Swarm";
			this->Text = L"Chronicles Of The Swarm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int cardType = cont.getCardType(cardType);
		int cardPower = cont.getCardPower(cardPower);
		String^ type;
		String^ power;
		type = System::Convert::ToString(cardType);
		this->CardType->Text = type;
		power = System::Convert::ToString(cardPower);
		this->CardPower->Text = power;
	}
	};
}
