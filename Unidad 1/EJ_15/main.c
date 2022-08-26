#include <stdio.h>
#include <stdlib.h>
#include "../funcionesFecha.h"

int main()
{
    tFecha fecha;
    int otraFecha=1;
    while(otraFecha){
        fecha=fechaSinValidar();
        if(fechaValida(fecha)){
            fecha=diaSiguiente(fecha);
            printf("el dia siguiente es: %d/%d/%d\n",fecha.dia,fecha.mes,fecha.anio);
            }
        else
            printf("la fecha es invalida.\n");
        printf("ingresar otra fecha? (0=no  otro=si: ");
        scanf("%d",&otraFecha);
    }
    return 0;
}
