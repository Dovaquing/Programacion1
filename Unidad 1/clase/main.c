#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/estructuras.h"

int compararEntero(const void *a,const void *b);
int compararLetras(const void *a,const void *b);


int main()
{

        char direc[]="estudiantes.dat",emp[]="empleados.dat";
        mostrarEmpleado(NULL);
        FILE *pf;
        pf=fopen(emp,"rb");
        if(!pf)
            return -1;
        mostrarArchivo(pf,sizeof(t_Empleados),mostrarEmpleado);
        mostrarEstudiante(NULL);
        FILE *pfAlum;
        pfAlum=fopen(direc,"rb");
        if(!pfAlum)
            return -1;
        mostrarArchivo(pfAlum,sizeof(t_Estudiantes),mostrarEstudiante);

        actualizarSueldos();
        mostrarEmpleado(NULL);
        mostrarArchivo(pf,sizeof(t_Empleados),mostrarEmpleado);
        mostrarEstudiante(NULL);
        mostrarArchivo(pfAlum,sizeof(t_Estudiantes),mostrarEstudiante);



        return 0;













        //ordenando letras
//        char a[]="pijasenculosjniwefihjsdaf";
//        algSelecion(a,sizeof(a[0]),sizeof(a)/sizeof(a[0]),compararLetras);
//        mostrarVectorG(a,sizeof(a[0]),sizeof(a)/sizeof(a[0]),mostrarChar);



//    char a[]="hola";
//    char b[]="hola";
//    miMemMove(a+1,a,sizeof(a)/sizeof(a[0]));
//    printf("%s\n",a);


//    -----Creando y mostrando matriz dinamica de enteros
//    int** mat,fil=3,col=2;
//    mat=generarMatrizDinamica(fil,col);
//    cargarMatriz(mat,fil,col);
//    mostrarMatrizDinamica(mat,fil,col);



    //creando y mostrando vectores genericos
    /*int v[5]={5,30,28,90,91218};
    mostrarVectorG(v,sizeof(int),sizeof(v)/sizeof(int),mostrarEntero);
    float v2[5]={2.1222,3.1568,15,9.1218,3};
    mostrarVectorG(v2,sizeof(float),sizeof(v2)/sizeof(float),mostrarFloat);
    char v3[3]={'p','O','w'};
    mostrarVectorG(v3,sizeof(char),sizeof(v3)/sizeof(char),mostrarChar);
    t_alumno v4[3]={{"Juan Mercuri",42321181,{9,12,2018},4.20},
                    {"Toboton Spinelli",2035689,{5,10,2019},5},
                    {"Jugo Burbuja",65897546,{20,9,2011},6.12}};
    mostrarVectorG(v4,sizeof(t_alumno),sizeof(v4)/sizeof(t_alumno),mostrarAlumno);*/




}

int compararLetras(const void *a,const void *b){
    return *(char*)a-*(char*)b;
}

int compararEntero(const void *a,const void *b){
    return  (*(int*)a)-(*(int*)b);
}

