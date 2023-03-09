#ifndef MACDONALD_H
#define MACDONALD_H
#include <iostream>
#include <vector>
#include "ResourceManager.h"
#include "StringUtility.h"

using namespace std;
class MacDonald
{
    public:
        MacDonald();
        virtual ~MacDonald();
        void feed(string command);
        void letAnimalOut();
        void letAnimalBack();
        void buyAnimal(string command);
        void sellAnimal(string command);
        void buyFood();
        void reportAnimals();
        void resourceStatus();
        void reportAll();
        ResourceManager *resource;
    protected:

    private:
        void feedAll();
        void feedType(int type);
        void feedName(string animalName,int orderNumber);
        void sellType(int type);
        void sellName(string animalName, int orderNumber);

};

#endif // MACDONALD_H
