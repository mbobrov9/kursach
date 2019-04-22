#pragma once

#include "�haracteristic.hpp"

//������� ��� �������� �������
class FACTORY {
public:
	virtual const char* Type() = 0;
	virtual �haracteristic* CreateCharacteristic(std::istream& in) = 0;
};