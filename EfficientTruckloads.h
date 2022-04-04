#ifndef EFFICIENTTRUCKLOADS_H
#define TRUCKLOADS_H
#include <iostream>
#include <string>
#include <unordered_map>

class EfficientTruckloads
{
    private:
    std::unordered_map<int,int>umap;

    public:
    EfficientTruckloads();
    int numTrucks(int numCrates,int loadSize);
};




#endif