#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

bool playerHasNoCard = false;
bool aiHasNoCard = false;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CRLForm::MainForm form;
	Application::Run(%form);
}

///
/// The playCard function use and integer (cardSpot)
/// taken from the cardToPlay function in the AiPlayer class.
/// Use cardSpot for select the card to play.
///
void CRLForm::MainForm::playCard(int cardSpot)
{
	///
	/// The Sleep function is used for create a sort of "wait for it" effect.
	/// Since that the AI will take ~5 seconds for pick the last 2 card
	/// I have added this Sleep funtion in order to create a more homogeneous effect.
	/// It will last less every time the playCard function is called.
	///
	if (cardSpot == 0)
	{
		//Sleep(sleep);
		sleep - 800;
		playCard0();
	}
	if (cardSpot == 1)
	{
		//Sleep(sleep);
		sleep - 800;
		playCard1();
	}
	if (cardSpot == 2)
	{
		//Sleep(sleep);
		sleep - 800;
		playCard2();
	}
	if (cardSpot == 3)
	{
		//Sleep(sleep);
		sleep - 800;
		playCard3();
	}
	if (cardSpot == 4)
	{
		//Sleep(sleep);
		sleep - 800;
		playCard4();
	}
	/// If cardSpot == 6 means that the AI has no more card to play.
	if (cardSpot == 6)
	{
		aiHasNoCard = true;
	}
}

void CRLForm::MainForm::playCard0()
{
	this->_CardType0_0->Text = _CardType0->Text;
	this->_CardPower0_0->Text = _CardPower0->Text;

	if (_aiHand[0]->getCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiHand[0]->getCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[0] = false;
	}
	else if (_aiHand[0]->getCardType() == 1)
	{
		player.setTotalPower(-_aiHand[0]->getCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

		bool_A[0] = false;
	}
	else if (_aiHand[0]->getCardType() == 2)
	{
		_aiHand[0]->cardEffect(_CardType0, _CardPower0, _CardType0_0, _CardPower0_0,
			CardType0, CardPower0, _aiHand, playerHand, bool_A, bool_P, 0);

		Play0->Enabled = false;
	}

	logController(1, 0);
	checkGameStatus(bool_P, bool_A);
}

void CRLForm::MainForm::playCard1()
{
	this->_CardType1_1->Text = _CardType1->Text;
	this->_CardPower1_1->Text = _CardPower1->Text;
	
	if (_aiHand[1]->getCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiHand[1]->getCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[1] = false;
	}
	else if (_aiHand[1]->getCardType() == 1)
	{
		player.setTotalPower(-_aiHand[1]->getCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

		bool_A[1] = false;
	}
	else if (_aiHand[1]->getCardType() == 2)
	{
		_aiHand[1]->cardEffect(_CardType1, _CardPower1, _CardType1_1, _CardPower1_1,
			CardType1, CardPower1, _aiHand, playerHand, bool_A, bool_P, 1);

		Play1->Enabled = false;
	}

	logController(1, 1);
	checkGameStatus(bool_P, bool_A);
}

void CRLForm::MainForm::playCard2()
{
	this->_CardType2_2->Text = _CardType2->Text;
	this->_CardPower2_2->Text = _CardPower2->Text;

	if (_aiHand[2]->getCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiHand[2]->getCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[2] = false;
	}
	else if (_aiHand[2]->getCardType() == 1)
	{
		player.setTotalPower(-_aiHand[2]->getCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

		bool_A[2] = false;
	}
	else if (_aiHand[2]->getCardType() == 2)
	{
		_aiHand[2]->cardEffect(_CardType2, _CardPower2, _CardType2_2, _CardPower2_2,
			CardType2, CardPower2, _aiHand, playerHand, bool_A, bool_P, 2);

		Play2->Enabled = false;
	}

	logController(1, 2);
	checkGameStatus(bool_P, bool_A);
}

void CRLForm::MainForm::playCard3()
{
	this->_CardType3_3->Text = _CardType3->Text;
	this->_CardPower3_3->Text = _CardPower3->Text;

	if (_aiHand[3]->getCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiHand[3]->getCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[3] = false;
	}
	else if (_aiHand[3]->getCardType() == 1)
	{
		player.setTotalPower(-_aiHand[3]->getCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

		bool_A[3] = false;
	}
	else if (_aiHand[3]->getCardType() == 2)
	{
		_aiHand[3]->cardEffect(_CardType3, _CardPower3, _CardType3_3, _CardPower3_3,
			CardType3, CardPower3, _aiHand, playerHand, bool_A, bool_P, 3);

		Play3->Enabled = false;
	}

	logController(1, 3);
	checkGameStatus(bool_P, bool_A);
}

void CRLForm::MainForm::playCard4()
{
	this->_CardType4_4->Text = _CardType4->Text;
	this->_CardPower4_4->Text = _CardPower4->Text;

	if (_aiHand[4]->getCardType() == 0)
	{
		_aiPlayer.setTotalPower(_aiHand[4]->getCardPower());
		this->_TotalPower_A->Text = Convert::ToString(_aiPlayer.getTotalPower());

		bool_A[4] = false;
	}
	else if (_aiHand[4]->getCardType() == 1)
	{
		player.setTotalPower(-_aiHand[4]->getCardPower());
		this->TotalPower_P->Text = Convert::ToString(player.getTotalPower());

		bool_A[4] = false;
	}
	else if (_aiHand[4]->getCardType() == 2)
	{
		_aiHand[4]->cardEffect(_CardType4, _CardPower4, _CardType4_4, _CardPower4_4,
			CardType4, CardPower4, _aiHand, playerHand, bool_A, bool_P, 4);

		Play4->Enabled = false;
	}

	logController(1, 4);
	checkGameStatus(bool_P, bool_A);
}

///
/// This functio is used to check the status of the player arrays of booleans
/// used to keep track of the player hand in order to finish the game
/// when both players have no more cards.
///
/// It's called every time a card is played, since that a Steal Card can change the entire flow of the game.
/// This is problably the less efficent function of the whole project, but I've prefered
/// lose a bit in performance in order to have a more reliability.
///
void CRLForm::MainForm::checkGameStatus(array<bool> ^playerHand, array<bool> ^aiHand)
{
	int i;
	int playerCount;

	for (i = 0; i < ARRAY_SIZE; i++)
	{
		if (playerHand[i] == false)
		{
			playerCount++;
		}
		else if (playerHand[i] == true)
		{
			playerCount--;
		}
	}

	if (playerCount == 5)
	{
		for (i = 0; i < ARRAY_SIZE; i++)
		{
			if (aiHand[i] == true)
			{
				sleep = 0;
				playCard(i);	
			}		
		}
		aiHasNoCard = true;
		playerHasNoCard = true;
	}

	/// The statemente that check when it's time to finish the game.
	if (playerHasNoCard == true)
	{
		if (aiHasNoCard == true)
		{
			if (player.getTotalPower() > _aiPlayer.getTotalPower())
			{
				this->WinnerBox->Show();
				this->WinnerBox->Text = "YOU WON!";
				sw->WriteLine("Player {0} - AI {1}", player.getTotalPower(), _aiPlayer.getTotalPower());
				sw->WriteLine("Player Win!");
			}
			else if (player.getTotalPower() < _aiPlayer.getTotalPower())
			{
				this->WinnerBox->Show();
				this->WinnerBox->Text = "YOU LOST!";
				sw->WriteLine("AI {0} - Player {1}", _aiPlayer.getTotalPower(), player.getTotalPower());
				sw->WriteLine("AI Win!");
			}
			else if (player.getTotalPower() == _aiPlayer.getTotalPower())
			{
				this->WinnerBox->Show();
				this->WinnerBox->Text = "DRAW!";
				sw->WriteLine("Player {0} - AI {0}", player.getTotalPower(), _aiPlayer.getTotalPower());
				sw->WriteLine("Draw!");
			}
		}
	}
}

void CRLForm::MainForm::logController(int playerID, int card)
{
	if (playerID == 0)
	{
		/// Player play
		sw->WriteLine("Player play: {0}", playerHand[card]->getInfo());
		sw->WriteLine("Cards yet to be played: ");
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			if (bool_P[i] == true)
			{
				sw->WriteLine(playerHand[i]->getInfo());
			}
		}
		sw->WriteLine(" ");
		sw->WriteLine("Player Total Power: {0}\n", player.getTotalPower());
	}

	if (playerID == 1)
	{
		/// AI play
		sw->WriteLine("AI play: {0}", _aiHand[card]->getInfo());
		sw->WriteLine("Cards yet to be played: ");
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			if (bool_A[i] == true)
			{
				sw->WriteLine(_aiHand[i]->getInfo());
			}
		}
		sw->WriteLine(" ");
		sw->WriteLine("AI Total Power: {0}\n\n", _aiPlayer.getTotalPower());
	}
	sw->WriteLine(" ");
}
