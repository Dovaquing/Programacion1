#include <stdio.h>
#include <stdlib.h>
#include "./funcionesMatrices.h"


void cargarMatriz(int** mat,int f,int c){
    int i,j;
    for(i=0;i<f;i++)
        for(j=0;j<c;j++){
        printf("ingrese el valor de la matriz en la fila %d, columna %d: ",i+1,j+1);
        scanf("%d",&mat[i][j]);
    }
}


void mostrarMatrizDinamica(int** mat,int f,int c){
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

int** generarMatrizDinamica(int cantFil,int cantCol){
    int **inicioMatriz,i=0;
    inicioMatriz = (int**)malloc(cantFil*sizeof(int*));
    if(!inicioMatriz)
        return NULL;
    do{
        inicioMatriz[i]=(int*)malloc(cantCol*sizeof(int));
        i++;
    }while(inicioMatriz[i] && i<cantFil);
    if(!inicioMatriz[i]){
        while(i>=0){
            i--;
            free(inicioMatriz[i]);
            }
        free(inicioMatriz);
        return NULL;
    }
    return inicioMatriz;

    /*  ESTA IMPLEMENTACION FUNICONA PERO ES DESORGANIZADA
    if(!inicioMatriz)
        return NULL;
    for(i=0;i<cantFil;i++){
        inicioMatriz[i]=(int*)malloc(cantCol*sizeof(int));
        if(!inicioMatriz[i]){
            for(i=i;i>-1;i--){
                free(inicioMatriz[i]);
            }
            free(inicioMatriz);
            return NULL;
        }
    }*/

}
