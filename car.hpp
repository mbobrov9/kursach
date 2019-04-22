#pragma once
#include "FACTORY.hpp"

class Carabrica : public FACTORY 
{
public:
	virtual const char* Type() { return "Car"; };
	

	virtual Ñharacteristic* CreateCharacteristic(std::istream& in) 
	{
		Ñharacteristic* c = new Ñharacteristic();
		in >> *c;
		return c;
	}
};