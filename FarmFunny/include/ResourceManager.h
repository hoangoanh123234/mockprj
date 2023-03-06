#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include <iostream>
#include <vector>
#include "Animals.h"
class ResourceManager
{
    public:
        ResourceManager();
        virtual ~ResourceManager();
        int getFood ();
        void setFood (int food);
        int getMoney ();
        void setMoney (int money);
    protected:

    private:
        vector<Animals*> animals;
        int food;
        int money;
};

#endif // RESOURCEMANAGER_H
