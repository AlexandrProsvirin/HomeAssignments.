//Prosvirin Alexandr B82
#include <iostream>
#include "myheader.h"

int main() 
{
    greet("world");

    std::string input;
    while (true) 
    {
        std::cout << "Enter a name (or 'exit' to quit): ";
        std::getline(std::cin, input);

        if (input == "exit") 
        {
            break;
        }
        
        greet(input);
    }

    return 0;
}