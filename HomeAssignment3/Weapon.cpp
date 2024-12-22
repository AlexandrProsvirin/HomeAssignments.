// Prosvirin Alexandr B82
#include "Weapon.h"

Weapon::Weapon(const std::string& type, int damage) : type(type), damage(damage) {}

std::string Weapon::getType() const { return type; }
int Weapon::getDamage() const { return damage; }