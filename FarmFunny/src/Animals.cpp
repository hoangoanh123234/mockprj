#include "Animals.h"

Animals::Animals()
{
    age = 0;
    weight = 0;
    happyindex = nullptr;
    price_sell = 0;
    sound = "";
    //truyen thoi gian
    lifetime = 0;
}
Animals::~Animals()
{
    //dtor
}
void Animals::nhap()
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
void Animals::setSound(string sound)
{
   this->sound = sound;
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
string Animals::getSound()
{
    return sound;
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
