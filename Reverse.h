#ifndef REVERSE_H
#define REVERSE_H
#include <iostream>
#include <string>

class Reverse
{
    private:
    int reversed=0;
    int i=0;
   
    public:
    Reverse();
    int reverseDigits(int value);
    std::string reverseString(std::string letters);
};
#endif