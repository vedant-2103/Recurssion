#include <iostream>
#include <string>
#include <vector>
#include "EfficientTruckloads.h"
#include <unordered_map>

EfficientTruckloads::EfficientTruckloads(){}

int EfficientTruckloads::numTrucks(int numCrates,int loadSize)
{
    if(numCrates<=0 || loadSize<=0)
    {
        return 0;
    }
    if(numCrates<=loadSize)
    {return 1;}
    
    if(umap.count(numCrates)!=0)
    {
        return umap[numCrates];
    }
    else
    {
        int a=numCrates/2;
        int b=numCrates-(numCrates/2);
        umap[numCrates]=numTrucks(a,loadSize)+numTrucks(b,loadSize);
        return(umap[numCrates]);
    }
}
