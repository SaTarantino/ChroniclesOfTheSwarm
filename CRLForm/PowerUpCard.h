#pragma once
#include "BaseCard.h"

ref class PowerUpCard : public BaseCard
{

public:
	PowerUpCard(); //int *cardType, int *cardPower

	virtual void setDetail(int *cardType, int *cardPower) override;
	virtual void setCardPower() override;

	virtual void cardEffect() override;

	virtual int getCardType(int) override;

	int getCardPower(int);

private:
	int powerUPCard = 0;
	int totalPower;
};
