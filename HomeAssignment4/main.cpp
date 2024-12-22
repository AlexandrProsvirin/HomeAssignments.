// Prosvirin Alexandr B82
#include <iostream>
#include "Autobot.h"
#include "Weapon.h"

int main() {
    Weapon laser("Laser Gun", 100);
    Weapon missile("Missile Launcher", 200);

    Autobot optimus("Optimus Prime", "Autobot", 1000, "Truck", laser, "Commander", true);
    Autobot bumblebee("Bumblebee", "Autobot", 500, "Car", missile, "Scout", false);

    std::cout << optimus << std::endl;
    std::cout << bumblebee << std::endl;

    std::cout << (optimus > bumblebee ? "Optimus is stronger!" : "Bumblebee is stronger!") << std::endl;

    return 0;
}