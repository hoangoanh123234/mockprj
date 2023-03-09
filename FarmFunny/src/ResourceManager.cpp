#include "ResourceManager.h"

ResourceManager::ResourceManager()
{
    this->food = 50;
    this->money = 20;
    soundForCat = 0;
    soundForChicken = 0;
    soundForDog = 0;
}

ResourceManager::~ResourceManager()
{
    //dtor
}
int ResourceManager::getFood()
{
    return food;
}

void ResourceManager::setFood(int food)
{
    this->food = food;
}

int ResourceManager::getMoney()
{
    return money;
}

void ResourceManager::setMoney(int money)
{
    this->money = money;
}
bool ResourceManager::checkName(string animalName)
{
    for(int i=0; i<animals.size(); i++)
    {
        if(animalName.compare(animals[i]->getName()) == 0);
        return i;
    }
    return -1;
}
vector<Animals*> ResourceManager::reproduceChicken(int index) //sai luong, class resource, tra ve vector (chua con tro)chua cac con con kieu chicken
{
    system("cls");
    fflush(stdin);
    for (int i = 1; i <= animals[index]->isReproduce(); i++)
    {
        Chickens *smallChicken ;
        do
        {
            smallChicken->input();
            if(checkName(smallChicken->getName()) < 0)
                cout<<"Name is exist";
        }
        while(checkName(smallChicken->getName()) < 0);
        //
        animals.push_back(smallChicken);
        animals.clear();
    }
    return animals;
}
vector<Animals*> ResourceManager::reproduceCat(int index) //sai luo11ng, class resource, tra ve vector (chua con tro)chua cac con con kieu chicken
{
    system("cls");
    fflush(stdin);
    for (int i = 1; i <= animals[index]->isReproduce(); i++)
    {
        Cats *smallCat ;
        do
        {
            smallCat->input();
            if(checkName(smallCat->getName()) < 0)
                cout<<"Name is exist";
        }
        while(checkName(smallCat->getName()) < 0);
        //
        animals.push_back(smallCat);
        animals.clear();
    }
    return animals;
}
vector<Animals*> ResourceManager::reproduceDog(int index) //sai luong, class resource, tra ve vector (chua con tro)chua cac con con kieu chicken
{
    system("cls");
    fflush(stdin);
    for (int i = 1; i <= animals[index]->isReproduce(); i++)
    {
        Dogs *smallDog ;
        do
        {
            smallDog->input();
            if(checkName(smallDog->getName()) < 0)
                cout<<"Name is exist";
        }
        while(checkName(smallDog->getName()) < 0);
        animals.push_back(smallDog);
        animals.clear();
    }
    return animals;
}
vector<Animals*> ResourceManager::reproducePig(int index) //sai luong, class resource, tra ve vector (chua con tro)chua cac con con kieu chicken
{
    system("cls");
    fflush(stdin);
    for (int i = 1; i <= animals[index]->isReproduce(); i++)
    {
        Pigs *smallPig ;
        do
        {
            smallPig->input();
            if(checkName(smallPig->getName()) < 0)
                cout<<"Name is exist";
        }
        while(checkName(smallPig->getName()) < 0);
        //
        animals.push_back(smallPig);
        animals.clear();
    }
    return animals;
}
void ResourceManager::actionSoundChicken(int quantity)
{
    soundForCat = soundForCat + quantity;
    while(soundForCat>=15)
    {
        for (int j = 0; j <= animals.size(); j++)
        {
            if (animals[j]->getType()==2)
            {
                int *b = animals[j]->getHappyIndex();
                animals[j]->setHappyIndex(*b - 1);
            }
        }
        soundForCat = soundForCat - 15;
    }
}
void ResourceManager::actionSoundCat(int quantity)
{
    soundForChicken= soundForChicken + quantity;
    soundForDog= soundForDog + quantity;
    while(soundForChicken>=10)
    {
        for (int j = 0; j <= animals.size(); j++)
        {
            if (animals[j]->getType()==1)
            {
                int *b = animals[j]->getHappyIndex();
                animals[j]->setHappyIndex(*b - 1);
            }
        }
        soundForChicken = soundForChicken - 10;
    }
    while(soundForDog>=5)
    {
        for (int j = 0; j <= animals.size(); j++)
        {
            if (animals[j]->getType()==3)
            {
                int *b = animals[j]->getHappyIndex();
                animals[j]->setHappyIndex(*b - 1);
            }
        }
        soundForDog = soundForDog - 5;
    }
}
void ResourceManager::actionSoundDog(int quantity)
{
    soundForCat = soundForCat + quantity;
    soundForChicken = soundForChicken + quantity;
    while(soundForCat>=15)
    {
        for (int j = 0; j <= animals.size(); j++)
        {
            if (animals[j]->getType()==2)
            {
                int *b = animals[j]->getHappyIndex();
                animals[j]->setHappyIndex(*b - 1);
            }
        }
        soundForCat = soundForCat - 15;
    }
    while(soundForChicken>=10)
    {
        for (int j = 0; j <= animals.size(); j++)
        {
            if (animals[j]->getType()==1)
            {
                int *b = animals[j]->getHappyIndex();
                animals[j]->setHappyIndex(*b - 1);
            }
        }
        soundForChicken = soundForChicken - 10;
    }
}
//mot phuong thuc void ... (int n = 1), du tieng keu thi set lai = 0, giam happy index, check dk cong len qua 10
