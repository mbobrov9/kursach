#pragma once
#include "FACTORY.hpp"

class tramabrica : public FACTORY {
public:
	virtual const char* Type() { return "tram"; };
	virtual �haracteristic* CreateCharacteristic(std::istream& in){
		�haracteristic* c = new �haracteristic();
		in >> *c;
		return c;
	}
};