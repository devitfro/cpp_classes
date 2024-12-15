#include "Herbivore.h"
#include "Carnivore.h"
#include "Bison.h"
#include "Lion.h"
#include "Wolf.h"
#include "Bear.h"


void main() {
    Bison bison(700, true);

    Bear bear(300, 800, true);

    bear.EatGrass();
    cout << "Bear's weight after eating grass: " << bear.GetWeight() << "\n";

    // Охота 
    bear.Hunt(bison);
    cout << "Bear's power after hunting: " << bear.GetPower() << "\n";
    cout << "Is bison alive? " << (bison.GetIsLive() ? "Yes" : "No") << "\n";
}