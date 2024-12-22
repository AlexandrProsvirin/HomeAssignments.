//Prosvirin Alexandr B82
#ifndef CLASS2_H
#define CLASS2_H

#include <vector>
#include <iostream>

class Class2 {
public:
    bool bar(int x, std::vector<float>& v) {
        return x == static_cast<int>(v.size()); 
    }
    int c_2_1() {
        std::cout << "Class2: c_2_1 called" << std::endl;
        return 5;
    }
    float c_2_2() {
        std::cout << "Class3: c_2_2 called" << std::endl;
        return 1.61f;
    }
    void c_2_3() {
        std::cout << "Class3: c_2_3 called" << std::endl;
    }
};

#endif