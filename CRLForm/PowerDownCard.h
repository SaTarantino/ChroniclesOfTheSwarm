#pragma once
#include "BaseCard.h"

ref class PowerDownCard : public BaseCard
{
public:
	PowerDownCard();

	virtual void setDetail(int *cardType, int *cardPower) override;
	virtual void setCardPower() override;

	virtual void cardEffect() override;

	virtual int getCardType(int) override;

	int getCardPower(int);

private:
	int powerDOWNCard = 1;
	int totalPower;
};

