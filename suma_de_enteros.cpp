/*
Alvaro Delgado Quintana

Ejercicio: Suma de elementos de un array utilizando un Range-based For Loop

Enunciado

Escribe un programa en C++ que lea cinco números enteros y los almacene
en un array. A continuación, calcula e imprime la suma de todos sus elementos
utilizando obligatoriamente un bucle for basado en rango (range-based for loop),
sin utilizar índices para recorrer el array.

Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int array[5], suma=0;

    for(int &a : array){

        cin >> a;

    }

    for(int a : array){
        suma = suma + a;
    }

    cout << suma << "\n";

    return 0;
}