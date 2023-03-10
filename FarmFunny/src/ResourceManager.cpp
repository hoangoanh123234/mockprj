#include "ResourceManager.h"

ResourceManager::ResourceManager()
{
    this->food = 50;
    this->money = 20;
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
            ResourceManager::chickenSound(3);
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
            ResourceManager::catSound(2);
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
            ResourceManager::dogSound();
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
            ResourceManager::pigSound(2);
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
void ResourceManager::chickenSound (int quantity)
{
    for (int i = 1; i <= quantity; i++) cout << "Bawk!";
    for (int i = 0; i <= animals.size(); i++)
    {
        if (animals[i]->getType() == 2)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=15)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
    }
}
void ResourceManager::catSound (int quantity)
{
    for (int i = 1; i <= quantity; i++) cout << "Meow!";
    for (int i = 0; i <= animals.size(); i++)
    {
        if (animals[i]->getType() == 1)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=10)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
        if (animals[i]->getType() == 3)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=5)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
    }
}
void ResourceManager::dogSound (int quantity)
{
    for (int i = 1; i <= quantity; i++) cout << "Woof!";
    for (int i = 0; i <= animals.size(); i++)
    {
        if (animals[i]->getType() == 1)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=10)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
        if (animals[i]->getType() == 2)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=15)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
    }
}
void ResourceManager::pigSound (int quantity)
{
    for (int i = 1; i <= quantity; i++) cout << "Oink!";
    for (int i = 0; i <= animals.size(); i++)
    {
        if (animals[i]->getType() == 1)
        {
            if (!animals[i]->getIsGoOut())
            {
                animals[i]->setIsHeard(animals[i]->getIsHeard()+quantity);
                while(animals[i]->getIsHeard()>=10)
                {
                    int* b = animals[i]->getHappyIndex();
                    if (*b>0) animals[i]->setHappyIndex(*b-1);
                    animals[i]->setIsHeard(animals[i]->getIsHeard()-10);
                }
            }
        }
    }
}
bool ResourceManager::fullFood()
{
    int unit = 0;
    for (int i = 0; i < animals.size(); i++)
    {
        if(!animals[i]->getIsEat())
            if(animals[i]->getType()==1) unit = unit + 1;
            else if(animals[i]->getType()==2 ) unit = unit + 2;
            else if(animals[i]->getType()==3 && animals[i]->getAge()>=3) unit = unit + 3;
            else if(animals[i]->getType()==4 && animals[i]->getAge()>=2) unit = unit + 4;
    }
    return unit<=food;
}
bool ResourceManager::foodChicken()
{
    int unit = 0;
    for (int i = 0; i < animals.size(); i++)
    {
        if(animals[i]->getType()==1 && !animals[i]->getIsEat())
            unit = unit + 1;
    }
    return unit<=food;
}
bool ResourceManager::foodCat()
{
    int unit = 0;
    for (int i = 0; i < animals.size(); i++)
    {
        if(animals[i]->getType()==2 && animals[i]->getAge()>=2 && !animals[i]->getIsEat())
            unit = unit + 2;
    }
    return unit<=food;
}
bool ResourceManager::foodDog()
{
    int unit = 0;
    for (int i = 0; i < animals.size(); i++)
    {
        if(animals[i]->getType()==3 && animals[i]->getAge()>=3 && !animals[i]->getIsEat())
            unit = unit + 3;
    }
    return unit<=food;
}
bool ResourceManager::foodPig()
{
    int unit = 0;
    for (int i = 0; i < animals.size(); i++)
    {
        if(animals[i]->getType()==4 && animals[i]->getAge()>=2 && !animals[i]->getIsEat())
            unit = unit + 7;
    }
    return unit<=food;
}
//mot phuong thuc void ... (int n = 1), du tieng keu thi set lai = 0, giam happy index, check dk cong len qua 10
//chuyen qua tung thang ben animals, check ham goOut , int isSounding
//price la cua resource
//tach gia ra khoi resource -> class shop
//duyet unit truoc khi cho an
