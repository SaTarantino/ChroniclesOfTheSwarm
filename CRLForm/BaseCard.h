#pragma once

using namespace System;
using namespace System::Windows::Forms;

///
///Base pure virtual class for the Card object.
///
ref class BaseCard
{
public:
	BaseCard();

	virtual void setDetail(int) = 0;
	virtual void setCardPower() = 0;
	
	///
	/// The cardEffect function is used in the Steal Card class only.
	/// I had to create this function in this way in orther to be albe 
	/// to call it througt the Base Card class.
	///
	virtual void cardEffect(TextBox ^myType, TextBox ^myPower, TextBox ^tBoard, TextBox ^pBoard,
		TextBox ^enemyType, TextBox ^enemyPower, array<BaseCard^> ^myDeck, array<BaseCard^> ^enemyDeck,
		array<bool> ^myHand, array<bool> ^enemyHand, int i) = 0;

	virtual int getCardType() = 0;
	virtual int getCardPower() = 0;

	virtual String ^getTypeString() = 0;
	virtual String ^getInfo() = 0;
};
