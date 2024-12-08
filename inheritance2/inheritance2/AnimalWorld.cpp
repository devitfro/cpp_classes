#include "AnimalWorld.h"

void AnimalWorld::MealsHerbivores() {
	for (auto& herbivore : africa.herbivores) {
		if (herbivore.GetIsLive()) {
			herbivore.EatGrass();
		}
	}

	for (auto& herbivore : northAmerica.herbivores) {
		if (herbivore.GetIsLive()) {
			herbivore.EatGrass();
		}
	}
}

void AnimalWorld::NutritionCarnivores() {
	for (auto& carnivore : africa.carnivores) {
		for (auto& herbivore : africa.herbivores) {
			if (herbivore.GetIsLive()) {
				carnivore.Eat(herbivore);
			}
		}
	}

	for (auto& carnivore : northAmerica.carnivores) {
		for (auto& herbivore : northAmerica.herbivores) {
			if (herbivore.GetIsLive()) {
				carnivore.Eat(herbivore);
			}
		}
	}
}


