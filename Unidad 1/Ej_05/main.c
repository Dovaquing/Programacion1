#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("ingrese un numero para ver si pertenece a la serie de fibonacci: ");
    scanf("%d",&n);
    if(esFibonacci(n))
        printf("pertenece a la serie de fibonacci");
    else
        printf("no pertenece");

    return 0;
}
