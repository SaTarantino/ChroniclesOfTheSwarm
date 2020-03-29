#include "StealCard.h"
#include "BaseCard.h"
#include "PowerUpCard.h"

StealCard::StealCard() : BaseCard()
{

}

void StealCard::setDetail(int power)
{
}

/// The Steal Card will steal the enemy card in the same position 
/// (Steal card in position 4 will steal the enemy card in the 4th position).
void StealCard::cardEffect(TextBox ^myType, TextBox ^myPower, TextBox ^tBoard, TextBox ^pBoard,
	TextBox ^enemyType, TextBox ^enemyPower, array<BaseCard^> ^myDeck, array<BaseCard^> ^enemyDeck,
	array<bool> ^myHand, array<bool> ^enemyHand, int i)
{

	// If the enemy has a card and is not a Steal card if will copy that card
	// and set the enemy boolean for that spot as false, in order to deactivate
	// the possibility for the enemy to play that card.
	// This actually work just for the AI enemy, in order to fully deactivate the
	// possibility of the user player to play that card we need to deactivate the Play Button as well.
	if (enemyHand[i] == true && enemyDeck[i]->getCardType() != 2)
	{
		myDeck[i] = enemyDeck[i];
		myType->Text = System::Convert::ToString(myDeck[i]->getCardType());
		myPower->Text = System::Convert::ToString(myDeck[i]->getCardPower());
		tBoard->Text = "$.$";
		pBoard->Text = "$.$";
		enemyType->Text = "STOLEN";
		enemyPower->Text = "STOLEN";
		myHand[i] = true;
		enemyHand[i] = false;
	}
	// If the enemy have no card or the card is a Steal Card
	// create a new Power Up card and set it's power equal 2.
	else
	{
		myDeck[i] = gcnew PowerUpCard();
		myDeck[i]->setDetail(2);
		myType->Text = System::Convert::ToString(myDeck[i]->getCardType());
		myPower->Text = System::Convert::ToString(myDeck[i]->getCardPower());
		tBoard->Text = "<.<";
		pBoard->Text = "<.<";
		enemyType->Text = "STOLEN";
		enemyPower->Text = "STOLEN";
		myHand[i] = true;
		enemyHand[i] = false;
	}
}

void StealCard::setCardPower()
{
	cardPower = 0;
}

int StealCard::getCardType()
{
	return cardType;
}

int StealCard::getCardPower()
{
	return cardPower;
}
