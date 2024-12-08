#include "Device.h"

Device::Device() {
	SetManufacturesName("Unknown");
	SetModel("Unknown");
	SetName("Unknown");
	SetMediaCapacity(0);
	SetCount(0);
}

Device::Device(string manufactures_name, string model, string name, unsigned int media_capacity, unsigned int count) {
	SetManufacturesName(manufactures_name);
	SetModel(model);
	SetName(name);
	SetMediaCapacity(media_capacity);
	SetCount(count);
}

// set
void Device::SetManufacturesName(string manufactures_name) {
	this->manufactures_name = manufactures_name;
}

void Device::SetModel(string model) {
	this->model = model;
}

void Device::SetName(string name) {
	this->name = name;
}

void Device::SetMediaCapacity(double media_capacity) {
	this->media_capacity = media_capacity;
}

void Device::SetCount(unsigned int count) {
	this->count = count;
}

// get
string Device::GetManufacturesName() const { return manufactures_name; }
string Device::GetModel() const { return model; }
string Device::GetName() const { return name; }
unsigned int Device::GetMediaCapacity() const { return media_capacity; }
unsigned int Device::GetCount() const { return count; }

// methods
void Device::Print() {
	cout << "Device info:\n";
	cout << "Manufactures name: " << manufactures_name << "\n";
	cout << "Model: " << model << "\n";
	cout << "Name: " << name << "\n";
	cout << "Media capacity: " << media_capacity << "\n";
	cout << "Count: " << count << "\n";
}
void Device::Download() {
	cout << "Downloading...\n";
}
void Device::Save() {
	cout << "Saving...\n";
}
