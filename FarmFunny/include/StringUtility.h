#ifndef STRINGUTILITY_H
#define STRINGUTILITY_H
#include <iostream>
using namespace std;
class StringUtility
{
    public:
        StringUtility();
        virtual ~StringUtility();
        static string split(string str, string delimiter);
        static string splitMiddle(string str, string delimiter);
        static int random(int minN, int maxN);
        static string format(string str);
        /*static int a = 0;
        int b = 0;*/
    protected:

    private:

};

#endif // STRINGUTILITY_H
