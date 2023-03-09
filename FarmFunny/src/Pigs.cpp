#include "Pigs.h"

Pigs::Pigs()
{
    Animals::setSound("Oink!");
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

void Pigs::eat()
{

}

void Pigs::go_out()
{

}

void Pigs::die()
{

}

bool Pigs::isEat()
{

}
