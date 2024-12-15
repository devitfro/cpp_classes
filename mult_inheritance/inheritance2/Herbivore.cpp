#include "Herbivore.h"

// c-tor
Herbivore::Herbivore() {
	SetWeight(0);
	SetIsLive(true);
}

Herbivore::Herbivore(double weigh, bool isLife) {
	SetWeight(weigh);
	SetIsLive(isLife);
}

// set
void Herbivore::SetWeight(double weight) {
	if (weight > 0 && weight <= 1500) {
		this->weight = weight;
	}
}

void Herbivore::SetIsLive(bool isLife) {
	this->isLife = isLife;
}

// get
double Herbivore::GetWeight() const { return weight; }

bool Herbivore::GetIsLive() const { return isLife; }

// methods
void Herbivore::EatGrass() {
	if (isLife) {
		weight += 10;
		cout << "Herbivore eat grass\n";
	}
}

