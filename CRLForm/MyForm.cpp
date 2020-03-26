#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CRLForm::MyForm form;
	Application::Run(%form);
}

void CRLForm::MyForm::playCard(int cardToPlay)
{
	if (cardToPlay == 0)
		playCard0();
	if (cardToPlay == 1)
		playCard1();
	if (cardToPlay == 2)
		playCard2();
	if (cardToPlay == 3)
		playCard3();
	if (cardToPlay == 4)
		playCard4();
}

void CRLForm::MyForm::playCard0()
{
	this->_CardType0_0->Text = _CardType0->Text;
	this->_CardPower0_0->Text = _CardPower0->Text;

	if (_aiDeck[0]->returnCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiDeck[0]->returnCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[0] = false;
	}
	else if (_aiDeck[0]->returnCardType() == 1)
	{
		player.setTotalPower(-_aiDeck[0]->returnCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
	}
}

void CRLForm::MyForm::playCard1()
{
	this->_CardType1_1->Text = _CardType1->Text;
	this->_CardPower1_1->Text = _CardPower1->Text;
	
	if (_aiDeck[1]->returnCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiDeck[1]->returnCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[1] = false;
	}
	else if (_aiDeck[1]->returnCardType() == 1)
	{
		player.setTotalPower(-_aiDeck[1]->returnCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
	}
}

void CRLForm::MyForm::playCard2()
{
	this->_CardType2_2->Text = _CardType2->Text;
	this->_CardPower2_2->Text = _CardPower2->Text;

	if (_aiDeck[2]->returnCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiDeck[2]->returnCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[2] = false;
	}
	else if (_aiDeck[2]->returnCardType() == 1)
	{
		player.setTotalPower(-_aiDeck[2]->returnCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
	}
}

void CRLForm::MyForm::playCard3()
{
	this->_CardType3_3->Text = _CardType3->Text;
	this->_CardPower3_3->Text = _CardPower3->Text;

	if (_aiDeck[3]->returnCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiDeck[3]->returnCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[3] = false;
	}
	else if (_aiDeck[3]->returnCardType() == 1)
	{
		player.setTotalPower(-_aiDeck[3]->returnCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
	}
}

void CRLForm::MyForm::playCard4()
{
	this->_CardType4_4->Text = _CardType4->Text;
	this->_CardPower4_4->Text = _CardPower4->Text;

	if (_aiDeck[4]->returnCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiDeck[4]->returnCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[4] = false;
	}
	else if (_aiDeck[4]->returnCardType() == 1)
	{
		player.setTotalPower(-_aiDeck[4]->returnCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());
	}
}
