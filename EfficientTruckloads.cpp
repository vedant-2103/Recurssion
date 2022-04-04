#include <iostream>
#include <string>
#include <vector>
#include "EfficientTruckloads.h"

Truckloads::Truckloads(){}

int Truckloads::numTrucks(int numCrates,int loadSize)
{
    if(numCrates<=loadSize)
    {return 1;}
    
    if(vectorTrucks.at(numCrates)!=0)
    {
        return vectorTrucks.at(numCrates);
    }
    else
    {
        int a=numCrates/2;
        int b=numCrates-(numCrates/2);
        vectorTrucks.at(numCrates)=numTrucks(a,loadSize)+numTrucks(b,loadSize);
        return(vectorTrucks.at(numCrates));
    }
}
