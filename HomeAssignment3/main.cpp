// Prosvirin Alexandr B82
#include <iostream>
#include "Autobot.h"

int main() {
    Weapon weapon("Laser Gun", 100);
    Autobot optimus("Optimus Prime", "Autobot", 1000, "Truck", weapon, "Commander", true);

    std::cout << optimus.getName() << " is a " << optimus.getFaction() << " with power level " << optimus.getPowerLevel() << "." << std::endl;
    std::cout << optimus.transform() << std::endl;

    return 0;
}