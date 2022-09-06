#include <stdio.h>
#include <stdlib.h>
#include "./miString.h"

size_t miStrlen(const char *s){
    size_t cantCaracteres=0;
    while(*s){
        cantCaracteres++;
        s++;
    }
    return cantCaracteres;
}


/*char *strncat(char*s1, const char *s2, size_t n){
    char *inicioS1=s1;
        s1+=miStrlen(s1);
    while(*s2&&i<n--){
        *s1=*s2;
        s2++;
    }
    *s1=*s2;
    return inicioS1;

}

*/
