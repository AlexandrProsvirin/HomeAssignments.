// Prosvirin Alexandr B82
#include "Transformer.h"

Transformer::Transformer(const std::string& name, const std::string& faction, int powerLevel, const std::string& vehicleMode, const Weapon& weapon)
    : name(name), faction(faction), powerLevel(powerLevel), vehicleMode(vehicleMode), weapon(weapon), pilot(nullptr) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const { return name; }
void Transformer::setName(const std::string& name) { this->name = name; }

std::string Transformer::getFaction() const { return faction; }
void Transformer::setFaction(const std::string& faction) { this->faction = faction; }

int Transformer::getPowerLevel() const { return powerLevel; }
void Transformer::setPowerLevel(int powerLevel) { this->powerLevel = powerLevel; }

std::string Transformer::getVehicleMode() const { return vehicleMode; }
void Transformer::setVehicleMode(const std::string& vehicleMode) { this->vehicleMode = vehicleMode; }

Weapon Transformer::getWeapon() const { return weapon; }
void Transformer::setWeapon(const Weapon& weapon) { this->weapon = weapon; }

std::string Transformer::transform() const { return "Transformed into " + vehicleMode; }