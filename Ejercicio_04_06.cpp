// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 6

/*   Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de
estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora de
estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una
hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora
siguiente. */

#include <iostream>
#include <stdlib.h>

using namespace std;

void pago(int,int,int,int);

int main(){

    int horaEntrada,minEntrada,horaSalida,minSalida;
    cout<<"Ingrese la hora de entrada del vehiculo: ";
    cin>>horaEntrada;
    cout<<"Ingrese el minuto de entrada del vehiculo: ";
    cin>>minEntrada;
    cout<<"Ingrese la hora de salida del vehiculo: ";
    cin>>horaSalida;
    cout<<"Ingrese el minuto de salida del vehiculo: ";
    cin>>minSalida;
    pago(horaEntrada,minEntrada,horaSalida,minSalida);
    return 0;

}

// considerando las horas de entrada saca costos
void pago(int horaEntrada,int minEntrada,int horaSalida,int minSalida){
    int hora,agregado;
    hora=(horaSalida-horaEntrada);      // horas contadas
    agregado=(minSalida+(60-minEntrada));       // minutos para ver si hay mas horas
    if(hora>=1){
        if(agregado>=60){
            cout<<"El monto a pagar es de: "<<8+(hora-1)*3+((agregado/60)*3)<<"Bs";
        }
        else{
            cout<<"El monto a pagar es de: "<<8+(hora-1)*3<<"Bs";
        }
    }
    else{
        if(hora==0&&agregado>0){
            cout<<"El monto a pagar es de: "<<8<<"Bs";
        }
    }
}
