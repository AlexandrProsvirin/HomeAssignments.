// Prosvirin Alexandr B82
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name, int powerLevel);
    void transform() const override;
    void openFire() const override;
    void ulta() const override;
};

#endif