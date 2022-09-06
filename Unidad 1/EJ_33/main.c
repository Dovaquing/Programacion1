#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/funcionesMatrices.h"

int main()
{
    int mat[TAM][TAM]={{8,4,2,6},
                      {4,1,6,0},
                      {2,6,1,0},
                      {6,0,0,1}};
    mostrarMatriz(mat,TAM,TAM);
    if(esMatrizSimetrica(mat,TAM,TAM))
        printf("es matriz simetrica :D");
    else
        printf("no es matriz simetrica :(");
    return 0;
}
