#include "Tablet.h"

Tablet::Tablet(string manufactures_name, string model, string name, unsigned int media_capacity, unsigned int count) : Device(manufactures_name, model, name, media_capacity, count) {}

void Tablet::Print() {
	cout << "Tablet info:\n";
	Device::Print();
}

void Tablet::Download() {
	cout << "Downloading tablet info...\n";
}
void Tablet::Save() {
	cout << "Saving tablet info...\n";
}

