#include "Chickens.h"


Chickens::Chickens()
{
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
}

Chickens::~Chickens()
{
    //dtor
}
void Chickens::weigh()
{
    //if (Chickens::getWeight <= 2){}
}
void Chickens::setWeight(float weight1)
{
    Animals::setWeight(min(MAX_WEIGHT,weight1));
}
bool Chickens::fullWeight()
{
    return (Chickens::getWeight() == 2);
}
bool Chickens::isLifeTime()
{
    return (Chickens::getLifeTime() == 15);
}
int Chickens::isReproduce()
{
    return StringUtility::random(1,3);
}
bool Chickens::sell()
{

}

void Chickens::eat()
{

}

void Chickens::die()
{

}

bool Chickens::isEat()
{

}
