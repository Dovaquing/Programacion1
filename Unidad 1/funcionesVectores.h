#ifndef FUNCIONESVECTORES_H_INCLUDED
#define FUNCIONESVECTORES_H_INCLUDED
#define TAM 31

typedef struct{
    int dia;
    int mes;
    int anio;
}t_fecha;


typedef struct {
    char nya[TAM];
    int dni;
    t_fecha fNac;
    float prom;
} t_alumno;


int lugarVacio(int *v,int tam);
void mostrarEntero(void *v);
void mostrarFloat(void *v);
void mostrarChar(void *v);
void mostrarAlumno(void *v);
void mostrarVector(int *v,int tam);
void llenarVector(int *v,int tam);
void insertarEnVector(int *v,int pos,int tam,int val,int cantElem);
void insertarEnVecOrdenado(int *v,int tam,int val,int cantElem);
void eliminarPorPosicion(int *v,int *cantElem,int pos);
void eliminarValor(int *v,int val,int *cantElem);
void eliminarValoresEnVec(int *v,int val,int *cantElem);
void mostrarVectorG(void *v,int tamE,int cantE,void (*mostrar)(void *));
void reemplazar(void *a,void *b,int tamE);
void* buscarMenor(void *v,int tamE,int cantE,int (*comparar)(const void *,const void *));
void algSelecion(void *v,int tamE,int cantE,int (*comparar)(const void *,const void *));


#endif // FUNCIONESVECTORES_H_INCLUDED
