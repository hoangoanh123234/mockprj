#ifndef DOGS_H
#define DOGS_H


class Dogs
{
    public:
        Dogs();
        virtual ~Dogs();
        int getSmartIndex();
        void setSmartIndex(int smart_index);

    protected:

    private:
        int smart_index;
};

#endif // DOGS_H
