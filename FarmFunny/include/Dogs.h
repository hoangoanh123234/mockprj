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
        void setWeight(float weight1);
        void setHappyIndex(int hpi);
        void setSmartIndex(int smi);
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
        bool isTrained;
        const int SMARTINDEX_DEFAULT = 0;
        const int MAX_SMARTINDEX = 10;
        const int HAPPYINDEX_DEFAULT = 7;
        const float MAX_WEIGHT = 7;
        const int MAX_HAPPYINDEX = 10;
};

#endif // DOGS_H
