#include "MacDonald.h"
#include <string.h>
#include <cstring>

MacDonald::MacDonald()
{
    resource = new ResourceManager();
}
MacDonald::~MacDonald()
{
    //dtor
}


void MacDonald::feed(string command)
{
    //command dạng feed ...
    string cmd = StringUtility::split(command," ");
    if (cmd.compare("animals") == 0) MacDonald::feedAll();
    else if (cmd.compare("chickens") == 0) MacDonald::feedType(1);
    else if (cmd.compare("cats") == 0) MacDonald::feedType(2);
    else if (cmd.compare("dogs") == 0) MacDonald::feedType(3);
    else if (cmd.compare("pigs") == 0) MacDonald::feedType(4);
    else if (MacDonald::resource->checkName(cmd) >= 0)
    {
        int i = MacDonald::resource->checkName(cmd);
        MacDonald::feedName(cmd,i); //check xem ten con vat co trong danh sach ko, neu co moi cho an, khong thi thong bao
    }

    else cout << "There is no type or name of this animal!!!";
    //system ("pause");
}
void MacDonald::sellAnimal(string command)
{
    //command dạng feed ...
    string cmd = StringUtility::split(command," ");
    if (cmd.compare("chickens")) MacDonald::sellType(1);
    else if (cmd.compare("cats")) MacDonald::sellType(2);
    else if (cmd.compare("dogs")) MacDonald::sellType(3);
    else if (cmd.compare("pigs")) MacDonald::sellType(4);
    else if (MacDonald::resource->checkName(cmd) >= 0)
    {
        int i = MacDonald::resource->checkName(cmd);
        MacDonald::sellName(cmd,i);  //check xem ten con vat co trong danh sach ko, neu co moi ban, khong thi thong bao
    }
    else cout << "There is no type or name of this animal!!!";
    //system ("pause");
}
void MacDonald::sellType(int type)
{
    if (type = 1)
    {
            resource->setMoney(resource->getMoney()+2);
    }
    else
        if (type = 2)
        {
            resource->setMoney(resource->getMoney()+4);
        }
        else
            if (type = 3)
            {
                 //if (smartIndex==10) resource->setMoney(resource->getMoney()+10);
                  resource->setMoney(resource->getMoney()+5);
            }
            else
            {
                //resource->setMoney(resource->getMoney()+4);
            }
}

void MacDonald::sellName(string animalName,int numberOrder)
{

}


void MacDonald::feedAll()
{

}

void MacDonald::feedType(int type)
{

}

void MacDonald::feedName(string animalName,int numberOrder)
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
