#include "Carnivore.h"

// c-tor
Carnivore::Carnivore() {
	SetPower(0);
	SetIsLive(true);
}

Carnivore::Carnivore(unsigned int power, bool isLife) {
	SetPower(power);
	SetIsLive(isLife);
}

// set
void Carnivore::SetPower(unsigned int power) {
	if (power >= 0 && power <= 1500) {
		this->power = power;
	}
}

void Carnivore::SetIsLive(bool isLife) {
	this->isLife = isLife;
}

// get
unsigned int Carnivore::GetPower() const { return power; }

bool Carnivore::GetIsLive() const { return isLife; }

// methods
void Carnivore::Eat(Herbivore& animal) {
	if (!animal.GetIsLive()) {
		cout << "Cannot eat this animal..\n";
		return;
	}

	if (power == 0) {
		isLife = false;
		return;
	}

	if (power > animal.GetWeight()) {
		power += 10;
		animal.SetIsLive(false);
		cout << "This anmal was eaten..\n";
	}
	else {
		power -= 10;
	}
}
