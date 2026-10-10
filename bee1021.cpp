/*
Alvaro Delgado Quintana
beecrowd | 1021
Billetes y Monedas
Data: 10/10/2026
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int moedas[]={100, 50, 25, 10, 5, 1}, notas[]={100, 50, 20, 10, 5, 2};
    int moeda, nota;
    double dinheiro, vartemp;
    

    cin >> dinheiro;
    nota = dinheiro;
    
    cout << "NOTAS:\n";

    for(int i:notas){
        cout << nota/i << " nota(s) de R$ " << i << ".00\n";   
        //Hacer dinheiro = dinheiro - (nota/i)*i; fue contraintuitivo porque no entendia como
        //al multiplicar y dividir por el mismo numero me hiba a dar resultado diferente
        //se me ocurrio a mi solo pero al calcular en mi mente se me hacia un rollo hasta que lo entendi
        dinheiro = dinheiro - (nota/i)*i;     
        nota = nota % i;
    }

    dinheiro = dinheiro * 100;
    moeda = dinheiro; //para convertir las monedas en enteros

    cout << "MOEDAS:\n";

    for(int i:moedas){
        cout << fixed << setprecision(2);
        cout << moeda/i << " moeda(s) de R$ " << i/100.00 << "\n";            
        moeda = moeda % i;
    }



    return 0;
}