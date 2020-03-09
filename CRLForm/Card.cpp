#include "Card.h"

Card::Card(const int &cardID, const int &effID) 
	: cdID(cardID), effectID(effID)
{
}

void Card::setCardId(const int &cardID)
{
	cdID = cardID;
}

int Card::getCardId()
{
	return cdID;
}

void Card::setEffectId(const int &effID)
{
	effectID = effID;
}

int Card::getEffectId()
{
	return effectID;
}
