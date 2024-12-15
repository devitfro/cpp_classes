#pragma once

#include "Herbivore.h"
#include "Carnivore.h"

class Bear : public Herbivore, public Carnivore {
public:
    Bear(double, unsigned int, bool isLife = true);
    void EatGrass();
    void Hunt(Herbivore& prey);
};

