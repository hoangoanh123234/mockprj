#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include <iostream>
#include <vector>
#include "Animals.h"
class ResourceManager
{
    public:
        vector<Animals*> animals;
        ResourceManager();
        virtual ~ResourceManager();
        int getFood ();
        void setFood (int food);
        int getMoney ();
        void setMoney (int money);
    protected:

    private:

        int food;
        int money;
};

#endif // RESOURCEMANAGER_H
