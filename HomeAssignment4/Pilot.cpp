// Prosvirin Alexandr B82
#include "Pilot.h"

Pilot::Pilot(const std::string& name) : name(name) {}

std::string Pilot::getName() const {
    return name;
}