#pragma once
#include "Card.h"

ref class PowerUpCard : public Card
{

public:
	PowerUpCard(int *cardType, int *cardPower);

	virtual int cardType(int) override;
	virtual int cardPower() override;
	virtual void cardEffect() override;

private:
	int powerUPCard = 0;
	int totalPower;
};
