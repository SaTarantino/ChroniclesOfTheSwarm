#pragma once
#include <list>
#include <iterator>
#include "Card.h"

using namespace std;

ref class MatchClass
{
public:
	MatchClass();

	void GenerateDecks();

private:
	const int MAXHAND = 5;
};
