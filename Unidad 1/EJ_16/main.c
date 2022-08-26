#include <stdio.h>
#include <stdlib.h>
#include "../funcionesFecha.h"
#include "../miMath.h"

int main()
{
    tFecha fecha;
    int otraFecha=1,dias;
    while(otraFecha)
    {
        fecha=fechaSinValidar();
        if(fechaValida(fecha)){
            printf("ingrese la cantidad de dias que quiere sumarle a la fecha: \n");
            dias=validarNumeroNaturalConCero();
            fecha=sumarDias(fecha,dias);
            printf("%d/%d/%d\n", fecha.dia,fecha.mes,fecha.anio);
            }
        else
            printf("la fecha es invalida.\n");
        printf("ingresar otra fecha? (0=no  otro=si): ");
        scanf("%d",&otraFecha);
    }
    return 0;
}
