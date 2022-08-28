#ifndef FUNCIONESVECTORES_H_INCLUDED
#define FUNCIONESVECTORES_H_INCLUDED


int lugarVacio(int *v,int tam);
void mostrarVector(int *v,int tam);
void llenarVector(int *v,int tam);
void insertarEnVector(int *v,int pos,int tam,int val,int cantElem);
void insertarEnVecOrdenado(int *v,int tam,int val,int cantElem);
void eliminarValoresEnVec(int *v,int val,int *cantElem);



#endif // FUNCIONESVECTORES_H_INCLUDED
