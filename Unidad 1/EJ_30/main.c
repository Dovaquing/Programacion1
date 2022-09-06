#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/funcionesMatrices.h"

#define TAM 4

int main()
{
    int mat[TAM][TAM]={{3,-2,6,8},
                      {20,12,4,1},
                      {0,50,24,9},
                      {12,18,60,7}};
    mostrarMatriz(mat,TAM,TAM);
    printf("la suma de los elementos de la segunda diagonal es: %d",trazaDiagonal2(mat,TAM,TAM));


    return 0;
}
