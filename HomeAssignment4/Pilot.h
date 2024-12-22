// Prosvirin Alexandr B82
#ifndef PILOT_H
#define PILOT_H

#include <string>

class Pilot {
  private:
    std::string name;

  public:
    Pilot(const std::string& name);
    std::string getName() const;
};

#endif