#pragma once
#include "BaseCard.h"

ref class MatchClass
{
public:
	MatchClass();

	void generateDecks(System::Collections::Generic::List<BaseCard ^> ^in);

private:
	const int MAXHAND = 2;
};
