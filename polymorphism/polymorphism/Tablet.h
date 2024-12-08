#pragma once

#include "Device.h"

class Tablet : public Device {
public:
	Tablet(string, string, string, unsigned int, unsigned int);
	void Print() override;
	void Download() override;
	void Save() override;
};
