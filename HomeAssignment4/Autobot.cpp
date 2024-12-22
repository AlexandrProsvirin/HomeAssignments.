// Prosvirin Alexandr B82
#include "Autobot.h"

Autobot::Autobot() : Transformer(), rank("Unknown"), leader(false) {}

Autobot::Autobot(const std::string& name, const std::string& faction)
    : Transformer(name, faction), rank("Unknown"), leader(false) {}

Autobot::Autobot(const std::string& name, const std::string& faction, int powerLevel, const std::string& vehicleMode, const Weapon& weapon, const std::string& rank, bool leader)
    : Transformer(name, faction, powerLevel, vehicleMode, weapon), rank(rank), leader(leader) {}

std::string Autobot::transform() const {
    return "Autobot " + getName() + " transforms into " + getVehicleMode();
}

std::string Autobot::getRank() const {
    return rank;
}
void Autobot::setRank(const std::string& rank) {
    this->rank = rank;
}

bool Autobot::isLeader() const {
    return leader;
}
void Autobot::setLeader(bool leader) {
    this->leader = leader;
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << static_cast<const Transformer&>(autobot)
       << ", Rank: " << autobot.rank
       << ", Leader: " << (autobot.leader ? "Yes" : "No") << "]";
    return os;
}