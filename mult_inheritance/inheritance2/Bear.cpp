#include "Bear.h"

Bear::Bear(double weight, unsigned int power, bool isLife)
    : Herbivore(weight, isLife), Carnivore(power, isLife) {
}

void Bear::EatGrass() {
    if (Herbivore::isLife) {
        Herbivore::weight += 20;
    }
}

void Bear::Hunt(Herbivore& animal) {
    if (!animal.GetIsLive()) {
        cout << "Bear cannot hunt a dead animal.\n";
        return;
    }

    if (Carnivore::power > animal.GetWeight()) {
        Carnivore::power += 15;
        animal.SetIsLive(false);
        cout << "Bear hunted animal.\n";
    }
    else {
        Carnivore::power -= 10;
        cout << "Bear can not to hunt animal.\n";
    }
}
