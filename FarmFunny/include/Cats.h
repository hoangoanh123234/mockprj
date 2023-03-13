#ifndef CATS_H
#define CATS_H
#include "Animals.h"
#include <iostream>
using namespace std;

class Cats:public Animals
{
    public:

        Cats();
        virtual ~Cats();
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
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 4;
};

#endif // CATS_H
