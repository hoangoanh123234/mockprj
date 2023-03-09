#include "Dogs.h"

Dogs::Dogs()
{
    smartIndex = 0;
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
    Animals::setSound("Woof!");
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
bool Dogs::sell()
{

}

void Dogs::eat()
{

}

void Dogs::go_out()
{

}

void Dogs::die()
{

}

bool Dogs::isEat()
{

}

