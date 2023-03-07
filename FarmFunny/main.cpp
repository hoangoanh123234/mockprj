#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "StringUtility.h"
using namespace std;

int main(){
    srand((int)time(0));
    int r;
    for(int i = 0; i < 10; ++i){
        r = StringUtility::random(1,2);
        printf("%d ",r);
    }
}
