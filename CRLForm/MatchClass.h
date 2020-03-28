#pragma once
#include "BaseCard.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

ref class MatchClass
{
public:
	MatchClass();
	
	array<BaseCard^>^ generateDeck();
	void setHandKnolegde(array<bool> ^);
	void checkGameStatus(array<bool> ^, array<bool> ^);
};
