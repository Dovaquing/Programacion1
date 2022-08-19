#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    int n;
    n=validarNumeroNatural();
    switch(esPrimo(n)){
    case 1: printf("es primo.");
        break;
    case 0: printf("no es primo.");
        break;
    }
    return 0;
}
