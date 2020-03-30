#pragma once
#include "BaseCard.h"

///
/// This class handle some function relevant for the development of the game.
///
ref class MatchClass
{
public:
	MatchClass();
	
	array<BaseCard^> ^generateDeck();
	void setHandKnolegde(array<bool> ^);
};
