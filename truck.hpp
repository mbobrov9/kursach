#pragma once
#include "FACTORY.hpp"

class truckabrica : public FACTORY 
{
public:
	virtual const char* Type() { return "truck"; };
	

	virtual �haracteristic* CreateCharacteristic(std::istream& in) 
	{
		�haracteristic* c = new �haracteristic();
		in >> *c;
		return c;
	}
};
