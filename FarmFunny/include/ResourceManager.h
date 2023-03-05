#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H


class ResourceManager
{
    public:
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
