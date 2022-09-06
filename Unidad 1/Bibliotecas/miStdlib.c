#include <stdlib.h>
#include <stdio.h>
#include "./miStdlib.h"
#include "./miCtype.h"
#include "../miMath.h"

int aToi(const char *cad){
    int suma=0;
    int signo=1;
    if(*cad=='+'||*cad=='-'){
        if(*cad=='-')
            signo=-1;
        cad++;
    }
    while(esDigito(*cad)){
        suma*=10;
        suma+= *cad-'0';
        cad++;
    }
    return suma*signo;
}

double aTof(const char *cad){
    double suma=0,parteDecimal=0.1;
    int signo=1;
    if(*cad=='+'||*cad=='-'){
        if(*cad=='-')
            signo=-1;
        cad++;
    }
    while(esDigito(*cad) && *cad!='.'){
        suma*=10;
        suma+= *cad-'0';
        cad++;
    }
    if(*cad=='.')
        cad++;
    while(esDigito(*cad)){
        suma+=(((*cad)-'0')*parteDecimal);
        parteDecimal*=0.1;
        cad++;
    }
    return suma*signo;
}
