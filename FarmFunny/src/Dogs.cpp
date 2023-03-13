#include "Dogs.h"

Dogs::Dogs()
{
    smartIndex = 0;
    isTrained = false;
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
    Animals::setType(Animals::TYPE_DOG);
}

Dogs::~Dogs()
{
    //dtor
}
int Dogs::getSmartIndex()
{
    return smartIndex;
}
void Dogs::setSmartIndex(int smartIndex)
{
    this->smartIndex = smartIndex;
}
void Dogs::setWeight(float weight1)
{
   Animals::setWeight(min(MAX_WEIGHT,weight1));
}
bool Dogs::fullWeight()
{
    return (Dogs::getWeight() == 7);
}
int Dogs::isReproduce()
{
    return 1;
}

bool Dogs::getIsTrained()
{
    return isTrained;
}

void Dogs::setIsTrained(bool isTrained)
{
    this->isTrained = isTrained;
}

bool Dogs::sell()
{

}

bool Dogs::isLifeTime()
{

}

void Dogs::eat()
{

}

void Dogs::die()
{

}

void Dogs::weigh()
{

}

