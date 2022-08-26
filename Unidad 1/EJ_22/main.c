#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"

#define TAM 5

int main()
{
    int pos, val, cantElem=0;
    int vec[TAM];
    printf("Elegir una posicion a insertar(max %d)(0 para terminar): ",TAM);
    pos = tolerancia(0, TAM);
    while(pos!=0)
    {
        printf("\nValor a insertar: ");
        scanf("%d",&val);
        insertarEnVector(vec, pos, TAM, val, cantElem);
        if(cantElem<=TAM)
            cantElem++;
        printf("\n");
        mostrarVector(vec, TAM);
        printf("\nElegir una posicion a insertar(max %d)(0 para terminar): ",TAM);
        pos = tolerancia(0, TAM);
    }
    return 0;
}
