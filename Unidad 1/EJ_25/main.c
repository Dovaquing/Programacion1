#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"

int main()
{
    int v[]={2,4,20,7,9},val,cantElem;
    cantElem=sizeof(v)/sizeof(*v);
    mostrarVector(v,cantElem);
    printf("ingrese el valor que quiere eliminar: ");
    scanf("%d",&val);
    eliminarValor(v,val,&cantElem);
    mostrarVector(v,cantElem);

    return 0;
}
