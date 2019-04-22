#pragma once
#include "FACTORY.hpp"

class Carabrica : public FACTORY 
{
public:
	virtual const char* Type() { return "Car"; };
	

	virtual �haracteristic* CreateCharacteristic(std::istream& in) 
	{
		�haracteristic* c = new �haracteristic();
		in >> *c;
		return c;
	}
};