// Prosvirin Alexandr B82
#include <iostream>
#include <vector>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

int main() {
    Autobot a("Optimus Prime", 1000);
    a.transform();
    a.openFire();
    a.ulta();

    Transformer* ptr = new Decepticon("Megatron", 900);
    ptr->transform();
    ptr->openFire();
    ptr->ulta();
    delete ptr;

    std::vector<Transformer*> transformers;
    for (int i = 0; i < 3; ++i) {
        transformers.push_back(new Autobot("Autobot_" + std::to_string(i + 1), 800 + i * 50));
        transformers.push_back(new Decepticon("Decepticon_" + std::to_string(i + 1), 700 + i * 50));
        transformers.push_back(new Transformer("Transformer_" + std::to_string(i + 1), "Neutral", 600 + i * 50));
    }

    for (auto t : transformers) {
        t->transform();
        t->openFire();
        t->ulta();
    }

    for (auto t : transformers) {
        delete t;
    }

    return 0;
}