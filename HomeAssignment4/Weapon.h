// Prosvirin Alexandr B82
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
  private:
    std::string type;
    int damage;

  public:
    Weapon();
    Weapon(const std::string& type, int damage);

    std::string getType() const;
    void setType(const std::string& type);
    int getDamage() const;
    void setDamage(int damage);

    friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon);
};

#endif