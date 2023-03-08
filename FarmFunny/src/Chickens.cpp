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
bool Chickens::fullWeight()
{
    return (Chickens::getWeight() == 2);
}
bool Chickens::isLifeTime()
{
    return (Chickens::getLifeTime() == 15);
}
int Chickens::isReproduce()
{
    return StringUtility::random(1,3);
}
int Chickens::checkName()
{
    return 1;
}
void Chickens::reproduce()
{
    system("cls");
    fflush(stdin);
    for (int i = 1; i <= Chickens::isReproduce(); i++)
    {
        Chickens smallChicken;
        do
        {
            smallChicken.input();
            if(Chickens::checkName() < 1)
                cout<<"Name is exist";
        }
        while(Chickens::checkName() < 1);
        MacDonald::resource->animals.push_back(smallChicken);
        MacDonald::resource->animals.clear();
        //Menu(); da co lenh goi menu trong phan menu sau switch case
    }
}
