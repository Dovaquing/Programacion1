#include <stdio.h>
#include <stdlib.h>
#include "../funcionesFecha.h"

int main()
{
    tFecha fecha;
    int otraFecha=1;
    while(otraFecha)
    {
        fecha=fechaSinValidar();
        if(fechaValida(fecha))
        {
            switch(diaDeLaSemana(fecha))
            {
            case 0: printf("domingol.\n");
                break;
            case 1: printf("lunes.\n");
                break;
            case 2: printf("martes.\n");
                break;
            case 3: printf("miercoles.\n");
                break;
            case 4: printf("jueves.\n");
                break;
            case 5: printf("viernes.\n");
                break;
            case 6: printf("sabaGOD.\n");
                break;
            }
        }
        else
            printf("la fecha es invalida.\n");
        printf("ingresar otra fecha? (0=no  otro=si): ");
        scanf("%d",&otraFecha);
    }
    return 0;
}
