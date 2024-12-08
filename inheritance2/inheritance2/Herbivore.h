#pragma once

#include <iostream>
using namespace std;

class Herbivore { // травоядное животное
protected:
	double weight;
	bool isLife;

public:
	// c-tor
	Herbivore();

	Herbivore(double , bool );

	// set
	void SetWeight(double);
	void SetIsLive(bool);

	// get
	double GetWeight() const;
	bool GetIsLive() const;

	// methods
	void EatGrass();
};
