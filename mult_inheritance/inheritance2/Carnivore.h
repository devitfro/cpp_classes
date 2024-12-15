#pragma once

#include <iostream>
#include "Herbivore.h"

using namespace std;

class Carnivore { // плотоядное животное
protected:
	unsigned int power;
	bool isLife;

public:
	// c-tor
	Carnivore();
	Carnivore(unsigned int, bool);

	// set
	void SetPower(unsigned int);
	void SetIsLive(bool);

	// get
	unsigned int GetPower() const;
	bool GetIsLive() const;

	// methods
	void Eat(Herbivore& animal);
};
