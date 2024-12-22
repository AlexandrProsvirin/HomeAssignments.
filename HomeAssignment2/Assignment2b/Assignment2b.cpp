//Prosvirin Alexandr B82
#include "myheader.h"
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <stdexcept>

double evaluateRPN(const std::string& expression) 
{
    const int maxSize = 100; 
    double* stack = new double[maxSize];
    int stackPointer = -1;
    
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) 
    {
        if (std::isdigit(token[0]) || (token[0] == '-' && token.size() > 1)) 
        {
    
            stack[++stackPointer] = std::stod(token);
        } 
        else {

          
            if (stackPointer < 1) 
            {
                throw std::runtime_error("Недостаточно операндов для выполнения операции");
            }
            double operand2 = stack[stackPointer--];
            double operand1 = stack[stackPointer--];

            if (token == "+") 
            {
                stack[++stackPointer] = operand1 + operand2;
            } 
            else if (token == "-") 
            {
                stack[++stackPointer] = operand1 - operand2;
            } 
            else if (token == "*") 
            {
                stack[++stackPointer] = operand1 * operand2;
            }
             else if (token == "/") 
             {
                if (operand2 == 0) 
                {
                    throw std::runtime_error("Деление на ноль");
                }
                stack[++stackPointer] = operand1 / operand2;
            }
             else 
             {
                throw std::runtime_error("Неизвестный оператор: " + token);
            }
        }
    }

    if (stackPointer != 0)
     {
        delete[] stack;
        throw std::runtime_error("Некорректное выражение");
    }

    double result = stack[stackPointer]; 
    delete[] stack; 
    return result;
}