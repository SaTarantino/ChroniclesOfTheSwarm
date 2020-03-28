#pragma once

using namespace System::Windows::Forms;
//Base pure virtual class for the Cards object.
ref class BaseCard
{
public:
	BaseCard();

	virtual void setDetail(int) = 0;
	virtual void setCardPower() = 0;
	
	virtual void cardEffect(TextBox ^, TextBox ^, TextBox ^, TextBox ^,
		TextBox ^, TextBox ^, array<BaseCard^>^, array<BaseCard^>^, 
		array<bool>^, int) = 0;
	virtual int getCardPower(int) = 0;
	virtual int getCardType(int) = 0;

	virtual int returnCardType() = 0;
	virtual int returnCardPower() = 0;
};
