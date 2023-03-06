#ifndef MACDONALD_H
#define MACDONALD_H
#include <iostream>
#include <vector>
#include "Animals.h"
#include "ResourceManager.h"
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
    protected:

    private:
        ResourceManager *resource;
        void feedAll();
        void feedType(int type);
        void feedName(string animalName);
        void sellType(int type);
        void sellName(string animalName);

};

#endif // MACDONALD_H
