#ifndef MYHEADER_H
#define MYHEADER_H

#include <cstddef> 

char* readFile(const char* fileName, size_t& fileSize);

void reverseArray(char* buffer, size_t size);

void writeFile(const char* fileName, char* buffer, size_t fileSize);

#endif 