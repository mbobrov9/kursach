#pragma once
#include "FACTORY.hpp"

class tramabrica : public FACTORY {
public:
	virtual const char* Type() { return "tram"; };
	virtual Ñharacteristic* CreateCharacteristic(std::istream& in){
		Ñharacteristic* c = new Ñharacteristic();
		in >> *c;
		return c;
	}
};