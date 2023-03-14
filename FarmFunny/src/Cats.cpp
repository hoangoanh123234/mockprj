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
void Cats::setHappyIndex(int hpi)
{
    if (hpi > 0) Animals::setHappyIndex(min(MAX_HAPPYINDEX,hpi));
    else Animals::setHappyIndex(max(HAPPYINDEX_DEFAULT,hpi));
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
