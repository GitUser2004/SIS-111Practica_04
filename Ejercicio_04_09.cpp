// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 9

/* Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función
efectué un incremento salarial en base a la siguiente escala:
• Si el salario es menor < 1000 Bs. incremente en un 20%
• Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en
un 15%
• Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en
un 10%
• Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
La función debe obtener el incremento y el nuevo salario. */

#include <iostream>
#include <stdlib.h>

using namespace std;

void salario(int);

int main(){

    int pago;
    cout<<"Ingrese el salario del empleado[Bs]: ";
    cin>>pago;
    salario(pago);
    return 0;

}

// considera cada caso para calcular el salario
void salario(int pago){
    if(pago<1000){      // serie de if para cada caso
        cout<<"El incremento sera de: "<<pago*0.2<<"Bs"<<endl;
        cout<<"El salario con el incremento es de: "<<pago+pago*0.2<<"Bs";
    }
    else{
        if(pago>=1000&&pago<3000){
            cout<<"El incremento sera de: "<<pago*0.15<<"Bs"<<endl;
            cout<<"El salario con el incremento es de: "<<pago+pago*0.15<<"Bs";
        }
        else{
            if(pago>=3000&&pago<6000){
                cout<<"El incremento sera de: "<<pago*0.1<<"Bs"<<endl;
                cout<<"El salario con el incremento es de: "<<pago+pago*0.1<<"Bs";
            }
            else{
                if(pago>=6000){
                    cout<<"El incremento sera de: "<<pago*0.05<<"Bs"<<endl;
                    cout<<"El salario con el incremento es de: "<<pago+pago*0.05<<"Bs";
                }
            }
        }
    }
}
