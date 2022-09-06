#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"

#define TAM 6

///Desarrollar una funci�n que elimine todas las apariciones de un determinado elemento de un arreglo de enteros.
///Resolver utilizando aritm�tica de punteros. Desarrollar tambi�n el main que invoca a dicha funci�n.
///Tener en cuenta que nuestro vector tiene un tama�o TAM, pero tienen elementos hasta cantElem.

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

