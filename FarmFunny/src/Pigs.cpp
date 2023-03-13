#include "Pigs.h"

Pigs::Pigs()
{
    Animals::setType(Animals::TYPE_PIG);
}

Pigs::~Pigs()
{
    //dtor
}
void Pigs::setWeight(float weight1)
{
   Animals::setWeight(min(MAX_WEIGHT,weight1));
}
bool Pigs::fullWeight()
{
    return (Pigs::getWeight() == 10);
}
int Pigs::isReproduce()
{
    return StringUtility::random(1,2);

}

bool Pigs::sell()
{

}

bool Pigs::isLifeTime()
{

}

void Pigs::eat()
{

}

void Pigs::die()
{

}

void Pigs::weigh()
{

}
