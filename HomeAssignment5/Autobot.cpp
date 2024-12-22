// Prosvirin Alexandr B82
#include "Autobot.h"

Autobot::Autobot(const std::string& name, int powerLevel)
    : Transformer(name, "Autobot", powerLevel) {}

void Autobot::transform() const {
    std::cout << "Autobot [" << name << "] is transforming. Class: Autobot" << std::endl;
}

void Autobot::openFire() const {
    std::cout << "Autobot [" << name << "] is opening fire. Class: Autobot" << std::endl;
}

void Autobot::ulta() const {
    std::cout << "Autobot [" << name << "] is performing ulta. Class: Autobot" << std::endl;
}