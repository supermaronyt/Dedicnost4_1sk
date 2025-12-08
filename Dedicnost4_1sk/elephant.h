#pragma once
#include "Animal.h"
class Elephant //: public Animal
{
public:
	Elephant(int peopleCapacity);
	~Elephant();
	void speak() const;

	size_t getCapacityOfPeople();

private:
	size_t mCapacityOfPeople;

public:
	std::string mCountry;
};

