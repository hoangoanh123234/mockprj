#include "Animals.h"

Animals::Animals()
{
    age = 0;
    weight = 0;
    happyindex = nullptr;
    price_sell = 0;
    //truyen thoi gian
    lifetime = 0;
    isHeard = 0;
    isGoOut = false;
    isEat = false;
}
Animals::~Animals()
{
    //dtor
}
void Animals::input()
{
    cout << "Name: ";
    getline(cin,name);
}
string Animals::getName()
{
    return name;
}
void Animals::setName(string name)
{
   this->name = name;
}
void Animals::setHappyIndex(int hpi)
{
    happyindex = new int(hpi);
}

void Animals::setWeight(float weight)
{
   this->weight = weight;
}
int Animals::getAge()
{
    return age;
}
float Animals::getWeight()
{
    return weight;
}
int *Animals::getHappyIndex()
{
    return happyindex;
}
int Animals::getLifeTime()
{
    return lifetime;
}
void Animals::setLifeTime(int lifetime)
{
    this->lifetime = lifetime;
}
int Animals::getType()
{
    return type;
}

void Animals::setType(int type)
{
    this->type = type;
}
int Animals::getIsHeard()
{
    return isHeard;
}
void Animals::setIsHeard(int isHeard)
{
    this->isHeard = isHeard;
}
bool Animals::getIsGoOut()
{
    return isGoOut;
}

void Animals::setIsGoOut(bool isGoOut)
{
    this->isGoOut = isGoOut;
}
bool Animals::getIsEat()
{
    return isEat;
}

void Animals::setIsEat(bool isEat)
{
    this->isEat = isEat;
}

