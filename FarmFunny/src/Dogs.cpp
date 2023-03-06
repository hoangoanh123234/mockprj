#include "Dogs.h"

Dogs::Dogs()
{
    smart_index = 0;
}

Dogs::~Dogs()
{
    //dtor
}
int Dogs::getSmartIndex()
{
    return smart_index;
}
void Dogs::setSmartIndex(int smart_index)
{
    this->smart_index = smart_index;
}
