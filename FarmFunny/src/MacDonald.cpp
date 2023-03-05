#include "MacDonald.h"

MacDonald::MacDonald()
{
    //ctor
}

MacDonald::~MacDonald()
{
    //dtor
}
void MacDonald::feed(string command)
{
    //command dạng feed ...
    cmd = strtok (command," ");
    if (cmd.compare("animals")) MacDonald::feed_all();
    else
        if (cmd.compare("chickens")) MacDonald::feed_type();
        else

}
