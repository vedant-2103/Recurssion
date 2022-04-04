#include <iostream>
#include "Reverse.h"
#include <string>

Reverse::Reverse(){}

int Reverse::reverseDigits(int value)
{
    
    if(value>0)
    {
        
        int remainder=(value%10);
        reversed=(reversed*10)+remainder;
        reverseDigits(value/10);
    }
    return reversed;
}

std::string Reverse::reverseString(std::string letters)
{
    
    int length_string=letters.length();
    if (length_string==1)
    {
        return letters;
    }
    else if(i<(length_string/2))
    {
        char temp=letters[i];
        letters[i]=letters[length_string-i-1];
        letters[length_string-i-1]=temp;
        i++;
        reverseString(letters);
    }

    return letters;
}