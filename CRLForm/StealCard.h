#pragma once
#include "BaseCard.h"

using namespace System::Windows::Forms;

ref class StealCard : public BaseCard
{
public:
	StealCard();

	virtual void setDetail(int) override;
	virtual void setCardPower() override;

	virtual void cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
		TextBox ^, TextBox ^, array<BaseCard^> ^, array<BaseCard^> ^,
		array<bool> ^, array<bool> ^, int) override;

	virtual int getCardType(int) override;
	virtual int getCardPower(int) override;

	virtual int returnCardType() override;
	virtual int returnCardPower() override;

private:
	int cardType = 2;
	int cardPower;
};
