// Prosvirin Alexandr B82
#include <iostream>
#include "Weapon.h"

Weapon::Weapon() : type("Unknown"), damage(0) {}

Weapon::Weapon(const std::string& type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const {
    return type;
}
void Weapon::setType(const std::string& type) {
    this->type = type;
}

int Weapon::getDamage() const {
    return damage;
}
void Weapon::setDamage(int damage) {
    this->damage = damage;
}

std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
    os << "Weapon [Type: " << weapon.type << ", Damage: " << weapon.damage << "]";
    return os;
}