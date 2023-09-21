// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 4

/*   Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango
de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
entrada de valores es para las calificaciones, debe hacerlo mediante una función. */

#include <iostream>
#include <stdlib.h>

using namespace std;

void llenado(int[],int);        // declaracion de funciones
void sumprom(int[],int);

int main(){

    int n;
    cout<<"Ingrese cuantas calificaciones se solicitaran: ";
    cin>>n;
    int calificaciones[n];      // vector para almacenar calificaciones
    llenado(calificaciones,n);
    return 0;

}

// funcion para llenar randomicamente el vector
void llenado(int calificaciones[],int n){
    for(int i=0;i<n;i++){
        calificaciones[i]=1+rand()%(101-1);
        cout<<calificaciones[i]<<endl;
    }
    sumprom(calificaciones,n);      // llamada a otra funcion
}

// funcion para sacar la sumatoria
void sumprom(int calificaciones[],int n){
    float suma=0;
    for(int i=0;i<n;i++){
        suma=suma+calificaciones[i];        // sumatoria
    }
    cout<<"La sumatoria es de: "<<suma<<endl;
    cout<<"El promedio es de: "<<suma/n;        // promedio
}
