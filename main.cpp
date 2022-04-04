#include <iostream>
#include "Reverse.h"
#include <string>

int main()
{
    Reverse obj;
    //int res=obj.reverseDigits(82);
    std::string att="elohssA a si hsidnaN";
    

    std::cout<<obj.reverseString(att)<<""<<att.length()<<std::endl;
    return 0;

}