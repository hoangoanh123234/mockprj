#include "Dogs.h"

Dogs::Dogs()
{
    isTrained = false;
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
    Animals::setType(Animals::TYPE_DOG);
    Animals::setSmartIndex(SMARTINDEX_DEFAULT);
}

Dogs::~Dogs()
{
    //dtor
}
void Dogs::setWeight(float weight1)
{
   Animals::setWeight(min(MAX_WEIGHT,weight1));
}
void Dogs::setHappyIndex(int hpi)
{
    if (hpi > 0) Animals::setHappyIndex(min(MAX_HAPPYINDEX,hpi));
    else Animals::setHappyIndex(max(HAPPYINDEX_DEFAULT,hpi));
}
void Dogs::setSmartIndex(int smi)
{
   Animals::setSmartIndex(min(MAX_SMARTINDEX,smi));
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

