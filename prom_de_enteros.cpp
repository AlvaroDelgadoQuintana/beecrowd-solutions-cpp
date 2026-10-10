/*
Alvaro Delgado Quintana

Ejercicio: Cálculo del promedio y búsqueda del mayor 
elemento utilizando Range-based For Loops

Enunciado

Escribe un programa en C++ que lea cinco números enteros 
y los almacene en un array.

A continuación, utilizando bucles for basados en rango 
(range-based for loops), calcula el promedio de los cinco 
números e identifica cuál es el mayor elemento del array.

El programa debe mostrar ambos resultados por pantalla, 
sin utilizar índices para recorrer el array.

Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int array[5], suma=0, max;
    float prom;

    for(int &a : array){

        cin >> a;

    }

    max = array[0];

    for(int a : array){
        
        suma = suma + a;
        if(a>max){
            max=a;
        }
    }

    prom = suma/5.0;

    cout << prom << "\n";
    cout << max << "\n";

    return 0;
}