#pragma once

#include "Device.h"

class Smartphone : public Device {
public:
	Smartphone(string, string, string, unsigned int, unsigned int);
	void Print() override;
	void Download() override;
	void Save() override;
};
