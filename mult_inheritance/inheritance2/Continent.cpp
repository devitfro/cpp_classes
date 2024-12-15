#include "Continent.h"

Continent::Continent() {
	SetArea(0);
}

Continent::Continent(float area) {
	SetArea(area);
}

void Continent::SetArea(float area) {
	this->area = area;
}

float Continent::GetArea() const { return area; }


