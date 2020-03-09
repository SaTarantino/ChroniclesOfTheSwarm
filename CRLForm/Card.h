#pragma once
//Base class for the Card object
ref class Card
{
public:
	Card(const int &cardId, const int &effectId);

	void setCardId(const int &cardId);
	void setEffectId(const int &effectId);	// This will be 1 for PowerUpCards, 2 for PowerDownCards, 3 for StealCard

	int getCardId();
	int getEffectId();

	virtual void cardEffect() = 0;

private:
	int cdID;
	int effectID;
};





