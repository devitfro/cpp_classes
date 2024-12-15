#pragma once

#include <vector>
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"

class NorthAmerica : public Continent {
public:
	vector<Bison> herbivores;
	vector<Wolf> carnivores;

	NorthAmerica();
};
