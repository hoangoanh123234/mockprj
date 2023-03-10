#include "Cats.h"

Cats::Cats()
{
    Animals::setHappyIndex(HAPPYINDEX_DEFAULT);
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
bool Cats::sell()
{

}

void Cats::eat()
{

}

void Cats::die()
{

}

bool Cats::isEat()
{

}
int Cats::isReproduce()
{
    return 1;
}

