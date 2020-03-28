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
	{
		//Sleep(sleep);
		sleep - 1000;
		playCard0();
	}
	if (cardToPlay == 1)
	{
		//Sleep(sleep);
		sleep - 1000;
		playCard1();
	}
	if (cardToPlay == 2)
	{
		//Sleep(sleep);
		sleep - 1000;
		playCard2();
	}
	if (cardToPlay == 3)
	{
		//Sleep(sleep);
		sleep - 1000;
		playCard3();
	}
	if (cardToPlay == 4)
	{
		//Sleep(sleep);
		sleep - 1000;
		playCard4();
	}
	if (cardToPlay >= 6) 
	{
		Roll->Enabled = true;
	}

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

		bool_A[0] = false;
	}
	else if (_aiDeck[0]->returnCardType() == 2)
	{
		_aiDeck[0]->cardEffect(_CardType0, _CardPower0, _CardType0_0, _CardPower0_0,
			CardType0, CardPower0, _aiDeck, playerDeck, bool_P, 0);

		Play0->Enabled = false;
	}

	checkGameStatus(bool_P, bool_A);
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

		bool_A[1] = false;
	}
	else if (_aiDeck[1]->returnCardType() == 2)
	{
		_aiDeck[1]->cardEffect(_CardType1, _CardPower1, _CardType1_1, _CardPower1_1,
			CardType1, CardPower1, _aiDeck, playerDeck, bool_P, 1);

		Play1->Enabled = false;
	}

	checkGameStatus(bool_P, bool_A);
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

		bool_A[2] = false;
	}
	else if (_aiDeck[2]->returnCardType() == 2)
	{
		_aiDeck[2]->cardEffect(_CardType2, _CardPower2, _CardType2_2, _CardPower2_2,
			CardType2, CardPower2, _aiDeck, playerDeck, bool_P, 2);

		Play2->Enabled = false;
	}

	checkGameStatus(bool_P, bool_A);
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

		bool_A[3] = false;
	}
	else if (_aiDeck[3]->returnCardType() == 2)
	{
		_aiDeck[3]->cardEffect(_CardType3, _CardPower3, _CardType3_3, _CardPower3_3,
			CardType3, CardPower3, _aiDeck, playerDeck, bool_P, 3);

		Play3->Enabled = false;
	}

	checkGameStatus(bool_P, bool_A);
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

		bool_A[4] = false;
	}
	else if (_aiDeck[4]->returnCardType() == 2)
	{
		_aiDeck[4]->cardEffect(_CardType4, _CardPower4, _CardType4_4, _CardPower4_4,
			CardType4, CardPower4, _aiDeck, playerDeck, bool_P, 4);

		Play4->Enabled = false;
	}

	checkGameStatus(bool_P, bool_A);
}

void CRLForm::MyForm::checkGameStatus(array<bool> ^playerHand, array<bool> ^aiHand)
{
	int i, playerCount, aiCount;

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (playerHand[i] == false)
			playerCount++;

		if (aiHand[i] == false)
			aiCount++;
	}

	if (playerCount == ARRAY_SIZE)
	{
		for (i = 0; i < ARRAY_SIZE; i++)
		{
			if (aiHand[i] == true)
				playCard(i);
		}
	}
}