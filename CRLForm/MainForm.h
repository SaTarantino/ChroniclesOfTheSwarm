#pragma once
#include <Windows.h>
#include "Controller.h"
#include "Player.h"
#include "AiPlayer.h"
#include "MatchClass.h"
#include "BaseCard.h"

namespace CRLForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
		void playCard(int cardToPlay);
		void playCard0();
		void playCard1();
		void playCard2();
		void playCard3();
		void playCard4();
		void checkGameStatus(array<bool> ^, array<bool> ^);

	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	///
	/// Player's Hand
	///
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
	///
	/// Playe's Board and Play button  
	///
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
	///
	/// AI's Hand
	///
	private: System::Windows::Forms::TextBox^  _CardType0;
	private: System::Windows::Forms::TextBox^  _CardPower0;

	private: System::Windows::Forms::TextBox^  _CardType1;
	private: System::Windows::Forms::TextBox^  _CardPower1;

	private: System::Windows::Forms::TextBox^  _CardType2;
	private: System::Windows::Forms::TextBox^  _CardPower2;

	private: System::Windows::Forms::TextBox^  _CardType3;
	private: System::Windows::Forms::TextBox^  _CardPower3;

	private: System::Windows::Forms::TextBox^  _CardType4;
	private: System::Windows::Forms::TextBox^  _CardPower4;
	///
	/// AI's Board
	///
	private: System::Windows::Forms::TextBox^  _CardType0_0;
	private: System::Windows::Forms::TextBox^  _CardPower0_0;
	private: System::Windows::Forms::TextBox^  _CardType1_1;
	private: System::Windows::Forms::TextBox^  _CardPower1_1;
	private: System::Windows::Forms::TextBox^  _CardType2_2;
	private: System::Windows::Forms::TextBox^  _CardPower2_2;
	private: System::Windows::Forms::TextBox^  _CardType3_3;
	private: System::Windows::Forms::TextBox^  _CardPower3_3;
	private: System::Windows::Forms::TextBox^  _CardType4_4;
	private: System::Windows::Forms::TextBox^  _CardPower4_4;
	/// Roll Button
	private: System::Windows::Forms::Button^  Roll;
	/// Play Button
	private: System::Windows::Forms::Button^  Start;
	/// New Game Button
	private: System::Windows::Forms::Button^  NewGame;
	/// Player and AI Total Power
	private: System::Windows::Forms::TextBox^  TotalPower_P;
	private: System::Windows::Forms::TextBox^  _TotalPower_A;
private: System::Windows::Forms::TextBox^  WinnerBox;

private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
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
			this->TotalPower_P = (gcnew System::Windows::Forms::TextBox());
			this->Roll = (gcnew System::Windows::Forms::Button());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->_CardType0 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower0 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType1 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower1 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType2 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower2 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType3 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower3 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType4 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower4 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType0_0 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower0_0 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType1_1 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower1_1 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType2_2 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower2_2 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType3_3 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower3_3 = (gcnew System::Windows::Forms::TextBox());
			this->_CardType4_4 = (gcnew System::Windows::Forms::TextBox());
			this->_CardPower4_4 = (gcnew System::Windows::Forms::TextBox());
			this->_TotalPower_A = (gcnew System::Windows::Forms::TextBox());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->WinnerBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
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
			this->Play0->Click += gcnew System::EventHandler(this, &MainForm::Play0_Click);
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
			this->Play1->Click += gcnew System::EventHandler(this, &MainForm::Play1_Click);
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
			this->Play2->Click += gcnew System::EventHandler(this, &MainForm::Play2_Click);
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
			this->Play3->Click += gcnew System::EventHandler(this, &MainForm::Play3_Click);
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
			this->Play4->Click += gcnew System::EventHandler(this, &MainForm::Play4_Click);
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
			// TotalPower_P
			// 
			this->TotalPower_P->Location = System::Drawing::Point(776, 277);
			this->TotalPower_P->Name = L"TotalPower_P";
			this->TotalPower_P->ReadOnly = true;
			this->TotalPower_P->Size = System::Drawing::Size(100, 20);
			this->TotalPower_P->TabIndex = 27;
			// 
			// Roll
			// 
			this->Roll->Location = System::Drawing::Point(99, 2);
			this->Roll->Name = L"Roll";
			this->Roll->Size = System::Drawing::Size(51, 23);
			this->Roll->TabIndex = 26;
			this->Roll->Text = L"Roll";
			this->Roll->UseVisualStyleBackColor = true;
			this->Roll->Click += gcnew System::EventHandler(this, &MainForm::Roll_Click);
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(165, 2);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(51, 23);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MainForm::Start_Click);
			// 
			// _CardType0
			// 
			this->_CardType0->Location = System::Drawing::Point(22, 59);
			this->_CardType0->Name = L"_CardType0";
			this->_CardType0->ReadOnly = true;
			this->_CardType0->Size = System::Drawing::Size(100, 20);
			this->_CardType0->TabIndex = 28;
			// 
			// _CardPower0
			// 
			this->_CardPower0->Location = System::Drawing::Point(22, 96);
			this->_CardPower0->Name = L"_CardPower0";
			this->_CardPower0->ReadOnly = true;
			this->_CardPower0->Size = System::Drawing::Size(100, 20);
			this->_CardPower0->TabIndex = 29;
			// 
			// _CardType1
			// 
			this->_CardType1->Location = System::Drawing::Point(188, 59);
			this->_CardType1->Name = L"_CardType1";
			this->_CardType1->ReadOnly = true;
			this->_CardType1->Size = System::Drawing::Size(100, 20);
			this->_CardType1->TabIndex = 30;
			// 
			// _CardPower1
			// 
			this->_CardPower1->Location = System::Drawing::Point(188, 96);
			this->_CardPower1->Name = L"_CardPower1";
			this->_CardPower1->ReadOnly = true;
			this->_CardPower1->Size = System::Drawing::Size(100, 20);
			this->_CardPower1->TabIndex = 31;
			// 
			// _CardType2
			// 
			this->_CardType2->Location = System::Drawing::Point(351, 59);
			this->_CardType2->Name = L"_CardType2";
			this->_CardType2->ReadOnly = true;
			this->_CardType2->Size = System::Drawing::Size(100, 20);
			this->_CardType2->TabIndex = 32;
			// 
			// _CardPower2
			// 
			this->_CardPower2->Location = System::Drawing::Point(351, 96);
			this->_CardPower2->Name = L"_CardPower2";
			this->_CardPower2->ReadOnly = true;
			this->_CardPower2->Size = System::Drawing::Size(100, 20);
			this->_CardPower2->TabIndex = 33;
			// 
			// _CardType3
			// 
			this->_CardType3->Location = System::Drawing::Point(509, 59);
			this->_CardType3->Name = L"_CardType3";
			this->_CardType3->ReadOnly = true;
			this->_CardType3->Size = System::Drawing::Size(100, 20);
			this->_CardType3->TabIndex = 34;
			// 
			// _CardPower3
			// 
			this->_CardPower3->Location = System::Drawing::Point(509, 96);
			this->_CardPower3->Name = L"_CardPower3";
			this->_CardPower3->ReadOnly = true;
			this->_CardPower3->Size = System::Drawing::Size(100, 20);
			this->_CardPower3->TabIndex = 35;
			// 
			// _CardType4
			// 
			this->_CardType4->Location = System::Drawing::Point(666, 59);
			this->_CardType4->Name = L"_CardType4";
			this->_CardType4->ReadOnly = true;
			this->_CardType4->Size = System::Drawing::Size(100, 20);
			this->_CardType4->TabIndex = 36;
			// 
			// _CardPower4
			// 
			this->_CardPower4->Location = System::Drawing::Point(666, 96);
			this->_CardPower4->Name = L"_CardPower4";
			this->_CardPower4->ReadOnly = true;
			this->_CardPower4->Size = System::Drawing::Size(100, 20);
			this->_CardPower4->TabIndex = 37;
			// 
			// _CardType0_0
			// 
			this->_CardType0_0->Location = System::Drawing::Point(22, 174);
			this->_CardType0_0->Name = L"_CardType0_0";
			this->_CardType0_0->ReadOnly = true;
			this->_CardType0_0->Size = System::Drawing::Size(100, 20);
			this->_CardType0_0->TabIndex = 38;
			// 
			// _CardPower0_0
			// 
			this->_CardPower0_0->Location = System::Drawing::Point(22, 209);
			this->_CardPower0_0->Name = L"_CardPower0_0";
			this->_CardPower0_0->ReadOnly = true;
			this->_CardPower0_0->Size = System::Drawing::Size(100, 20);
			this->_CardPower0_0->TabIndex = 39;
			// 
			// _CardType1_1
			// 
			this->_CardType1_1->Location = System::Drawing::Point(188, 174);
			this->_CardType1_1->Name = L"_CardType1_1";
			this->_CardType1_1->ReadOnly = true;
			this->_CardType1_1->Size = System::Drawing::Size(100, 20);
			this->_CardType1_1->TabIndex = 40;
			// 
			// _CardPower1_1
			// 
			this->_CardPower1_1->Location = System::Drawing::Point(188, 209);
			this->_CardPower1_1->Name = L"_CardPower1_1";
			this->_CardPower1_1->ReadOnly = true;
			this->_CardPower1_1->Size = System::Drawing::Size(100, 20);
			this->_CardPower1_1->TabIndex = 41;
			// 
			// _CardType2_2
			// 
			this->_CardType2_2->Location = System::Drawing::Point(351, 174);
			this->_CardType2_2->Name = L"_CardType2_2";
			this->_CardType2_2->ReadOnly = true;
			this->_CardType2_2->Size = System::Drawing::Size(100, 20);
			this->_CardType2_2->TabIndex = 42;
			// 
			// _CardPower2_2
			// 
			this->_CardPower2_2->Location = System::Drawing::Point(351, 209);
			this->_CardPower2_2->Name = L"_CardPower2_2";
			this->_CardPower2_2->ReadOnly = true;
			this->_CardPower2_2->Size = System::Drawing::Size(100, 20);
			this->_CardPower2_2->TabIndex = 43;
			// 
			// _CardType3_3
			// 
			this->_CardType3_3->Location = System::Drawing::Point(509, 174);
			this->_CardType3_3->Name = L"_CardType3_3";
			this->_CardType3_3->ReadOnly = true;
			this->_CardType3_3->Size = System::Drawing::Size(100, 20);
			this->_CardType3_3->TabIndex = 44;
			// 
			// _CardPower3_3
			// 
			this->_CardPower3_3->Location = System::Drawing::Point(509, 209);
			this->_CardPower3_3->Name = L"_CardPower3_3";
			this->_CardPower3_3->ReadOnly = true;
			this->_CardPower3_3->Size = System::Drawing::Size(100, 20);
			this->_CardPower3_3->TabIndex = 45;
			// 
			// _CardType4_4
			// 
			this->_CardType4_4->Location = System::Drawing::Point(666, 174);
			this->_CardType4_4->Name = L"_CardType4_4";
			this->_CardType4_4->ReadOnly = true;
			this->_CardType4_4->Size = System::Drawing::Size(100, 20);
			this->_CardType4_4->TabIndex = 46;
			// 
			// _CardPower4_4
			// 
			this->_CardPower4_4->Location = System::Drawing::Point(666, 209);
			this->_CardPower4_4->Name = L"_CardPower4_4";
			this->_CardPower4_4->ReadOnly = true;
			this->_CardPower4_4->Size = System::Drawing::Size(100, 20);
			this->_CardPower4_4->TabIndex = 47;
			// 
			// _TotalPower_A
			// 
			this->_TotalPower_A->Location = System::Drawing::Point(776, 240);
			this->_TotalPower_A->Name = L"_TotalPower_A";
			this->_TotalPower_A->ReadOnly = true;
			this->_TotalPower_A->Size = System::Drawing::Size(100, 20);
			this->_TotalPower_A->TabIndex = 48;
			// 
			// NewGame
			// 
			this->NewGame->Location = System::Drawing::Point(12, 2);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(75, 23);
			this->NewGame->TabIndex = 49;
			this->NewGame->Text = L"New Game";
			this->NewGame->UseVisualStyleBackColor = true;
			this->NewGame->Click += gcnew System::EventHandler(this, &MainForm::NewGame_Click);
			// 
			// WinnerBox
			// 
			this->WinnerBox->Location = System::Drawing::Point(351, 259);
			this->WinnerBox->Name = L"WinnerBox";
			this->WinnerBox->ReadOnly = true;
			//this->WinnerBox->Hide();
			this->WinnerBox->Size = System::Drawing::Size(100, 20);
			this->WinnerBox->TabIndex = 50;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 534);
			this->Controls->Add(this->WinnerBox);
			this->Controls->Add(this->NewGame);
			this->Controls->Add(this->_TotalPower_A);
			this->Controls->Add(this->_CardPower4_4);
			this->Controls->Add(this->_CardType4_4);
			this->Controls->Add(this->_CardPower3_3);
			this->Controls->Add(this->_CardType3_3);
			this->Controls->Add(this->_CardPower2_2);
			this->Controls->Add(this->_CardType2_2);
			this->Controls->Add(this->_CardPower1_1);
			this->Controls->Add(this->_CardType1_1);
			this->Controls->Add(this->_CardPower0_0);
			this->Controls->Add(this->_CardType0_0);
			this->Controls->Add(this->_CardPower4);
			this->Controls->Add(this->_CardType4);
			this->Controls->Add(this->_CardPower3);
			this->Controls->Add(this->_CardType3);
			this->Controls->Add(this->_CardPower2);
			this->Controls->Add(this->_CardType2);
			this->Controls->Add(this->_CardPower1);
			this->Controls->Add(this->_CardType1);
			this->Controls->Add(this->_CardType0);
			this->Controls->Add(this->_CardPower0);
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
			this->Name = L"MainForm";
			this->Text = L"Chronicles Of The Swarm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:
			Controller cont;
			MatchClass matchClass;
			Player player;
			AiPlayer _aiPlayer;
			array<BaseCard^> ^playerDeck;
			array<BaseCard^> ^_aiDeck;
			array<bool> ^bool_P = gcnew array<bool>(ARRAY_SIZE);
			array<bool> ^bool_A = gcnew array<bool>(ARRAY_SIZE);
			array<int> ^intTry = gcnew array<int>(ARRAY_SIZE);

		int sleep = 4000;

#pragma endregion
	private: System::Void Roll_Click(System::Object^  sender, System::EventArgs^  e) {

		playerDeck = matchClass.generateDeck();
		
		Start->Enabled = true;
		//
		// Return Player's Card Type
		//

		this->CardType0->Text = Convert::ToString(playerDeck[0]->returnCardType());
		this->CardType1->Text = Convert::ToString(playerDeck[1]->returnCardType());
		this->CardType2->Text = Convert::ToString(playerDeck[2]->returnCardType());
		this->CardType3->Text = Convert::ToString(playerDeck[3]->returnCardType());
		this->CardType4->Text = Convert::ToString(playerDeck[4]->returnCardType());

		//
		// Return Player's Card Power
		//
		this->CardPower0->Text = Convert::ToString(playerDeck[0]->returnCardPower());
		this->CardPower1->Text = Convert::ToString(playerDeck[1]->returnCardPower());
		this->CardPower2->Text = Convert::ToString(playerDeck[2]->returnCardPower());
		this->CardPower3->Text = Convert::ToString(playerDeck[3]->returnCardPower());
		this->CardPower4->Text = Convert::ToString(playerDeck[4]->returnCardPower());
	}

	private: System::Void Start_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set AI deck
		_aiDeck = matchClass.generateDeck();
		
		matchClass.setHandKnolegde(bool_P);
		matchClass.setHandKnolegde(bool_A);

		//
		// Return AI's Card Type
		//
		this->_CardType0->Text = Convert::ToString(_aiDeck[0]->returnCardType());
		this->_CardType1->Text = Convert::ToString(_aiDeck[1]->returnCardType());
		this->_CardType2->Text = Convert::ToString(_aiDeck[2]->returnCardType());
		this->_CardType3->Text = Convert::ToString(_aiDeck[3]->returnCardType());
		this->_CardType4->Text = Convert::ToString(_aiDeck[4]->returnCardType());
		//
		// Return AI's Card Power
		//
		this->_CardPower0->Text = Convert::ToString(_aiDeck[0]->returnCardPower());
		this->_CardPower1->Text = Convert::ToString(_aiDeck[1]->returnCardPower());
		this->_CardPower2->Text = Convert::ToString(_aiDeck[2]->returnCardPower());
		this->_CardPower3->Text = Convert::ToString(_aiDeck[3]->returnCardPower());
		this->_CardPower4->Text = Convert::ToString(_aiDeck[4]->returnCardPower());

		Play0->Enabled = true;
		Play1->Enabled = true;
		Play2->Enabled = true;
		Play3->Enabled = true;
		Play4->Enabled = true;

		Start->Enabled = false;
		Roll->Enabled = false;

		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());
	}

	private: System::Void Play0_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// Set the board text box with the value of the card
		this->CardType0_0->Text = CardType0->Text;
		this->CardPower0_0->Text = CardPower0->Text;
		
		if (playerDeck[0]->returnCardType() == 0)
		{
			player.setTotalPower(playerDeck[0]->returnCardPower());
			this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

			Play0->Enabled = false;
			CardType0->Enabled = false;
			CardPower0->Enabled = false;
			bool_P[0] = false;
		}
		else if (playerDeck[0]->returnCardType() == 1)
		{
			_aiPlayer.setTotalPower(-playerDeck[0]->returnCardPower());
			this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

			Play0->Enabled = false;
			CardType0->Enabled = false;
			CardPower0->Enabled = false;
			bool_P[0] = false;
		}
		else if (playerDeck[0]->returnCardType() == 2)
		{
			playerDeck[0]->cardEffect(CardType0, CardPower0, CardType0_0, CardPower0_0,
				_CardType0, _CardPower0, playerDeck, _aiDeck, bool_P, bool_A, 0);
		}
		playCard(_aiPlayer.cardToPlay(bool_A));
		checkGameStatus(bool_P, bool_A);
	}

	private: System::Void Play1_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType1_1->Text = CardType1->Text;
		this->CardPower1_1->Text = CardPower1->Text;

		if (playerDeck[1]->returnCardType() == 0)
		{
			player.setTotalPower(playerDeck[1]->returnCardPower());
			this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

			Play1->Enabled = false;
			CardType1->Enabled = false;
			CardPower1->Enabled = false;
			bool_P[1] = false;
		}
		else if (playerDeck[1]->returnCardType() == 1)
		{
			_aiPlayer.setTotalPower(-playerDeck[1]->returnCardPower());
			this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

			Play1->Enabled = false;
			CardType1->Enabled = false;
			CardPower1->Enabled = false;
			bool_P[1] = false;
		}
		else if (playerDeck[1]->returnCardType() == 2)
		{
			playerDeck[1]->cardEffect(CardType1, CardPower1, CardType1_1, CardPower1_1,
				_CardType1, _CardPower1, playerDeck, _aiDeck, bool_P, bool_A, 1);
		}
		playCard(_aiPlayer.cardToPlay(bool_A));
		checkGameStatus(bool_P, bool_A);
	}

	private: System::Void Play2_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType2_2->Text = CardType2->Text;
		this->CardPower2_2->Text = CardPower2->Text;

		if (playerDeck[2]->returnCardType() == 0)
		{
			player.setTotalPower(playerDeck[2]->returnCardPower());
			this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

			Play2->Enabled = false;
			CardType2->Enabled = false;
			CardPower2->Enabled = false;
			bool_P[2] = false;
		}
		else if (playerDeck[2]->returnCardType() == 1)
		{
			_aiPlayer.setTotalPower(-playerDeck[2]->returnCardPower());
			this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

			Play2->Enabled = false;
			CardType2->Enabled = false;
			CardPower2->Enabled = false;
			bool_P[2] = false;
		}
		else if (playerDeck[2]->returnCardType() == 2)
		{
			playerDeck[2]->cardEffect(CardType2, CardPower2, CardType2_2, CardPower2_2,
				_CardType2, _CardPower2, playerDeck, _aiDeck, bool_P, bool_A, 2);
		}
		playCard(_aiPlayer.cardToPlay(bool_A));
		checkGameStatus(bool_P, bool_A);
	}

	private: System::Void Play3_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType3_3->Text = CardType3->Text;
		this->CardPower3_3->Text = CardPower3->Text;

		if (playerDeck[3]->returnCardType() == 0)
		{
			player.setTotalPower(playerDeck[3]->returnCardPower());
			this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

			Play3->Enabled = false;
			CardType3->Enabled = false;
			CardPower3->Enabled = false;
			bool_P[3] = false;
		}
		else if (playerDeck[3]->returnCardType() == 1)
		{
			_aiPlayer.setTotalPower(-playerDeck[3]->returnCardPower());
			this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

			Play3->Enabled = false;
			CardType3->Enabled = false;
			CardPower3->Enabled = false;
			bool_P[3] = false;
		}
		else if (playerDeck[3]->returnCardType() == 2)
		{
			playerDeck[3]->cardEffect(CardType3, CardPower3, CardType3_3, CardPower3_3,
				_CardType3, _CardPower3, playerDeck, _aiDeck, bool_P, bool_A, 3);
		}
		playCard(_aiPlayer.cardToPlay(bool_A));
		checkGameStatus(bool_P, bool_A);
	}

	private: System::Void Play4_Click(System::Object^  sender, System::EventArgs^  e) {

		// Set the board text box with the value of the card
		this->CardType4_4->Text = CardType4->Text;
		this->CardPower4_4->Text = CardPower4->Text;

		if (playerDeck[4]->returnCardType() == 0)
		{
			player.setTotalPower(playerDeck[4]->returnCardPower());
			this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

			Play4->Enabled = false;
			CardType4->Enabled = false;
			CardPower4->Enabled = false;
			bool_P[4] = false;
		}
		else if (playerDeck[4]->returnCardType() == 1)
		{
			_aiPlayer.setTotalPower(-playerDeck[4]->returnCardPower());
			this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

			Play4->Enabled = false;
			CardType4->Enabled = false;
			CardPower4->Enabled = false;
			bool_P[4] = false;
		}
		else if (playerDeck[4]->returnCardType() == 2)
		{
			playerDeck[4]->cardEffect(CardType4, CardPower4, CardType4_4, CardPower4_4,
				_CardType4, _CardPower4, playerDeck, _aiDeck, bool_P, bool_A, 4);
		}
		playCard(_aiPlayer.cardToPlay(bool_A));
		checkGameStatus(bool_P, bool_A);
	}

	private: System::Void NewGame_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Restart();
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
		Play0->Enabled = false;
		Play1->Enabled = false;
		Play2->Enabled = false;
		Play3->Enabled = false;
		Play4->Enabled = false;
		Start->Enabled = false;
	}
};
}
