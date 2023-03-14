#ifndef SHOP_H
#define SHOP_H


class Shop
{
    public:
        Shop();
        virtual ~Shop();
        static const int SELL_CHICKEN = 2;
        static const int SELL_CAT = 4;
        static const int SELL_DOG = 5;
        static const int SELL_DOG_SMART = 10;
        static const int SELL_PIG_KG = 1;

        static const int BUY_CHICKEN = 4;
        static const int BUY_CAT = 7;
        static const int BUY_DOG = 8;
        static const int BUY_PIG = 6;

    protected:

    private:

};

#endif // SHOP_H
