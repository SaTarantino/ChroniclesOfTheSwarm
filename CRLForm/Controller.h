#pragma once
#include "BaseCard.h"
#include "PowerUpCard.h"
#include "PowerDownCard.h"

using namespace System;
#define ARRAY_SIZE 5

ref class Controller
{
public:
	Controller();

	void populateArray(array<int> ^, int, int, int, int, int);
};
