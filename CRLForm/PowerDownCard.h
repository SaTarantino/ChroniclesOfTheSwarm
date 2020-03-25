#pragma once
#include "BaseCard.h"

ref class PowerDownCard : public BaseCard
{
public:
	PowerDownCard();

	virtual void setDetail(int *cardType, int *cardPower) override;
	virtual void setCardPower() override;

	//virtual void cardEffect(int, int) override;

	virtual int getCardType(int) override;

	virtual int getCardPower(int) override;

	virtual int returnCardType() override;

private:
	int cType = 1;
	int totalPower;
};
