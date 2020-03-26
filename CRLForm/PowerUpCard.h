#pragma once
#include "BaseCard.h"

ref class PowerUpCard : public BaseCard
{
public:
	PowerUpCard(); //int *cardType, int *cardPower

	virtual void setDetail(int *cardType, int *cardPower) override;
	virtual void setCardPower() override;

	//virtual void cardEffect(int, int) override;

	virtual int getCardType(int) override;
	virtual int getCardPower(int) override;

	virtual int returnCardType() override;
	virtual int returnCardPower() override;

private:
	int cardType = 0;
	int cardPower;
};
