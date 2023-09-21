// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 7

/* Problema planteado: Una empresa efectúa el control de asistencia de sus empleados mediante un lector
biométrico, el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El empleado
tiene una tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos de tolerancia
se penaliza todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos).
De igual forma no puede salir antes del horario establecido en la salida, (si lo hace se penaliza
los minutos faltantes), pero si el empleado entra antes o sale después de sus horarios el sistema
solo toma en cuenta las 8 horas laborales de trabajo. */

#include <iostream>
#include <stdlib.h>

using namespace std;

void penalizacion(int,int,int,int,int);

int main(){

    int codigo,horaEntrada,minEntrada,horaSalida,minSalida;     // declaracion de las variables
    cout<<"Ingrese el codigo del empleado: ";
    cin>>codigo;
    cout<<"Ingrese la hora de entrada: ";
    cin>>horaEntrada;
    cout<<"Ingrese el minuto de entrada: ";
    cin>>minEntrada;
    cout<<"Ingrese la hora de salida: ";
    cin>>horaSalida;
    cout<<"Ingrese el minuto de salida: ";
    cin>>minSalida;
    penalizacion(codigo,horaEntrada,minEntrada,horaSalida,minSalida);
    return 0;

}

// funcion que depende a cada caso calcula la penalizacion
void penalizacion(int codigo,int horaEntrada,int minEntrada,int horaSalida,int minSalida){
    if(horaEntrada==8&&minEntrada<=10){     // considera entradas y salidas
        if(horaSalida==16&&minSalida>=0){
            cout<<"Penalizacion: "<<0;
        }
    }
    else{
        if(horaEntrada==8&&minEntrada>10){
            if(horaSalida<16&&minSalida<60){
                cout<<"Penalizacion: "<<minEntrada+(60-minSalida);
            }
        }
    }

}
