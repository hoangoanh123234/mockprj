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
        void feed(string command);
        virtual ~MacDonald();
        void let_animal_out();
        void buy_animal();
        void sell_animal();
        void buy_food();
        void report_animals();
        void resource_status();
    protected:

    private:
        vector<Animals*> animals;
        ResourceManager *resource;
        void feed_all();
        void feed_type(int type);
        void feed_name(string animal_name);

};

#endif // MACDONALD_H
