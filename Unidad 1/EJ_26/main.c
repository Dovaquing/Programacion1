#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"

#define TAM 6

///Desarrollar una función que elimine todas las apariciones de un determinado elemento de un arreglo de enteros.
///Resolver utilizando aritmética de punteros. Desarrollar también el main que invoca a dicha función.
///Tener en cuenta que nuestro vector tiene un tamaño TAM, pero tienen elementos hasta cantElem.

int main()
{
    int v[TAM]={7,69,9,12,18,7},val,cantElem,seguir=1;
    cantElem=sizeof(v)/sizeof(*v);
    mostrarVector(v,cantElem);
    do{
        printf("seleccione el valor que desea eliminar: ");
        scanf("%d",&val);
        eliminarValoresEnVec(v,val,&cantElem);
        mostrarVector(v,cantElem);
        printf("desea borrar mas? (digite distinto de 0 para seguir)");
        scanf("%d",&seguir);
    }while(seguir);


    return 0;
}

