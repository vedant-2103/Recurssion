#ifndef EFFICIENTTRUCKLOADS_H
#define TRUCKLOADS_H
#include <iostream>
#include <string>
#include <vector>

class EfficientTruckloads
{
    private:
    int arrayTrucks[1000000];

    public:
    EfficientTruckloads();
    int numTrucks(int numCrates,int loadSize);
};




#endif