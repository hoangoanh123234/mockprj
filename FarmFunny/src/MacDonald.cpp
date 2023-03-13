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
        MacDonald::feedName(i); //check xem ten con vat co trong danh sach ko, neu co moi cho an, khong thi thong bao
    }

    else cout << cmd <<".There is no type or name of this animal!!!";
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
        MacDonald::sellName(i);  //check xem ten con vat co trong danh sach ko, neu co moi ban, khong thi thong bao
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
    else if (type = 2)
    {
        resource->setMoney(resource->getMoney()+4);
    }
    else if (type = 3)
    {
        //if (smartIndex==10) resource->setMoney(resource->getMoney()+10);
        resource->setMoney(resource->getMoney()+5);
    }
    else
    {
        //resource->setMoney(resource->getMoney()+4);
    }
}

void MacDonald::sellName(int numberOrder)
{

}

void MacDonald::feedAll()
{
    if (resource->fullFood())
    {
        for (int i = 0; i < resource->animals.size(); i++)
        {
            MacDonald::feedName(i);
            resource->
        }
    }
    else cout << "Not enough food!";
}

void MacDonald::feedType(int type)
{
    for (int i = 0; i < resource->animals.size(); i++)
    {

    }
}

void MacDonald::feedName(int numberOrder)
{
    if(!resource->animals[numberOrder]->getIsEat())
        if(resource->animals[numberOrder]->getType()==1 && resource->getFood() > 1)
        {
            resource->setFood(resource->getFood()-1);
            resource->chickenSound();
        }
        else if(resource->animals[numberOrder]->getType()==2 && resource->animals[numberOrder]->getAge()>=2 && resource->getFood() > 2)
        {
            resource->setFood(resource->getFood()-2);
            resource->catSound();
        }
        else if(resource->animals[numberOrder]->getType()==3 && resource->animals[numberOrder]->getAge()>=3 && resource->getFood() > 3)
        {
            resource->setFood(resource->getFood()-3);
            resource->dogSound();
        }
        else if(resource->animals[numberOrder]->getType()==4 && resource->animals[numberOrder]->getAge()>=2 && resource->getFood() > 7)
        {
            resource->setFood(resource->getFood()-7);
            resource->pigSound();
        }
}
void MacDonald::letOut(string command)
{
    //command dạng feed ...
    string cmd = StringUtility::splitMiddle(command," ");
    if (cmd.compare("animals") == 0) MacDonald::letAllOut();
    else if (cmd.compare("chickens") == 0) MacDonald::letTypeOut(1);
    else if (cmd.compare("cats") == 0) MacDonald::letTypeOut(2);
    else if (cmd.compare("dogs") == 0) MacDonald::letTypeOut(3);
    else if (cmd.compare("pigs") == 0) MacDonald::letTypeOut(4);
    else if (MacDonald::resource->checkName(cmd) >= 0)
    {
        int i = MacDonald::resource->checkName(cmd);
        MacDonald::letNameOut(i); //check xem ten con vat co trong danh sach ko, neu co moi cho an, khong thi thong bao
    }

    else cout << cmd <<".There is no type or name of this animal!!!";
    //system ("pause");
}
void MacDonald::letAllOut()
{

}
void MacDonald::letTypeOut(int type)
{

}
void MacDonald::letNameOut(int orderNumber)
{

}

void MacDonald::letBack(string command)
{
    //command dạng feed ...
    string cmd = StringUtility::splitMiddle(command," ");
    if (cmd.compare("animals") == 0) MacDonald::letAllBack();
    else if (cmd.compare("chickens") == 0) MacDonald::letTypeBack(1);
    else if (cmd.compare("cats") == 0) MacDonald::letTypeBack(2);
    else if (cmd.compare("dogs") == 0) MacDonald::letTypeBack(3);
    else if (cmd.compare("pigs") == 0) MacDonald::letTypeBack(4);
    else if (MacDonald::resource->checkName(cmd) >= 0)
    {
        int i = MacDonald::resource->checkName(cmd);
        MacDonald::letNameBack(i); //check xem ten con vat co trong danh sach ko, neu co moi cho an, khong thi thong bao
    }

    else cout << cmd <<" - There is no type or name of this animal!!!";
    //system ("pause");
}
void MacDonald::letAllBack()
{

}
void MacDonald::letTypeBack(int type)
{

}
void MacDonald::letNameBack(int orderNumber)
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
        resource->setMoney(resource->getMoney()-1);
        resource->setFood(resource->getFood()+10);
    }
}
void MacDonald::reportAll()
{
    cout << "-------------Report All-------------";
    resource->output();
    for (int i = 0; i < resource->animals.size(); i++)
    {
        resource->animals[i]->output();
        cout << endl;
    }
}
void MacDonald::resourceStatus()
{
    cout << "-------------Report Resources-------------";
    resource->output();
}
void MacDonald::reportAnimals()
{
    cout << "-------------Report Animals-------------";
    if (resource->animals.size() == 0) cout << "Don't have animal!";
    else
        for (int i = 0; i < resource->animals.size(); i++)
        {
            resource->animals[i]->output();
            cout << endl;
        }
}
