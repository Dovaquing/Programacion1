#include <stdio.h>
#include <stdlib.h>
#include "../funcionesVectores.h"
#include "../miMath.h"





int main()
{
    int v[]={2,4,20,7},pos,cantElem;
    cantElem=sizeof(v)/sizeof(*v);
    mostrarVector(v,cantElem);
    printf("que posicion desea eliminar?: ");
    scanf("%d",&pos);
    eliminarPorPosicion(v,&cantElem,pos);
    mostrarVector(v,cantElem);
    return 0;
}
