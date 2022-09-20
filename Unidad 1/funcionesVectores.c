#include <stdio.h>
#include <stdlib.h>
#include "./funcionesVectores.h"
#include "./miMath.h"
#include "./miString.h"

void mostrarEntero(void *v){
    printf("%d\n",*(int*)v);
}

void mostrarFloat(void *v){
    printf("%.2f\n",*(float*)v);
}

void mostrarChar(void *v){
    printf("%c\n",*(char*)v);
}

void mostrarAlumno(void *v){
    t_alumno *a;
    a=(t_alumno*)v;
    printf("\nnombre y apellido: %s", a->nya);
    printf("\ndni: %d", a->dni);
    printf("\nfecha de nacimiento: %d/%d/%d", a->fNac.dia,a->fNac.mes,a->fNac.anio);
    printf("\npromedio: %.2f",a->prom);
}

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

void eliminarPorPosicion(int *v,int *cantElem,int pos){
    int i;
    for(i=1;i<pos;i++)
        v++;
    for(i=pos;i<*cantElem;i++){
        *v=*(v+1);
        v++;
    }
    (*cantElem)--;
}

void eliminarValor(int *v,int val,int *cantElem){
    int i,finalVec;
    finalVec=*cantElem;
    while(i<*cantElem && *v!=val){
        v++;
        i++;
    }
    if(*v==val)
        (*cantElem)--;
    while(i<finalVec){
        *v=*(v+1);
        v++;
        i++;
    }
}




void eliminarValoresEnVec(int *v,int val,int *cantElem){
    int i,*eliminar;
    i=*cantElem-1;
    eliminar=v;
    while(i>0){
        do{
            i--;
            if(*v==val){
                v++;
                (*cantElem)--;
            }else
                v++;
        }while(*v==val);        /// SIEMPRE sumo 1 a v y chequeo que nunca quede apuntando al valor que quiero eliminar
        if(*eliminar!=val)      /// si el valor del puntero a eliminar es != a el valor lo incremento
            eliminar++;
        if(*eliminar==val || eliminar<v)    ///una vez incrementado, si es igual a el valor o v ya encontro algun valor a eliminar debo pisarlo.
            *eliminar=*v;
    }
}


void mostrarVectorG(void *v,int tamE,int cantE,void (*mostrar)(void *)){
    int i;
    for(i=0;i<cantE;i++){
        mostrar(v);
        v+=tamE;
    }
}

void reemplazar(void *a,void *b,int tamE){
    void *aux=malloc(tamE);
    miMemcpy(aux,a,tamE);
    miMemcpy(a,b,tamE);
    miMemcpy(b,aux,tamE);
    free(aux);
}

void* buscarMenor(void *v,int tamE,int cantE,int (*comparar)(const void *,const void *)){
    int i,comparacion;
    void *menor=v;
    for(i=0;i<cantE-1;i++){
        v+=tamE;
        comparacion=comparar(v,menor);
        if(comparacion<0)
            menor=v;
    }
    return menor;
}

void algSelecion(void *v,int tamE,int cantE,int (*comparar)(const void *,const void *)){
    int i;
    void *menor;
    for(i=0;i<cantE-1;i++){
        menor=buscarMenor(v,tamE,cantE-i,comparar);
        if(menor!=v)
            reemplazar(v,menor,tamE);
        v+=tamE;
    }
}
