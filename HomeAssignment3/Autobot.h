// Prosvirin Alexandr B82
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
private:
    std::string rank;
    bool leader;

public:
    Autobot(const std::string& name, const std::string& faction, int powerLevel, const std::string& vehicleMode, const Weapon& weapon, const std::string& rank, bool leader);
    std::string transform() const override;
    std::string getRank() const;
    void setRank(const std::string& rank);
    bool isLeader() const;
    void setLeader(bool leader);
};

#endif