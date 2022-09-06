#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/funcionesMatrices.h"

#define TAM 4

int main()
{
     int mat[TAM][TAM]={{1,0,0,0},
                      {0,1,0,0},
                      {0,0,30,0},
                      {0,0,0,42}};
    mostrarMatriz(mat,TAM,TAM);
    if(esMatrizDiagonal(mat,TAM,TAM))
        printf("es matriz diagonal :D");
    else
        printf("no es matriz diagonal :(");
    return 0;
}
