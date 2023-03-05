#include "Chickens.h"

Chickens::Chickens()
{
     Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
     Animals::setSound("Bawk!");
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
