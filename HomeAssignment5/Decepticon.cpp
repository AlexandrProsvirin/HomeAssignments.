// Prosvirin Alexandr B82
#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, int powerLevel)
    : Transformer(name, "Decepticon", powerLevel) {}

void Decepticon::transform() const {
    std::cout << "Decepticon [" << name << "] is transforming. Class: Decepticon" << std::endl;
}

void Decepticon::openFire() const {
    std::cout << "Decepticon [" << name << "] is opening fire. Class: Decepticon" << std::endl;
}

void Decepticon::ulta() const {
    std::cout << "Decepticon [" << name << "] is performing ulta. Class: Decepticon" << std::endl;
}