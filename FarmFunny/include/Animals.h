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
        int getLifeTime();
        void setLifeTime(int lifetime);
        int getType();
        void setType(int type);
        int *getHappyIndex();
        void setHappyIndex(int hpi);
        int getIsHeard();
        void setIsHeard(int isHeard);
        bool getIsGoOut();
        void setIsGoOut(bool isGoOut);
        bool getIsEat();
        void setIsEat(bool isEat);

        virtual bool sell() = 0;
        virtual bool isLifeTime() = 0;
        virtual void eat() = 0;
        virtual int isReproduce() = 0;
        virtual void die() = 0;
        virtual void weigh() = 0;


    protected:

    private:
        string name;
        int age;
        float weight;
        int *happyindex;
        int price_sell;
        int type; //cat type tu lenh buy
        int lifetime;
        int isHeard;
        bool isGoOut;
        bool isEat;
};

#endif // ANIMALS_H
