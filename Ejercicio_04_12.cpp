// Materia: Programación I, Paralelo 1

// Autor: Dylan Ramiro Gutierrez Huallpara

// Fecha creación: 21/09/2023

// Fecha modificación: 21/09/2023

// Número de ejericio: 11

/* Problema planteado:  Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por.
• Por selección
• Por inserción
• Por el método burbuja
• Por el método Shell
• Por QuickSort */

#include <iostream>
#include <stdlib.h>

using namespace std;

void imprimir(int[],int);       // declaracion de funciones de ordenamiento
void seleccion(int[],int);
void insercion(int[],int);
void burbuja(int[],int);
void shell(int[],int);
void quick(int[],int,int,int);
void impquick(int[],int);

int main(){

    int n,metodo;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>n;
    int vect[n];
    for(int i=0;i<n;i++){       // llenado random
        vect[i]=rand()%9;
    }
    cout<<"Imprime el vector: ";
    imprimir(vect, n);
    cout<<endl;
    cout<<"Ingrese cual de los metodos quiere para ordenar el vector: \n seleccion(1) \n insercion(2) \n metodo burbuja(3) \n metodo Shell(4) \n QuickSort(5) \n";
    cin>>metodo;
    switch(metodo){     // casos para elegir la forma de ordenamiento
        case 1: seleccion(vect,n);
            break;
        case 2: insercion(vect,n);
            break;
        case 3: burbuja(vect,n);
            break;
        case 4: shell(vect,n);
            break;
        case 5: quick(vect,0,n-1,n);
                impquick(vect,n);
            break;
        default:;
    }
    return 0;

}

// imprime el vector sin ordenamiento
void imprimir(int vect[],int n){
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
}

// busca el minimo de la lista y lo intercambia por el primero y sigue con el siguiente
void seleccion(int vect[],int n){
    int aux,pos;
    for(int i=0;i<n;i++){
        aux=vect[i];
        pos=i;
        for(int j=i+1;j<n;j++){
            if(vect[j]<aux){
                aux=vect[j];
                pos=j;
            }
        }
        vect[pos]=vect[i];
        vect[i]=aux;
    }
    for(int a=0;a<n;a++){
        cout<<vect[a]<<" ";
    }
}

// crea un minivector que se expande y cada valor nuevo lo ordena hasta llegar a todo el vector
void insercion(int vect[],int n){
    int aux,pos;
    for (int i=0;i<n;i++){
        pos=i;
        aux=vect[i];
        while ((pos>0)&&(vect[pos-1]>aux)){
            vect[pos]=vect[pos-1];
            pos--;
        }
        vect[pos]=aux;
    }
    for(int a=0;a<n;a++){
        cout<<vect[a]<<" ";
    }
}

// toma valors de 2 en 2 para intercambiar el mas pequeño haciendo recorridos y ordenar
void burbuja(int vect[],int n){
    int aux,pos;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(vect[j]>vect[j+1]){
    			aux=vect[j];
    			vect[j]=vect[j+1];
    			vect[j+1]=aux;
			}
		}

	}
    for(int a=0;a<n;a++){
        cout<<vect[a]<<" ";
    }
}

// divide el vector(si es impar pone el valor medio al centro) y los sigue dividiendo organizando cada pedazo
void shell(int vect[],int n){
    int i,j,temp,aux;
    temp=n/2;
    while(temp>0){
        for(i=temp;i<n;i++){
            j=i-temp;
            while(j>0){
                if(vect[j]>=vect[j+temp]){
                    aux=vect[j];
                    vect[j]=vect[j+temp];
                    vect[j+temp] = aux;
                }
                else{
                    j=0;
                }
                j=j-temp;
            }
        }
        temp=temp/2;
    }
    for(int a=0;a<n;a++){
        cout<<vect[a]<<" ";
    }
}

// divide el vector en pedazos pequeños ordenandolos individualmente
void quick(int vect[],int primero,int ultimo,int n)
{
    int cent,i,j;
    double ind;
    cent=(primero+ultimo)/2;
    ind=vect[cent];
    i=primero;
    j=ultimo;
    do
        {
            while(vect[i]<ind) i++;
            while(vect[j]>ind) j--;
            if(i<=j)
            {
                double temp;
                temp=vect[i];
                vect[i]=vect[j];
                vect[j]=temp;
                i++;
                j--;
            }
        }
    while(i<=j);
    if(primero<j)
        quick(vect,primero,j,n);
    if(i<ultimo)
        quick(vect,i,ultimo,n);

}

void impquick(int vect[],int n){
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
}
