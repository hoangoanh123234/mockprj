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
int Pigs::reproduce()
{
    return StringUtility::random(1,2);

}
