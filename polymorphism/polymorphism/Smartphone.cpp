#include "Smartphone.h"

Smartphone::Smartphone(string manufactures_name, string model, string name, unsigned int media_capacity, unsigned int count) : Device(manufactures_name, model, name, media_capacity, count) {}

void Smartphone::Print() {
	cout << "Smartphone  info:\n";
	Device::Print();
}

void Smartphone::Download() {
	cout << "Downloading smartphone  info...\n";
}
void Smartphone::Save() {
	cout << "Saving smartphone info...\n";
}
