#include "ResourceManager.h"

ResourceManager::ResourceManager()
{
    food = 50;
    money = 20;
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
