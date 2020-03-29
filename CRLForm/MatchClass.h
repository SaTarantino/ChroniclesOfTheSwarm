#pragma once
#include "BaseCard.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

///
/// This class handle some generic function relevant
/// for the development of the game.
///
ref class MatchClass
{
public:
	MatchClass();
	
	array<BaseCard^>^ generateDeck();
	void setHandKnolegde(array<bool> ^);
};
