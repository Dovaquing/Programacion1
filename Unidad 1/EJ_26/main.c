#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"

#define TAM 8

///Desarrollar una funci�n que elimine todas las apariciones de un determinado elemento de un arreglo de enteros.
///Resolver utilizando aritm�tica de punteros. Desarrollar tambi�n el main que invoca a dicha funci�n.
///Tener en cuenta que nuestro vector tiene un tama�o TAM, pero tienen elementos hasta cantElem.

int main()
{
    int v[TAM]={69,69,7,7,7,69,32,63},val,cantElem,seguir=1;
    cantElem=sizeof(v)/sizeof(int);
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

