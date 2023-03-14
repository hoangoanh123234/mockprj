#include "TimeManager.h"

TimeManager::TimeManager()
{
    struct timeval TimeNow{};
    gettimeofday(&TimeNow,nullptr);
    startTime = (TimeNow.tv_sec*1000) + (TimeNow.tv_usec/1000);
    gameTime = 0;
}

TimeManager::~TimeManager()
{
    //dtor
}
double TimeManager::getGameTime()
{
    return gameTime;
}
