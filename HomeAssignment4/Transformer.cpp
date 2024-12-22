// Prosvirin Alexandr B82
#include "Transformer.h"

Transformer::Transformer()
    : name("Unknown"), faction("None"), powerLevel(0), vehicleMode("None"), weapon(Weapon("None", 0)), pilot(nullptr) {}

Transformer::Transformer(const std::string& name, const std::string& faction)
    : name(name), faction(faction), powerLevel(0), vehicleMode("None"), weapon(Weapon("None", 0)), pilot(nullptr) {}

Transformer::Transformer(const std::string& name, const std::string& faction, int powerLevel, const std::string& vehicleMode, const Weapon& weapon)
    : name(name), faction(faction), powerLevel(powerLevel), vehicleMode(vehicleMode), weapon(weapon), pilot(nullptr) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const {
    return name;
}
void Transformer::setName(const std::string& name) {
    this->name = name;
}

std::string Transformer::getFaction() const {
    return faction;
}
void Transformer::setFaction(const std::string& faction) {
    this->faction = faction;
}

int Transformer::getPowerLevel() const {
    return powerLevel;
}
void Transformer::setPowerLevel(int powerLevel) {
    this->powerLevel = powerLevel;
}

std::string Transformer::getVehicleMode() const {
    return vehicleMode;
}
void Transformer::setVehicleMode(const std::string& vehicleMode) {
    this->vehicleMode = vehicleMode;
}

Weapon Transformer::getWeapon() const {
    return weapon;
}
void Transformer::setWeapon(const Weapon& weapon) {
    this->weapon = weapon;
}

std::string Transformer::transform() const {
    return "Transformed into " + vehicleMode;
}

bool Transformer::operator<(const Transformer& other) const {
    return powerLevel < other.powerLevel;
}
bool Transformer::operator>(const Transformer& other) const {
    return powerLevel > other.powerLevel;
}
bool Transformer::operator<=(const Transformer& other) const {
    return powerLevel <= other.powerLevel;
}
bool Transformer::operator>=(const Transformer& other) const {
    return powerLevel >= other.powerLevel;
}
bool Transformer::operator==(const Transformer& other) const {
    return powerLevel == other.powerLevel;
}
bool Transformer::operator!=(const Transformer& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer [Name: " << transformer.name
       << ", Faction: " << transformer.faction
       << ", Power Level: " << transformer.powerLevel
       << ", Vehicle Mode: " << transformer.vehicleMode
       << ", Weapon: " << transformer.weapon.getType()
       << " (" << transformer.weapon.getDamage() << " damage)]";
    return os;
}