#include <stdio.h>
#include <stdlib.h>
#include "./miString.h"
#include "./miCtype.h"

size_t strLen(const char *str){
    size_t tam=0;
    while(*str!='\0'){
        tam++;
        str++;
    }
    return tam;
}

int esPalindromo(char *frase,int cantLetras){
    char *fin,*comparador;
    int i;
    fin=frase;
    comparador=frase;
    for(i=1;i<cantLetras;i++){
        fin++;
        comparador++;
    }
    while(frase!=fin){
        while(*frase==' ')
            frase++;
        while(*comparador==' '||*comparador=='0')
            comparador--;
        if(toLower(*frase)!=toLower(*comparador))
            return 0;
        frase++;
        comparador--;
    }
    return 1;
}

int valorNumericoCadena(char *cad){
    int suma=0;
    while(*cad!='\0')
    {
        suma+=(*cad);
        cad++;
    }
    return suma;
}
