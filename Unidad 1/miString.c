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

void* miMemcpy(void *destino,const void *origen,size_t n){
    int i;
    char *inicioDato=(char*)destino;
    for(i=0;i<n;i++){
        *(char*)destino=*(char*)origen;
        destino++;  //el tipo de dato void se mueve por defecto 1 byte?
        origen++;
    }
    return inicioDato;
}

void* miMemMove(void *destino,const void *origen,size_t n){
    char *inicioDato=(char*)destino;
    int i;
    char *iniVec;
    char *vAux = (char*)malloc(n);
    if(!vAux)
        return NULL;
    iniVec=vAux;
    for(i=0;i<n;i++){
        *vAux=*(char*)origen;
        vAux++;
        origen++;
    }
    vAux=iniVec;
    for(i=0;i<n;i++){
        *(char*)destino=*vAux;
        destino++;
        vAux++;
    }
    free(iniVec);
    return inicioDato;
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
