#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVecInt(int *vec,int tam);

void devolverMenor(int *vec,int tam,int **menor,int *suma);


int main()
{
    int vec[TAM]={18,40,20,3,10},*menor,suma;

    mostrarVecInt(vec,TAM);
    devolverMenor(vec,TAM,&menor,&suma);
    printf("la suma es: %d, y el menor es: %d   ",suma,*menor);



    mostrarVecInt(vec,TAM);
    return 0;
}

void mostrarVecInt(int *vec,int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d  ",*vec++);
    }
}

void devolverMenor(int *vec,int tam,int **menor,int *suma){
    *menor=vec;
    *suma=0;
    **menor=*vec;
    int *fin,i;
    fin=vec;
    vec++;
    for(i=0;i<tam-1;i++)
        fin++;
    while(vec<=fin){
        *suma+=*vec;
        if(*vec<**menor)
            *menor=vec;
        vec++;
    }
}

