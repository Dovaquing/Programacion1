#include <stdio.h>
#include <stdlib.h>
#include "../miMath.h"
#include "../funcionesFecha.h"

int main()
{
    tFecha fecha;
    int otraFecha=1;
    while(otraFecha){
        fecha=fechaSinValidar();
        if(fechaValida(fecha))
            printf("la fecha es valida.\n");
        else
            printf("la fecha es invalida.\n");
        printf("ingresar otra fecha? (0=no  otro=si: ");
        scanf("%d",&otraFecha);
    }

    return 0;
}
