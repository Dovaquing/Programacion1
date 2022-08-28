#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    int n,m;
    n=validarNumeroNaturalConCero();
    m=validarNumeroNatural();
    printf("cociente: %d\n",cocienteEnteros(n,m));
    printf("resto: %d",restoEnteros(n,m));
    return 0;
}
