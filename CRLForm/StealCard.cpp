#include "StealCard.h"
#include "BaseCard.h"
#include "PowerUpCard.h"

StealCard::StealCard() : BaseCard()
{

}

void StealCard::setDetail(int power)
{
}

void StealCard::cardEffect(TextBox ^myType, TextBox ^myPower, TextBox ^tBoard, TextBox ^pBoard,
	TextBox ^enemyType, TextBox ^enemyPower, array<BaseCard^>^myDeck, array<BaseCard^>^enemyDeck,
	array<bool>^ enemyHand, int i)
{
	if (enemyHand[i] == true && enemyDeck[i]->returnCardType() != 2)
	{
		myDeck[i] = enemyDeck[i];
		myType->Text = System::Convert::ToString(myDeck[i]->returnCardType());
		myPower->Text = System::Convert::ToString(myDeck[i]->returnCardPower());
		tBoard->Text = "$.$";
		pBoard->Text = "$.$";
		enemyType->Text = "STOLEN";
		enemyPower->Text = "STOLEN";
		enemyHand[i] = false;
	}
	else
	{
		myDeck[i] = gcnew PowerUpCard();
		myDeck[i]->setDetail(2);
		myType->Text = System::Convert::ToString(myDeck[i]->returnCardType());
		myPower->Text = System::Convert::ToString(myDeck[i]->returnCardPower());
		tBoard->Text = "<.<";
		pBoard->Text = "<.<";
		enemyType->Text = "STOLEN";
		enemyPower->Text = "STOLEN";
		enemyHand[i] = false;
	}
}

void StealCard::setCardPower()
{
	cardPower = 0;
}

int StealCard::getCardType(int)
{
	return cardType;
}

int StealCard::getCardPower(int)
{
	return cardPower;
}

int StealCard::returnCardType()
{
	return cardType;
}

int StealCard::returnCardPower()
{
	return cardPower;
}
