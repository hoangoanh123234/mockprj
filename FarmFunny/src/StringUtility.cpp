#include "StringUtility.h"

StringUtility::StringUtility()
{

}

StringUtility::~StringUtility()
{
    //dtor
}
string StringUtility::split(string str, string delimiter){
    size_t pos = 0;
    string token;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        cout << token << endl;
        str.erase(0, pos + delimiter.length());
    }
    return str;
}
