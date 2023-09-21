// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 1

// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

int calculo(int);

int main(){
    int year;
    cout<<"Ingrese un año cualquiera :";
    cin>>year;
    calculo(year);
    return 0;
}

int calculo(int year){
    if(year%4==0){
        cout<<"El año es bisiesto";
    }
    else{
        cout<<"El año no es bisiesto";
    }
}
