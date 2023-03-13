#ifndef PIGS_H
#define PIGS_H
#include "Animals.h"
#include "StringUtility.h"
#include <iostream>
using namespace std;

class Pigs:public Animals
{
    public:

        Pigs();
        virtual ~Pigs();
        void setWeight(float weight1);
        bool fullWeight();
        int isReproduce();
        bool sell();
        bool isLifeTime();
        void eat();
        void die();
        void weigh();
    protected:

    protected:

    private:
        const float MAX_WEIGHT = 10;

};

#endif // PIGS_H
