#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include <iostream>
#include <vector>
#include "Animals.h"
#include "Chickens.h"
#include "Cats.h"
#include "Dogs.h"
#include "Pigs.h"
using namespace std;
class ResourceManager
{
    public:
        vector<Animals*> animals;
        ResourceManager();
        virtual ~ResourceManager();
        void output();
        int getFood ();
        void setFood (int food);
        int getMoney ();
        void setMoney (int money);
        vector<Animals*> reproduceChicken(int index);
        vector<Animals*> reproduceCat(int index);
        vector<Animals*> reproduceDog(int index);
        vector<Animals*> reproducePig(int index);
        bool checkName(string animalName);
        void chickenSound(int quantity = 1);
        void catSound(int quantity = 1);
        void dogSound(int quantity = 1);
        void pigSound(int quantity = 1);
        bool fullFood();
        bool foodCat();
        bool foodChicken();
        bool foodDog();
        bool foodPig();

    protected:

    private:
        int food;
        int money;
        const float MIN_MONEY = 0;
        const float MIN_FOOD = 0;
};

#endif // RESOURCEMANAGER_H
