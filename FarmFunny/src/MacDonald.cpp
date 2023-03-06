#include "MacDonald.h"
#include "ResourceManager.h"
#include <cstring>
#include <string.h>
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
    string cmd = command.substr(5,command.length()-1);
    if (cmd.compare("animals")) MacDonald::feed_all();
    else if (cmd.compare("chickens")) MacDonald::feed_type(1);
    else
        MacDonald::feed_name(cmd);
}
void MacDonald::buy_food()
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
}
