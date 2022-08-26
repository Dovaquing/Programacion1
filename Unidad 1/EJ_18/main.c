#include <stdio.h>
#include <stdlib.h>
#include "../funcionesFecha.h"

int main()
{
    tFecha f1,f2;
    f1.dia=15;
    f1.mes=2;
    f1.anio=2020;
    f2.dia=15;
    f2.mes=3;
    f2.anio=2020;
    printf("hay %d dias entre las fechas.\n",diasEntreFechas(f1,f2));
    return 0;
}
