#ifndef _WEIGHT_H_
#define _WEIGHT_H_

#include <iostream>
using namespace std;

class Weight{
    private:
        double height, weight;
        int WeightStatus;
        int StdWeight();

    public:
        void setHeight(const double h);
        void setWeight(const double w);
        double getHeight();
        double getWeight();
        int getWeightStatus();
};

#else
#endif