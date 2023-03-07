#include "Cats.h"
#include "Animals.h"
Cats::Cats()
{
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
    Animals::setSound("Meow!");
}

Cats::~Cats()
{
    //dtor
}
void Cats::setWeight(float weight1)
{
   Animals::setWeight(min(MAX_WEIGHT,weight1));
}
bool Cats::fullWeight()
{
    return (Cats::getWeight() == 4);
}
