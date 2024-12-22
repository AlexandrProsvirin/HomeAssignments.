// Prosvirin Alexandr B82
#include "Transformer.h"

Transformer::Transformer(const std::string& name, const std::string& type, int powerLevel)
    : name(name), type(type), powerLevel(powerLevel) {}

Transformer::~Transformer() {}

void Transformer::transform() const {
    std::cout << "Transformer [" << name << "] is transforming. Class: Transformer" << std::endl;
}

void Transformer::openFire() const {
    std::cout << "Transformer [" << name << "] is opening fire. Class: Transformer" << std::endl;
}

void Transformer::ulta() const {
    std::cout << "Transformer [" << name << "] is performing ulta. Class: Transformer" << std::endl;
}

std::string Transformer::getName() const { return name; }
std::string Transformer::getType() const { return type; }
int Transformer::getPowerLevel() const { return powerLevel; }