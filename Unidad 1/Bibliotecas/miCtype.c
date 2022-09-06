#include <stdio.h>
#include <stdlib.h>
#include "./miCtype.h"

int toLower(int ch){
    if(ch>64 && ch<91)
        return ch+32;
    return ch;
}

int toUpper(int ch){
    if(ch>96 && ch<123)
        return ch-32;
    return ch;
}
