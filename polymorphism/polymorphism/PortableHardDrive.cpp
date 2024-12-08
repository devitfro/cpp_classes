#include "PortableHardDrive.h"

PortableHardDrive::PortableHardDrive(string manufactures_name, string model, string name, unsigned int media_capacity, unsigned int count) : Device(manufactures_name, model, name, media_capacity, count) {}

void PortableHardDrive::Print() {
	cout << "Portable hard drive info:\n";
	Device::Print();
}

void PortableHardDrive::Download() {
	cout << "Downloading portable hard drive info...\n";
}
void PortableHardDrive::Save() {
	cout << "Saving portable hard drive info...\n";
}

