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
        void letOut(string command);
        void letBack(string command);
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
        void feedName(int orderNumber);
        void sellType(int type);
        void sellName(int orderNumber);
        void letAllOut();
        void letTypeOut(int type);
        void letNameOut(int orderNumber);
        void letAllBack();
        void letTypeBack(int type);
        void letNameBack(int orderNumber);

};

#endif // MACDONALD_H
