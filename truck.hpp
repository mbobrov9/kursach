#pragma once
#include "FACTORY.hpp"

class truckabrica : public FACTORY 
{
public:
	virtual const char* Type() { return "truck"; };
	

	virtual Ñharacteristic* CreateCharacteristic(std::istream& in) 
	{
		Ñharacteristic* c = new Ñharacteristic();
		in >> *c;
		return c;
	}
};
