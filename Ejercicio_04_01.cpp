// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 18/09/2023

// Fecha modificaci�n: 18/09/2023

// N�mero de ejericio: 1

// Problema planteado: Lee por teclado un a�o y calcula y muestra si es bisiesto

#include <iostream>

using namespace std;

int calculo(int);

int main(){
    int year;
    cout<<"Ingrese un a�o cualquiera :";
    cin>>year;
    calculo(year);
    return 0;
}

int calculo(int year){
    if(year%4==0){
        cout<<"El a�o es bisiesto";
    }
    else{
        cout<<"El a�o no es bisiesto";
    }
}
