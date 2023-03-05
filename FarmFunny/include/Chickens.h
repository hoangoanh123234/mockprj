#ifndef CHICKENS_H
#define CHICKENS_H
#include<iostream>
#include<Animals.h>
using namespace std;

class Chickens: public Animals {
    public:
        Chickens();
        virtual ~Chickens();
        void setWeight(float weight1);
        void weigh();

    protected:

    private:
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 2;
};

#endif // CHICKENS_H
