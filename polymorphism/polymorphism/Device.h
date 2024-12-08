#pragma once

#include <iostream>
using namespace std;

class Device {
protected:
	string manufactures_name;
	string model;
	string name;
	unsigned int media_capacity;
	unsigned int count;
public:
	// c-tor 
	Device();
	Device(string, string, string, unsigned int, unsigned int);

	// set
	void SetManufacturesName(string);
	void SetModel(string);
	void SetName(string);
	void SetMediaCapacity(double);
	void SetCount(unsigned int);

	// get
	string GetManufacturesName() const;
	string GetModel() const;
	string GetName() const;
	unsigned int GetMediaCapacity() const;
	unsigned int GetCount() const;

	// methods
	virtual void Print();
	virtual void Download();
	virtual void Save();
};