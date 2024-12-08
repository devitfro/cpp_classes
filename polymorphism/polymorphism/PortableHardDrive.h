#pragma once
#include "Device.h"

class PortableHardDrive : public Device {
public:
	PortableHardDrive(string, string, string, unsigned int, unsigned int);
	void Print() override;
	void Download() override;
	void Save() override;
};

