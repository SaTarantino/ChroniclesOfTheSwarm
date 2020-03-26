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
	virtual int returnCardPower() override;

private:
	int cardType = 1;
	int cardPower;
};
