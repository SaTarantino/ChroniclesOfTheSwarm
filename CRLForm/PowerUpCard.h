#pragma once
#include "Card.h"

ref class PowerUpCard : public Card
{
public:
	PowerUpCard(const int &cardID, const int &effectID, int &cardPower);

	void setCardPower(int &);
	int getCardPower();

	virtual void cardEffect() override;

private:
	int cardPower;
};

