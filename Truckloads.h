#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H
#include <iostream>
#include <string>

class Truckloads
{
    private:
    int number_of_trucks;

    public:
    Truckloads();
    int numTrucks(int numCrates,int loadSize);

};

#endif