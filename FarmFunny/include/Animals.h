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
        void input();
        string getName();
        void setName(string name);
        int getAge();
        float getWeight();
        virtual void setWeight(float weight);
        string getSound();
        void setSound(string sound);
        int getLifeTime();
        void setLifeTime(int lifetime);
        int getType();
        void setType(int type);
        int *getHappyIndex();
        void setHappyIndex(int hpi);

        virtual bool sell() = 0;
        virtual bool isLifeTime() = 0;
        virtual void eat() = 0;
        virtual int isReproduce() = 0;
        virtual void go_out() = 0;
        virtual void die() = 0;
        virtual void weigh() = 0;
        virtual bool isEat() = 0;

    protected:

    private:
        string name;
        int age;
        float weight;
        int *happyindex;
        int price_sell;
        string sound;
        int type; //cat type tu lenh buy
        int lifetime;
};

#endif // ANIMALS_H
