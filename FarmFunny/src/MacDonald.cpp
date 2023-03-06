#include "MacDonald.h"
#include <string.h>
#include <cstring>
MacDonald::MacDonald()
{
    // resource = new ResourceManager();
}
MacDonald::~MacDonald()
{
    //dtor
}

void MacDonald::feed(string command)
{
    //command dạng feed ...
   string cmd = command.substr(5,command.length()-1);
    if (cmd.compare("animals")) MacDonald::feedAll();
    else
        if (cmd.compare("chickens")) MacDonald::feedType(1);
        else
        {
            MacDonald::feedName(cmd);
        }
}
void MacDonald::sellAnimal(string command)
{
    //command dạng feed ...
    string cmd;
    if (cmd.compare("chickens")) MacDonald::sellType(1);
    else
       {
           //
       }
}
void MacDonald::sellType(int type)
{

}

void MacDonald::sellName(string animalName)
{

}


void MacDonald::feedAll()
{

}

void MacDonald::feedType(int type)
{

}

void MacDonald::feedName(string animalName)
{

}

void MacDonald::buyFood()
{
    int n = 0;
    do
    {
        cout << "You have " << resource->getMoney() << "USD";
        cout << "How much money do you want to spend on food?";
        cin >> n;
    }
    while (n > resource->getMoney());
    for (int i = 0; i < n; i++)
    {
        resource->setFood(resource->getFood()+10);
        resource->setMoney(resource->getMoney()-1);
    }
}
