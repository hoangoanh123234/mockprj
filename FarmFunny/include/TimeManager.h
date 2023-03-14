#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H
#include <chrono>
#include <iostream>
#include <sys/time.h>
#include <ctime>
#include <math.h>
using namespace std;

class TimeManager
{
    public:
        TimeManager();
        virtual ~TimeManager();
        double getGameTime();

    protected:

    private:
        time_t startTime;
        double gameTime;
};

#endif // TIMEMANAGER_H
