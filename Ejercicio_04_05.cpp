// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 4

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>
#include <stdlib.h>

using namespace std;

void llenado(int[],int);
void sumprom(int[],int);

int main(){

    int n;
    cout<<"Ingrese cuantas calificaciones se solicitaran: ";
    cin>>n;
    int calificaciones[n];
    llenado(calificaciones,n);
    return 0;

}

void llenado(int calificaciones[],int n){
    for(int i=0;i<n;i++){
        calificaciones[i]=1+rand()%(101-1);
        cout<<calificaciones[i]<<endl;
    }
    sumprom(calificaciones,n);
}

void sumprom(int calificaciones[],int n){
    float suma=0;
    for(int i=0;i<n;i++){
        suma=suma+calificaciones[i];
    }
    cout<<"La sumatoria es de: "<<suma<<endl;
    cout<<"El promedio es de: "<<suma/n;
}
