// Prosvirin Alexandr B82
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>

class Transformer {
protected:
    std::string name;
    std::string type;
    int powerLevel;

public:
    Transformer(const std::string& name, const std::string& type, int powerLevel);
    virtual ~Transformer();

    virtual void transform() const;
    virtual void openFire() const;
    virtual void ulta() const;

    std::string getName() const;
    std::string getType() const;
    int getPowerLevel() const;
};

#endif