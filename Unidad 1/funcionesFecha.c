#include <stdio.h>
#include <stdlib.h>
#include "./funcionesFecha.h"


int validarDia()
{
    int dia;
    do
    {
        printf("ingrese un dia: ");
        scanf("%d",&dia);
        if(dia<1||dia>31)
            printf("numero invalido.\n");
    }
    while(dia<1||dia>31);
    return dia;
}

tFecha fechaSinValidar()
{
    tFecha fecha;
    printf("ingrese un dia: ");
    scanf("%d",&fecha.dia);
    printf("ingrese un mes: ");
    scanf("%d",&fecha.mes);
    printf("ingrese un anio: ");
    scanf("%d",&fecha.anio);
    return fecha;
}

int validarMes()
{
    int mes;
    do
    {
        printf("ingrese un mes: ");
        scanf("%d",&mes);
        if(mes<1||mes>12)
            printf("numero invalido.\n");
    }
    while(mes<1||mes>12);
    return mes;
}



int validarAnio()
{
    int anio;
    do
    {
        printf("ingrese un anio: ");
        scanf("%d",&anio);
        if(anio<1||anio>2022)
            printf("numero invalido.\n");
    }
    while(anio<1||anio>2022);
    return anio;
}

int esAnioBiciesto(int anio)
{
    return ((anio%4 ==0 && anio%100 !=0) || (anio%400 ==0)) ? (1):(0);
}


int cantDiasMes(int mes,int anio)
{
    if((mes==2 && esAnioBiciesto(anio)))
        return 29;
    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        return 31;
    else if(mes==2)
        return 28;
    else
        return 30;
}

int fechaValida(tFecha fecha)
{
    return (!(fecha.dia>0 && fecha.dia<=cantDiasMes(fecha.mes,fecha.anio))) ? (0):(fecha.mes>0 && fecha.mes<13 && fecha.anio>=primerAnio) ? (1):(0);
}


tFecha diaSiguiente(tFecha fecha)
{
    if(fecha.dia==cantDiasMes(fecha.mes,fecha.anio))
    {
        fecha.dia=1;
        if (fecha.mes==12)
        {
            fecha.anio++;
            fecha.mes=1;
        }
        else
            fecha.mes++;
    }
    else
        fecha.dia++;

    return fecha;
}

int fechasIguales(tFecha f1,tFecha f2)
{
    return (f1.anio==f2.anio && f1.mes==f2.mes && f1.dia==f2.dia) ? (1):(0);
}

tFecha diaAnterior(tFecha fecha)
{
    if(fecha.dia==1)
    {
        if(fecha.mes==3 && esAnioBiciesto(fecha.anio))
        {
            fecha.dia=29;
            fecha.mes--;
        }
        else if(fecha.mes==3 && !(esAnioBiciesto(fecha.anio)))
        {
            fecha.dia=28;
            fecha.mes--;
        }
        else if(fecha.mes==1)
        {
            fecha.dia=31;
            fecha.mes=12;
            fecha.anio--;
        }
        else if(fecha.mes==2 || fecha.mes==4 || fecha.mes==6 || fecha.mes==8 || fecha.mes==9 || fecha.mes==11)
        {
            fecha.dia=31;
            fecha.mes--;
        }
        else
        {
            fecha.dia=30;
            fecha.mes--;
        }
    }
    else
        fecha.dia--;
    return fecha;
}

tFecha fechaMayor(tFecha f1,tFecha f2)
{
    if(f1.anio==f2.anio)
    {
        if(f1.mes==f2.mes)
        {
            if(f1.dia>f2.dia)
                return f1;
            else
                return f2;
        }
        else if(f1.mes>f2.mes)
            return f1;
        else
            return f2;
    }
    else if(f1.anio>f2.anio)
        return f1;
    else
        return f2;
}

tFecha fechaMenor(tFecha f1,tFecha f2)
{
    if(f1.anio==f2.anio)
    {
        if(f1.mes==f2.mes)
        {
            if(f1.dia<f2.dia)
                return f1;
            else
                return f2;
        }
        else if(f1.mes<f2.mes)
            return f1;
        else
            return f2;
    }
    else if(f1.anio<f2.anio)
        return f1;
    else
        return f2;
}

tFecha sumarDias(tFecha fecha,int dias)
{
    int i;
    for(i=0; i<dias; i++)
        fecha=diaSiguiente(fecha);
    return fecha;
}

tFecha restarDias(tFecha fecha,int dias)
{
    int i;
    for(i=0; i<dias; i++)
        fecha=diaAnterior(fecha);
    return fecha;
}


int diasEntreFechas(tFecha fecha1,tFecha fecha2)
{
    int dias=0;
    tFecha fechaPosterior,fechaAnterior;
    fechaPosterior=fechaMayor(fecha1,fecha2);
    fechaAnterior=fechaMenor(fecha1,fecha2);
    while(!(fechasIguales(fechaPosterior,fechaAnterior)))
    {
        fechaPosterior=diaAnterior(fechaPosterior);
        dias++;
    }
    return dias;
}

int mesFormula(int m,int a)
{
    if((esAnioBiciesto(a) && m==1) || m==4 || m==7)
        return 6;
    else if((esAnioBiciesto(a) && m==2) || m==8)
        return 2;
    else if(m==1 || m==10)
        return 0;
    else if(m==3 || m==11 || m==2)
        return 3;
    else if(m==5)
        return 1;
    else if(m==6)
        return 4;
    else
        return 5;
}

int konstanteDeSiglo(int a) ///esta funcion retorna -1 si la fecha es invalida
{
    if((a>1599&&a<1700)||(a>1999&&a<2100))
        return 6;
    else if((a>1699&&a<1800)||(a>2099&&a<2200))
        return 4;
    else if((a>1799&&a<1900)||(a>2199&&a<2300))
        return 2;
    else if((a>1899&&a<2000)||(a>2299&&a<2400))
        return 0;
    return -1;
}

int diaDeLaSemana(tFecha fecha)
{
    int dia,mesFecha,anioFecha,kSiglo;
    anioFecha=fecha.anio%100;
    mesFecha=mesFormula(fecha.mes,fecha.anio);
    kSiglo=konstanteDeSiglo(fecha.anio);
    dia=(fecha.dia+mesFecha+anioFecha+(anioFecha/4)+kSiglo)%7;
    return dia;
}
