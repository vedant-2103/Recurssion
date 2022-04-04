#include <iostream>
#include <string>
#include "Truckloads.h"

Truckloads::Truckloads(){}

int Truckloads::numTrucks(int numCrates,int loadSize)
{
    if(numCrates<=loadSize)
    {
        return 1;
    }
    if(numCrates<=0 || loadSize<=0)
    {
        return 0;
    }
    else
    {
        int a=numCrates/2;
        int b=numCrates-(numCrates/2);
        return numTrucks(a,loadSize)+numTrucks(b,loadSize);
    }
    
}
