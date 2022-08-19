#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    int n;
    n=validarNumeroNaturalConCero();
    printf("%d",sumarPrimerosParesNaturales(n));
    return 0;
}
