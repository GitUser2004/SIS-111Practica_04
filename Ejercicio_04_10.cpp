// Materia: Programaci�n I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creaci�n: 21/09/2023

// Fecha modificaci�n: 21/09/2023

// N�mero de ejericio: 10

/* Problema planteado:  En una f�brica de computadoras se planea ofrecer a los clientes un descuento que
depender� del n�mero de computadoras que compre. Si las computadoras son menos de
cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada
computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
precio total que el cliente debe pagar y el valor del descuento. */

#include <iostream>
#include <stdlib.h>

using namespace std;

void descuento(int,int);

int main(){

    int compra,precio;
    cout<<"Ingrese el numero de computadoras que fueron compradas: ";
    cin>>compra;
    cout<<"Ingrese el precio individual de las computadoras[Bs]: ";
    cin>>precio;
    descuento(compra,precio);
    return 0;

}

// calcula cada caso para calcular el descuento
void descuento(int compra,int precio){
    if(compra<5){
        cout<<"Tendra un descuento total de: "<<compra*(precio*0.1)<<endl;      // descuento
        cout<<"Con un total a pagar de: "<<(compra*precio)-(compra*(precio*0.1))<<endl;     // total
    }
    else{
        if(compra>=5&&compra<10){
            cout<<"Tendra un descuento total de: "<<compra*(precio*0.2)<<endl;
            cout<<"Con un total a pagar de: "<<(compra*precio)-(compra*(precio*0.2))<<endl;
        }
        else{
            if(compra>=10){
                cout<<"Tendra un descuento total de: "<<compra*(precio*0.4)<<endl;
                cout<<"Con un total a pagar de: "<<(compra*precio)-(compra*(precio*0.4))<<endl;
            }
        }
    }
}
