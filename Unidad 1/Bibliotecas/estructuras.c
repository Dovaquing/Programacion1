#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../bibliotecas/estructuras.h"


void mostrarEmpleado(void *empleado){
    t_Empleados *emp=(t_Empleados*)empleado;
    if(!emp){
        printf("DNI             APELLIDO             NOMBRE              SALARIO\n");
        printf("----------  ---------------         --------            ---------\n");
        return;
    }
    else{
        printf("%d             %s             %s              %f\n",emp->dni,emp->apellido,emp->nombre,emp->sueldo);
    }
}

void mostrarEstudiante(void *estudiante){
    t_Estudiantes *est=(t_Estudiantes*)estudiante;
    if(!est){
        printf("DNI             APELLIDO             NOMBRE              SALARIO\n");
        printf("----------  ---------------         --------            ---------\n");
        return;
    }
    else{
        printf("%d             %s             %s              %f\n",est->dni,est->apellido,est->nombre,est->promedio);
    }

}

void mostrarArchivo(FILE *archivo,int tamElem,void *mostrar(void *dato)){
    void *aux=malloc(tamElem);
    rewind(archivo);
    fread(aux,tamElem,1,archivo);
    while(!feof(archivo)){
        mostrar(aux);
        fread(aux,tamElem,1,archivo);
    }
    free(aux);
}

int mostrarArchivoEmpleados(char *archivo){
    t_Empleados emp;
    FILE *pf;
    pf=fopen(archivo,"rb");
    if(!pf)
        return -1;

    mostrarEmpleado(NULL);
    fread(&emp,sizeof(t_Empleados),1,pf);
    while(!feof(pf)){
        mostrarEmpleado(&emp);
        fread(&emp,sizeof(t_Empleados),1,pf);
    }
    fclose(pf);
    return 0;
}

int generarPruebaEstudiantes(char *direccion){
    t_Estudiantes estudiantes[]={{03675654,"leopoldo","lopez",6.49},
                                  {12345678,"maradona","diego",10},
                                  {42321181,"mercuri","juan",9.1218},
                                  {32654856,"nicole","niki",8},
                                  {25654321,"rodriguez","rodrigo",7.51}};
    FILE *pf;
    pf=fopen(direccion,"wb");
    if(!pf)
        return -1;

    fwrite(estudiantes,sizeof(estudiantes),1,pf);

    fclose(pf);

    return 0;

    }

int generarPruebaEmpleados(char *direccion){

     t_Empleados empleados[]={{89654756,"akerman","damian",1000},
                            {65987563,"mercuri","juan",912.18},
                            {45325689,"messi","lionel",2365.32},
                            {32654856,"nicole","niki",236.50},
                            {25654321,"rodriguez","rodrigo",2567}};

    FILE *pf;
    pf=fopen(direccion,"wb");
    if(!pf)
        return -1;

    fwrite(empleados,sizeof(empleados),1,pf);
    fclose(pf);
    return 0;

}

int actualizarSueldos(){
    t_Empleados empleado;
    t_Estudiantes estudiantes;
    int cmp;
    FILE *emp,*est;
    emp=fopen("empleados.dat","r+b");
    if(!emp)
        return -1;
    est=fopen("estudiantes.dat","rb");
    if(!est){
        fclose(emp);
        return -1;
        }

    fread(&empleado,sizeof(t_Empleados),1,emp);
    fread(&estudiantes,sizeof(t_Estudiantes),1,est);

    while(!feof(emp) && !feof(est)){
        if(!(cmp=strcmp(empleado.apellido,estudiantes.apellido)))
            if(!(cmp=strcmp(empleado.nombre,estudiantes.nombre)))
                if(!(cmp=empleado.dni-estudiantes.dni))
                    if(estudiantes.promedio>7){
                        empleado.sueldo+=(empleado.sueldo*0.0728);
                        fseek(emp,-(long)sizeof(t_Empleados),SEEK_CUR);
                        fwrite(&empleado,sizeof(t_Empleados),1,emp);
                        fseek(emp,0,SEEK_CUR);
                    }
        if(cmp<0)
            fread(&empleado,sizeof(t_Empleados),1,emp);
        else
            fread(&estudiantes,sizeof(t_Estudiantes),1,est);
    }
    fclose(emp);
    fclose(est);
    return 0;
}


