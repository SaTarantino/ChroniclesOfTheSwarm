#pragma once
#include "BaseCard.h"

using namespace System;

ref class PowerUpCard : public BaseCard
{
public:
	PowerUpCard();

	virtual void setDetail(int) override;
	virtual void setCardPower() override;

	virtual void cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
		TextBox ^, TextBox ^, array<BaseCard^>^, array<BaseCard^>^,
		array<bool> ^, array<bool>^, int) override;

	virtual int getCardType() override;
	virtual int getCardPower() override;

	virtual String ^getTypeString() override;
	virtual String ^getInfo() override;
	
private:
	int cardType = 0;
	int cardPower;
};
