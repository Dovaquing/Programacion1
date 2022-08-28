#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"
#include "../funciones.h"


int main()
{
    float n,tol;
    n=validarNumeroPositivo();
    printf("ingrese una tolerancia entre 0 y 1: ");
    tol=tolerancia(0,1);
    printf("la raiz cuadrada es =  %f", raizCuadrada(n,tol));



    return 0;
}
