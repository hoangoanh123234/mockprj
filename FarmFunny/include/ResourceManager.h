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
        static int soundForChicken;
        static int soundForCat;
        static int soundForDog;
        vector<Animals*> animals;
        ResourceManager();
        virtual ~ResourceManager();
        void actionSoundChicken(int quantity);
        void actionSoundCat(int quantity);
        void actionSoundDog(int quantity);

        int getFood ();
        void setFood (int food);
        int getMoney ();
        void setMoney (int money);
        vector<Animals*> reproduceChicken(int index);
        vector<Animals*> reproduceCat(int index);
        vector<Animals*> reproduceDog(int index);
        vector<Animals*> reproducePig(int index);
        bool checkName(string animalName);


    protected:

    private:
        int food;
        int money;
};

#endif // RESOURCEMANAGER_H
