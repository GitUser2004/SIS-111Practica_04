// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

using namespace std;

struct datos{
    char nombre[12][30];
    int edad[12];
    float estatura[12];
    float peso[12];
};

int main(){
    datos comp;
    for(int i=0;i<12;i++){
        cin>>comp.nombre[i][30];
        cout<<comp.nombre[i][30]<<endl;
    }
    return 0;
}


