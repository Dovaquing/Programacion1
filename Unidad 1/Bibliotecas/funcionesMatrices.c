#include <stdio.h>
#include <stdlib.h>
#include "./funcionesMatrices.h"



void mostrarMatriz(int mat[TAM][TAM],int f,int c){
    int i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
}

int sumarPorEncimaDeDiagonal1(int mat[TAM][TAM],int f,int c){
    int suma=0,i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if(j>i)
                suma+=mat[i][j];
        }
    }
    return suma;
}

int sumarPorEncimaDeDiagonal2(int mat[TAM][TAM],int f,int c){
    int suma=0,i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if((i+j)<(f-1))
                suma+=mat[i][j];
        }
    }
    return suma;
}

int sumarEncimaDiagonal2(int mat[TAM][TAM],int f,int c){
    int suma=0,i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if((i+j)<=(f-1))
                suma+=mat[i][j];
        }
    }
    return suma;
}

int sumarBajoDiagonal1 (int mat[TAM][TAM],int f,int c){
    int suma=0,i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if(j<i)
                suma+=mat[i][j];
        }
    }
    return suma;
}

int sumarBajoDiagonal2(int mat[TAM][TAM],int f,int c){
    int suma=0,i,j;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            if((i+j)>(f-1))
                suma+=mat[i][j];
        }
    }
    return suma;
}

int trazaDiagonal1(int mat[TAM][TAM],int f,int c){
    int i,j,suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(i==j)
                suma+=mat[i][j];
    return suma;
}

int trazaDiagonal2(int mat[TAM][TAM],int f,int c){
    int i,j,suma=0;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(i+j==f-1)
                suma+=mat[i][j];
    return suma;
}

int esMatrizDiagonal(int mat[TAM][TAM],int f,int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if((i!=j && mat[i][j]!=0) || (i==j && mat[i][j]==0))
                return 0;
    return 1;
}

int esMatrizIdentidad(int mat[TAM][TAM],int f,int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if((i!=j && mat[i][j]!=0) || (i==j && mat[i][j]!=1))
                return 0;
    return 1;
}

int esMatrizSimetrica(int mat[TAM][TAM],int f,int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++)
            if(mat[i][j]!=mat[j][i])
                return 0;
    return 1;
}
