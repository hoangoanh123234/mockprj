#include "Cats.h"

Cats::Cats()
{
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
    Animals::setType(Animals::TYPE_CAT);
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

int Cats::isReproduce()
{
    return 1;
}

bool Cats::sell()
{

}

bool Cats::isLifeTime()
{

}

void Cats::eat()
{

}

void Cats::die()
{

}

void Cats::weigh()
{

}
