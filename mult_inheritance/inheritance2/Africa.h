#pragma once

#include <vector>
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"

class Africa : public Continent {
public:
	vector<Wildebeest> herbivores;
	vector<Lion> carnivores;

	Africa();
};
