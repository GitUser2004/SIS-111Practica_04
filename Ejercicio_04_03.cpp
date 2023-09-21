// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

using namespace std;

void imprimir(int[]);

int main(){

    char nombre[12][30];
    for(int i=0;i<12;i++){
        cin>>nombre[i];
    }
    cout<<"Lista de nombres: ";
    for(int i=0;i<12;i++){
        cout<<nombre[i]<<" ";
    }
    return 0;
}

void imprimir(int nombre[]){
    for(int i=0;i<12;i++){
        cout<<nombre[i]<<" ";
    }
}

