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
        bool getIsTrained();
        void setIsTrained(bool isTrained);

        bool fullWeight();
        int isReproduce();
        bool sell();
        bool isLifeTime();
        void eat();
        void die();
        void weigh();
    protected:

    private:
        int smartIndex;
        bool isTrained;
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 7;
};

#endif // DOGS_H
