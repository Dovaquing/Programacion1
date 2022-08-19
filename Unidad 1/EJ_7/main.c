#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    int n,p;
    n=validarNumeroNatural();
    p=perfeccionNumero(n);
    switch(p){
    case -1: printf("el numero es deficiente,");
        break;
    case 0: printf("el numero es perfeto.");
        break;
    case 1: printf("el numero es abundante.");
    }
    return 0;
}
