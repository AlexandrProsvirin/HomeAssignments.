// Prosvirin Alexandr B82
#include "myheader.h"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <algorithm>

char* readFile(const char* fileName, size_t& fileSize) 
{
    std::ifstream infile(fileName, std::ios::binary | std::ios::in);
    if (!infile.is_open()) 
    {
        std::cerr << "Не удалось открыть файл " << fileName << std::endl;
        return nullptr;
    }

    fileSize = std::filesystem::file_size(fileName);
    char* buffer = new char[fileSize];
    infile.read(buffer, fileSize);
    infile.close();

    return buffer;
}

void reverseArray(char* buffer, size_t size) 
{
    for (size_t i = 0; i < size / 2; ++i) 
    {
        std::swap(buffer[i], buffer[size - 1 - i]);
    }
}

void writeFile(const char* fileName, char* buffer, size_t fileSize) 
{
    std::ofstream outfile(fileName, std::ios::binary | std::ios::out);
    if (!outfile.is_open()) 
    {
        std::cerr << "Не удалось создать файл " << fileName << std::endl;
        return;
    }

    outfile.write(buffer, fileSize);
    outfile.close();
}