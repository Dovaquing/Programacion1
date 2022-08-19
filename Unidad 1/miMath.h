#ifndef MIMATH_H_INCLUDED
#define MIMATH_H_INCLUDED

float tolerancia(float n1,float n2);
float valorAbs(float x);
float potencia(float x,int n);
int validarNumeroNatural();
int validarNumeroNaturalConCero();
float validarNumeroPositivo();
int factorial(int num);
int nMayorQueCero(int n);
int nMayorQueM(int n, int m);
int combinatoria();
float eALaX();
int sumaDivisoresMenores(int n);
float raizCuadrada(float n,float tol);
int esFibonacci(int n);
float calcularSeno(float n,float tol);
int perfeccionNumero(int n);
int multSumaSucesiva(int n,int m);
int cocienteEnteros(int n,int m);
int restoEnteros(int n,int m);
int sumarPrimerosNNaturales(int n);
int sumarPrimerosParesNaturales(int n);
int sumarParesNaturalesMenoresQueN(int n);
int esPrimo(int n);

//funciones no mias
double senX(double x, double tol);


#endif // MIMATH_H_INCLUDED


