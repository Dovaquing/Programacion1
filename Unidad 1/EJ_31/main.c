#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/funcionesMatrices.h"

int main()
{
    int mat[TAM][TAM]={{1,0,0,0},
                      {0,1,0,0},
                      {0,0,1,0},
                      {0,0,0,1}};
    mostrarMatriz(mat,TAM,TAM);
    if(esMatrizIdentidad(mat,TAM,TAM))
        printf("es matriz identidad :D");
    else
        printf("no es matriz identidad :(");
    return 0;
}
