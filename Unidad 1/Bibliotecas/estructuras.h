#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED

typedef struct{
    int dni;
    char apellido[21];
    char nombre[21];
    double sueldo;
}t_Empleados;

typedef struct{
    int dni;
    char apellido[21];
    char nombre[21];
    float promedio;
}t_Estudiantes;

void mostrarEmpleado(void *emp);
void mostrarEstudiante(void *est);
void mostrarArchivo(FILE *archivo,int tamElem,void *mostrar(void *tamDato));
int generarPruebaEstudiantes(char *direccion);
int generarPruebaEmpleados(char *direccion);
int actualizarSueldos();


#endif // ESTRUCTURAS_H_INCLUDED
