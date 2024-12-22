//Prosvirin Alexandr B82
#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H

#include <vector>

template <typename T>
class TemplateClass {
private:
    T instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(const T& obj) : instance(obj), number(0), vec{} {}
    bool foo() {
        return instance.bar(number, vec);
    }
};

template <>
class TemplateClass<int> {
private:
    int instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(const int& obj) : instance(obj), number(0), vec{} {}
    bool foo() {
        return true;
    }
};

template <>
class TemplateClass<double> {
private:
    double instance;
    int number;
    std::vector<float> vec;

public:
    TemplateClass(const double& obj) : instance(obj), number(0), vec{} {}
    bool foo() {
        return false;
    }
};

#endif 