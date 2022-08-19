#include <Stdio.h>
#include <Stdlib.h>
#include "./miMath.h"

int factorial(int num){
    int resultado=1;
    while(num>0){
        resultado*=num;
        num--;
    }
    return resultado;
}

int validarNumeroNatural(){
    int n;
    do{
        printf("ingrese un numero natural mayor a 0: ");
        scanf("%d",&n);
        if(n<1)
            printf("numero invalido.\n");
    }while(n<1);
    return n;
}

int validarNumeroNaturalConCero(){
    int n;
    do{
        printf("ingrese un numero natural: ");
        scanf("%d",&n);
        if(n<0)
            printf("numero invalido.\n");
    }while(n<0);
    return n;

}

float validarNumeroPositivo(){
    float n;
    do{
        printf("ingrese un numero positivo: ");
        scanf("%f",&n);
        if(n<0)
            printf("numero invalido.\n");
    }while(n<0);
    return n;
}


int sumaDivisoresMenores(int n){
    int i,suma=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            suma+=i;
    }
    return suma;
}

int nMayorIgualQueCero(int n){
    if(n>=0)
        return n;
    else
        return -1;
}

int nMayorIgualQueM(int n, int m){
    if(n>=m)
        return n;
    else
        return m;
}

//MODULARIZAR

int combinatoria(){
    int n,m;
    printf("programa numero convinatorio, ingrese n (mayor o igual que 0): ");
    do{
        scanf("%d",&n);
        if(nMayorIgualQueCero(n)==-1)
            printf("error, ingrese un numero mayor o igual que 0");
    }while(nMayorIgualQueCero(n)==-1);
    printf("ingrese el numero m (mayor o igual que n): ");
    do{
        scanf("%d",&m);
        if(nMayorIgualQueM(m,n)!=m)
            printf("error, m debe ser mayor o igual que n, ingrese otro numero: ");
    }while(nMayorIgualQueM(m,n)!=m);
    return (factorial(m)/(factorial(n)*factorial(m-n)));
}

float valorAbs(float x){
    if(x<0)
        return x*=-1;
    return x;
}

float potencia(float x,int n){
    int i;
    float resultado=x;
    for(i=1;i<n;i++){
        resultado*=x;
    }
    return resultado;
}

float tolerancia(float n1,float n2){
    float n;
    do{
        scanf("%f",&n);
        if(n<n1||n>n2)
        printf("error, numero invalido.\ningrese otro numero: ");
    }while(n<n1||n>n2);
    return n;
}



float eALaX(){
    float x,tol,resultado=1,termino;
    int pot=1;
    printf("ingrese la potencia de e: ");
    scanf("%f",&x);
    printf("ingrese la tolerancia (valor entre 0 y 1): ");
    tol=tolerancia(0,1);
    termino=1;
    while(termino>=tol){
        termino=(potencia(x,pot)/factorial(pot));
        resultado+=termino;
        pot++;
    }
    return resultado;
}



float raizCuadrada(float A,float tol){
    float terminoAnterior,terminoActual=1,dif;
    do{
        terminoAnterior=terminoActual;
        terminoActual=(terminoAnterior+(A/terminoAnterior))/2;
        dif=valorAbs(terminoActual-terminoAnterior);
    }while(dif>=tol);
    return terminoActual;
}



int esFibonacci(int n){
    int termino=1,terminoAnterior=1,terminoAntAnt;
    do{
        terminoAntAnt=terminoAnterior;
        terminoAnterior=termino;
        termino=terminoAntAnt+terminoAnterior;
        if(termino==n)
            return 1;
    }while(n>termino);
    return 0;
}

// COMENTAR CON AGUSTIN O JULIAN

float calcularSeno(float n,float tol){
    int i=3,sumar=0;
    float termino,seno=n;
    do{
        termino=(potencia(n,i)/factorial(i));
        if(sumar){
            seno+=termino;
            sumar=0;
        }
        else{
            seno-=termino;
            sumar=1;
        }
        i+=2;
    }while(termino>tol);
    return seno;
}

double senX(double x, double tol) {
    double seno=0, term;
    int i=1, signo=0;
    do{
        term = (potencia(x,i)/factorial(i));
        i+=2;
        if(!signo) {
            seno+=term;
            signo=1;
        } else {
            seno-=term;
            signo=0;
        }
    }while(term>tol);
    return seno;
}

//  fin com

int perfeccionNumero(int n){
    int suma;
    suma=sumaDivisoresMenores(n);
    if(suma==n)
        return 0;
    if(suma<n)
        return -1;
    else
        return 1;


}


int multSumaSucesiva(int n,int m){
    int i,suma=0;
    for(i=0;i<m;i++){
        suma+=n;
    }
    return suma;
}



int cocienteEnteros(int n,int m){
    return n/m;
}



int restoEnteros(int n,int m){
    return n%m;
}



int sumarPrimerosNNaturales(int n){
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=i;
    return sum;
}



int sumarPrimerosParesNaturales(int n){
    int i,sum=0;
    for(i=0;i<=n;i++){
        if(i%2==0)
            sum+=i;
    }
    return sum;
}

int sumarParesNaturalesMenoresQueN(int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(i%2==0)
            sum+=i;
    }
    return sum;
}



int esPrimo(int n){
    int i=2,esPrimo=1;
    while(esPrimo && i<n)
        (n%i==0) ? (esPrimo=0):(i++);
    return esPrimo;
}





























































