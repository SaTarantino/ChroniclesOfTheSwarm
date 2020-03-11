#pragma once

//Base class for the Card object.
ref class BaseCard
{
public:
	BaseCard();

	virtual void setDetail(int *cardType, int *cardPower) = 0;
	virtual void setCardPower();
	
	virtual void cardEffect();

	virtual int getCardType(int);
};
