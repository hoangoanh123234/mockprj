#ifndef DOGS_H
#define DOGS_H
#include "Animals.h"
#include <iostream>
using namespace std;

class Dogs:public Animals
{
    public:

        Dogs();
        virtual ~Dogs();
        int getSmartIndex();
        void setSmartIndex(int smartIndex);
        void setWeight(float weight1);
        bool fullWeight();
        int isReproduce();
        bool sell();
        void eat();
        void go_out();
        void die();
        bool isEat();
    protected:

    private:
        int smartIndex;
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 7;
};

#endif // DOGS_H
