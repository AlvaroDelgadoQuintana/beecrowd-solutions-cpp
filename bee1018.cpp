/*
Alvaro Delgado Quintana
beecrowd | 1018
Billetes
Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int n, n100, n50, n20, n10, n5, n2, n1;

    cin >> n;

    cout << n << "\n";

    if(n>=100){
        n100 = n/100;
        n = n - n100*100;
        cout << n100 << " nota(s) de R$ 100,00" << "\n";
    } else {cout << "0 nota(s) de R$ 100,00" << "\n";}
    if(n>=50){
        n50 = n/50;
        n = n - n50*50;
        cout << n50 << " nota(s) de R$ 50,00" << "\n";
    } else {cout << "0 nota(s) de R$ 50,00" << "\n";}
    if(n>=20){
        n20 = n/20;
        n = n - n20*20;
        cout << n20 << " nota(s) de R$ 20,00" << "\n";
    } else {cout << "0 nota(s) de R$ 20,00" << "\n";}
    if(n>=10){
        n10 = n/10;
        n = n - n10*10;
        cout << n10 << " nota(s) de R$ 10,00" << "\n";
    } else {cout << "0 nota(s) de R$ 10,00" << "\n";}
    if(n>=5){
        n5 = n/5;
        n = n - n5*5;
        cout << n5 << " nota(s) de R$ 5,00" << "\n";
    } else {cout << "0 nota(s) de R$ 5,00" << "\n";}
    if(n>=2){
        n2 = n/2;
        n = n - n2*2;
        cout << n2 << " nota(s) de R$ 2,00" << "\n";
    } else {cout << "0 nota(s) de R$ 2,00" << "\n";}
    if(n>=1){
        n1 = n/1;
        n = n - n1*1;
        cout << n1 << " nota(s) de R$ 1,00" << "\n";
    } else {cout << "0 nota(s) de R$ 1,00" << "\n";}

    return 0;
}