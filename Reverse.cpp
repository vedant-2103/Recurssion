#include <iostream>
#include "Reverse.h"
#include <string>
#include <typeinfo>

Reverse::Reverse(){}

int Reverse::reverseDigit(int value)
{
    
    if(value>0)
    {
        
        int remainder=(value%10);
        reversed=(reversed*10)+remainder;
        reverseDigit(value/10);
    }
    else
    return -1;
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
        //std::cout<<i<<" "<<letters<<" "<<std::endl;
        letters=reverseString(letters);
    }
    //else if(typeof(letters)!=std::string)
    //{return "ERROR";}
    
    
    return letters;
}