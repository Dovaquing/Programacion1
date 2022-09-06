#ifndef FUNCIONESMATRICES_H_INCLUDED
#define FUNCIONESMATRICES_H_INCLUDED
#define TAM 4

void mostrarMatriz(int mat[TAM][TAM],int f,int c);
int sumarPorEncimaDeDiagonal1(int mat[TAM][TAM],int f,int c);
int sumarPorEncimaDeDiagonal2(int mat[TAM][TAM],int f,int c);
int sumarEncimaDiagonal2(int mat[TAM][TAM],int f,int c);
int sumarBajoDiagonal1(int mat[TAM][TAM],int f,int c);
int sumarBajoDiagonal2(int mat[TAM][TAM],int f,int c);
int trazaDiagonal1(int mat[TAM][TAM],int f,int c);
int trazaDiagonal2(int mat[TAM][TAM],int f,int c);
int esMatrizDiagonal(int mat[TAM][TAM],int f,int c);
int esMatrizIdentidad(int mat[TAM][TAM],int f,int c);
int esMatrizSimetrica(int mat[TAM][TAM],int f,int c);



#endif // FUNCIONESMATRICES_H_INCLUDED
