// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 18/09/2023

// Fecha modificación: 18/09/2023

// Número de ejericio: 2

// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.

#include <iostream>

using namespace std;

int calculo(int,int,int,int,int,int);

int main(){
    int year1,mes1,dia1;        // declaracion de todas las variables
    cout<<"Ingrese una fecha actual por"<<endl;
    cout<<"Dia: ";
    cin>>dia1;
    cout<<"Mes: ";
    cin>>mes1;
    cout<<"Año: ";
    cin>>year1;
    int year2,mes2,dia2;
    cout<<"Ingrese la fecha de nacimiento por"<<endl;
    cout<<"Dia: ";
    cin>>dia2;
    cout<<"Mes: ";
    cin>>mes2;
    cout<<"Año: ";
    cin>>year2;
    calculo(dia1,mes1,year1,dia2,mes2,year2);
    return 0;
}

// resta los años meses y dias para hallar la edad
int calculo(int dia1,int mes1,int year1,int dia2,int mes2,int year2){
    int edad;
    edad=(year1-year2)+((mes1/12)-(mes2/12))+((dia1/365)-(dia2/365));
    cout<<"Su edad es de: "<<edad;
}
