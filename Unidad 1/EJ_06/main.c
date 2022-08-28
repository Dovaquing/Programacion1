#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    double n,tol;
    printf("ingrese una tolerancia (entre 0 y 1): ");
    tol=(double)tolerancia(0,1);
    printf("ingrese un numero para averiguar el seno: ");
    scanf("%lf",&n);


    printf("el seno es: %lf",senX(n,tol));

    return 0;
}
