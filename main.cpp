#include <iostream>
#include "Reverse.h"
#include <string>
#include "Truckloads.h"
#include "EfficientTruckloads.h"

int main()
{
    Reverse obj;
    Truckloads trucks;
    EfficientTruckloads truck23;
    int i,numCrates,loadSize;
    std::string s;
    
    std::cout<<"Enter your options: ";
    std::cin>>i>>s>>numCrates>>loadSize;
    int rd=obj.reverseDigit(i);
    std::string rs=obj.reverseString(s);
    int nc=trucks.numTrucks(numCrates,loadSize);
    int ls=truck23.numTrucks(numCrates,loadSize);

    if(rd!=-1 && (nc==0 || ls==0))
    {std::cout<<obj.reverseDigit(i)<<" "<<obj.reverseString(s)<<" "<<"ERROR"<<" "<<"ERROR";}
    else if(rd==-1 && (nc!=0 || ls!=0))
    {std::cout<<"ERROR"<<" "<<obj.reverseString(s)<<" "<<nc<<" "<<ls;}
    else
    {std::cout<<rd<<" "<<obj.reverseString(s)<<" "<<nc<<" "<<ls;}


    
    //std::string att="elohssA a si hsidnaN";
    //EfficientTruckloads truck;
    
    
    //std::cout<<truck.numTrucks(1024,5)<<std::endl;

    //std::cout<<obj.reverseString(att)<<""<<att.length()<<std::endl;
    return 0;

}