#include <stdio.h>
#include <stdlib.h>
#include "../../Bibliotecas/funcionesVectores.h"
#include "../../Bibliotecas/miMath.h"
#define TAM 5
#define cant 3
///Desarrollar una función que inserte un elemento en un arreglo de enteros,
///ordenado en forma ascendente, de forma de no alterar el orden.


int main()
{
    int val,v[TAM]={4,10,12},ce;
    mostrarVector(v,TAM);
    ce= cant;
    printf("ingrese el numero a ingresar en el vector(0 para salir)");
    val=validarNumeroNaturalConCero();
    while(val!=0){
        insertarEnVecOrdenado(v,TAM,val,ce);
        mostrarVector(v,TAM);
        printf("ingrese el numero a ingresar en el vector(0 para salir)");
        val=validarNumeroNaturalConCero();
        ce++;
    }
    return 0;
}
