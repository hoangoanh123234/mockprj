#ifndef CHICKENS_H
#define CHICKENS_H
#include<iostream>
#include "Animals.h"
#include "StringUtility.h"

using namespace std;

class Chickens: public Animals {
    public:

        Chickens();
        virtual ~Chickens();
        void setWeight(float weight1);
        void setHappyIndex(int hpi);
        void weigh();
        bool fullWeight();
        bool isLifeTime();
        int isReproduce();

        bool sell();
        void eat();
        void die();
    protected:
    protected:

    private:
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 2;
        const int MAX_HAPPYINDEX = 10;
};

#endif // CHICKENS_H
