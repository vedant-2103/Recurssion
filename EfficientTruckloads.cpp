#include <iostream>
#include <string>
#include <vector>
#include "EfficientTruckloads.h"

EfficientTruckloads::EfficientTruckloads(){}

int EfficientTruckloads::numTrucks(int numCrates,int loadSize)
{
    if(numCrates<=loadSize)
    {return 1;}
    
    if(arrayTrucks[numCrates]!=0)
    {
        return arrayTrucks[numCrates];
    }
    else
    {
        int a=numCrates/2;
        int b=numCrates-(numCrates/2);
        arrayTrucks[numCrates]=numTrucks(a,loadSize)+numTrucks(b,loadSize);
        return(arrayTrucks[numCrates]);
    }
}
