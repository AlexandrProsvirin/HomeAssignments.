//Prosvirin Alexandr B82 Assignment 2a
#include "myheader.h"
#include <iostream>

int main() 
{
    size_t fileSize;
    char* buffer = readFile("first.bin", fileSize);
    
    if (!buffer) return 1; 

    reverseArray(buffer, fileSize);
    writeFile("reverse.bin", buffer, fileSize);

    delete[] buffer; 
    std::cout << "Файл успешно обработан и сохранен как reverse.bin" << std::endl;
    
    return 0;
}