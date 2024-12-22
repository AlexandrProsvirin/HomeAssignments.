//Prosvirin Alexandr B82
#ifndef CLASS3_H
#define CLASS3_H

#include <vector>
#include <iostream>

class Class3 {
public:
    bool bar(int x, std::vector<float>& v) {
        return x == static_cast<int>(v.size()); 
    }
    int c_3_1() {
        std::cout << "Class3: c_3_1 called" << std::endl;
        return 5;
    }
    float c_3_2() {
        std::cout << "Class3: c_3_2 called" << std::endl;
        return 1.61f;
    }
    void c_3_3() {
        std::cout << "Class3: c_3_3 called" << std::endl;
    }
};

#endif