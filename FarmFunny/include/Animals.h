#ifndef ANIMALS_H
#define ANIMALS_H
#include<iostream>
using namespace std;
class Animals
{
    public:
        static const int TYPE_CHICKEN = 1;
        static const int TYPE_CAT = 2;
        static const int TYPE_DOG = 3;
        static const int TYPE_PIG = 4;
        Animals();
        virtual ~Animals();
        void nhap();
        string getName();
        void setName(string name);
        int getAge();
        float getWeight();
        string getSound();
        virtual void setWeight(float weight);
        int getType();
        void setType(int type);
        int *getHappyIndex();
        void setHappyIndex(int hpi);
        void setSound(string sound);
        virtual void sell() = 0;
        virtual void action_sound() = 0;
        virtual void eat() = 0;
        virtual void reproduce() = 0;
        virtual void go_out() = 0;
        virtual void die() = 0;
        virtual void weigh() = 0;
    protected:

    private:
        string name;
        int age;
        float weight;
        int *happyindex;
        int price_sell;
        string sound;
        int type;
};

#endif // ANIMALS_H
