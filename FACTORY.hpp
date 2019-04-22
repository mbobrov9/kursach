#pragma once

#include "Сharacteristic.hpp"

//фабрика для создания техники
class FACTORY {
public:
	virtual const char* Type() = 0;
	virtual Сharacteristic* CreateCharacteristic(std::istream& in) = 0;
};