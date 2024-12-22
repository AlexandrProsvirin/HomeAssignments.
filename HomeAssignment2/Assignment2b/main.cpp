//Prosvirin Alexandr B82 Assignment 2b
#include "myheader.h"
#include <iostream>
#include <string>

int main() 
{
    std::string expression;

    std::cout << "Введите выражение в обратной польской записи (операнды и операторы через пробел): ";
    std::getline(std::cin, expression);

    try 
    {
      
        double result = evaluateRPN(expression);
        std::cout << "Результат: " << result << std::endl;
    } 
    catch (const std::runtime_error& e) 
    {

        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}