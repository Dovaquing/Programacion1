#include <stdio.h>
#include <stdlib.h>
#include "./funcionesVectores.h"
#include "./miMath.h"


void mostrarVector(int *v,int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d\n",*v);
        v++;
    }
}

void llenarVector(int *v,int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("ingrese el valor del vector en la posicion %d ",i+1);
        *v=validarNumeroNaturalConCero();
        v++;
    }
}


void insertarEnVector(int *v,int pos,int tam,int val,int cantElem)
{
    int i,*desplazador;
    pos--;
    desplazador=v;
    if(pos>=cantElem)
    {
        v+=cantElem;
        *v=val;
    }
    else
    {
        desplazador+=cantElem;
        v+=(cantElem-1);
        for(i=cantElem; i>pos; i--)
        {
            *desplazador=*v;
            v--;
            desplazador--;
        }
        *desplazador=val;   ///esta linea utiliza el puntero desplazador como asignador
    }
}

void insertarEnVecOrdenado(int *v,int tam,int val,int cantElem)
{
    int *insertar,i;        ///la variable iteradora sirve para corroborar que no me caigo del vector.
    insertar=v;
    v+=cantElem;
    i=0;
    while((i<cantElem) && (*insertar<val))
    {
        insertar++;
        i++;
    }
    if(insertar>=v && i==tam)    ///si i fuera == a la cantElem y no estaria al final del vector, me pisaria el valor que tengo que correr
    {
        *(insertar-1)=val;
    }
    else
    {
        while(v!=insertar)
        {
            *v=*(v-1);
            v--;
        }
        *v=val;
    }
}

void eliminarValoresEnVec(int *v,int val,int *cantElem){
    int i,*eliminar;
    i=*cantElem;
    eliminar=v;
    while(i>0){
        do{
            i--;
            if(*v==val){
                v++;
                *cantElem-=1;
            }else
                v++;
        }while(*v==val);        /// SIEMPRE sumo 1 a v y chequeo que nunca quede apuntando al valor que quiero eliminar
        if(*eliminar!=val)      /// si el valor del puntero a eliminar es != a el valor lo incremento
            eliminar++;
        if(*eliminar==val || eliminar<v)    ///una vez incrementado, si es igual a el valor o v ya encontro algun valor a eliminar debo pisarlo.
            *eliminar=*v;
    }
}

