#include "elephant.h"

Elephant::Elephant(int capacityOfPeople)
{
	mCapacityOfPeople = capacityOfPeople;
}
Elephant::~Elephant()
{
}

size_t Elephant::getCapacityOfPeople()
{
	return mCapacityOfPeople;
}

void Elephant::speak() const
{
	printf("Elephant sound!\n");
}
