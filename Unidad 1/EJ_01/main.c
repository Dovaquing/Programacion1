#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"

int main()
{
    int n;
    printf("ingrese un numero para averiguar el factorial: ");
    do{
        if(n<0)
        printf("ingrese un numero mayor que 0");
        scanf("%d",&n);
    }while(n<0);
    printf("%d",factorial(n));

    return 0;
}
