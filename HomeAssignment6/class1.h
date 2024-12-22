//Prosvirin Alexandr B82
#ifndef CLASS1_H
#define CLASS1_H

#include <vector>
#include <iostream>

class Class1 {
public:
    bool bar(int x, std::vector<float>&) {
        return x > 0;
    }
    int c_1_1() {
        std::cout << "Class1: c_1_1 called" << std::endl;
        return 42;
    }
    float c_1_2() {
        std::cout << "Class1: c_1_2 called" << std::endl;
        return 3.14f;
    }
    void c_1_3() {
        std::cout << "Class1: c_1_3 called" << std::endl;
    }
};

#endif