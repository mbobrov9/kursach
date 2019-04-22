#pragma once
#include "FACTORY.hpp"

class TRANSPORT {
private:
	Ñharacteristic *characteristic;
	const char *Type;
public:
	TRANSPORT(FACTORY *factory, std::istream& in) 
	{
		characteristic = factory->CreateCharacteristic(in);
		Type = factory->Type();
	}

	friend std::ostream& operator <<(std::ostream& out, const TRANSPORT& transport) {
		out << transport.Type << '\n' << *(transport.characteristic) << "";
		return out;
	}
	~TRANSPORT();
};