// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 11

/* Problema planteado:  A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de
pago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa
en un 50%. Calcular el salario total del trabajador, además considere que si existe un
anticipo se debe restar este valor al salario total. Al total debe descontar un 10% para
el pago de impuestos. Se debe obtener:
- Total ganado
- Total descuentos
- Pago neto */

#include <iostream>
#include <stdlib.h>

using namespace std;

void sueldo(int,int,int);

int main(){

    int horas,pago,anticipo;
    cout<<"Ingrese las horas trabajadas en la semana: ";
    cin>>horas;
    cout<<"Ingrese el pago por hora[Bs]: ";
    cin>>pago;
    cout<<"Indique un anticipo(si existe): ";
    cin>>anticipo;
    sueldo(horas,pago,anticipo);
    return 0;

}


// calcula el sueldo en base a las especificaciones mencionadas
void sueldo(int horas,int pago,int anticipo){
    int total;
    int descuento;
    if(horas>40){       // fuera del horario normal
        total=(40*pago)+((horas-40)*pago*1.5);
        descuento=(total/10)+anticipo;

    }
    else{       // dentro del horario semanal
        total=horas*pago;
        descuento=(total/10)+anticipo;
    }
    cout<<"El total ganado es de: "<<total<<"[Bs]"<<endl;
    cout<<"El total de descuento es: "<<descuento<<"[Bs]"<<endl;
    cout<<"El pago neto es: "<<total-descuento<<"[Bs]"<<endl;
}
