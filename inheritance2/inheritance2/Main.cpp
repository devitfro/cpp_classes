#include "Herbivore.h"
#include "Carnivore.h"
#include "Wildebeest.h"
#include "Bison.h"
#include "Lion.h"
#include "Wolf.h"
#include "Continent.h"
#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"

void main() {
	AnimalWorld world;

	world.MealsHerbivores();
	world.NutritionCarnivores();
}