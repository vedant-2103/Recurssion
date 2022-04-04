#ifndef EFFICIENTTRUCKLOADS_H
#define TRUCKLOADS_H
#include <iostream>
#include <string>
#include <vector>

class EfficientTruckloads
{
    private:
    vector <int> vectorTrucks;

    public:
    EfficientTruckloads();
    int numTrucks(int numCrates,int loadSize);
}




#endif