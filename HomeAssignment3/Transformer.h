// Prosvirin Alexandr B82
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Weapon.h"
#include "Pilot.h"

class Transformer {
protected:
    std::string name;
    std::string faction;
    int powerLevel;
    std::string vehicleMode;
    Weapon weapon;  

public:
    Transformer(const std::string& name, const std::string& faction, int powerLevel, const std::string& vehicleMode, const Weapon& weapon);
    virtual ~Transformer();
    std::string getName() const;
    void setName(const std::string& name);
    std::string getFaction() const;
    void setFaction(const std::string& faction);
    int getPowerLevel() const;
    void setPowerLevel(int powerLevel);
    std::string getVehicleMode() const;
    void setVehicleMode(const std::string& vehicleMode);
    Weapon getWeapon() const;
    void setWeapon(const Weapon& weapon);

    Pilot* pilot;

    virtual std::string transform() const;
};

#endif