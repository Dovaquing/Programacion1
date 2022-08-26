#ifndef FUNCIONESFECHA_H_INCLUDED
#define FUNCIONESFECHA_H_INCLUDED
#define primerAnio 1600

typedef struct
{
    int dia,
        mes,
        anio;
} tFecha;

tFecha fechaSinValidar();
int mesFormula(int m,int a);
int konstanteDeSiglo(int a);
tFecha fechaMayor(tFecha f1,tFecha f2);
tFecha fechaMenor(tFecha f1,tFecha f2);
int fechasIguales(tFecha f1,tFecha f2);
int esAnioBiciesto(int anio);
int validarDia();
int cantDiasMes(int mes, int anio);
int validarMes();
int validarAnio();
int fechaValida(tFecha fecha);
tFecha diaSiguiente(tFecha fecha);
tFecha diaAnterior(tFecha fecha);
tFecha sumarDias(tFecha fecha,int dias);
tFecha restarDias(tFecha fecha,int dias);
int diasEntreFechas(tFecha fecha1,tFecha fecha2);
int diaDeLaSemana(tFecha fecha);


#endif // FUNCIONESFECHA_H_INCLUDED
