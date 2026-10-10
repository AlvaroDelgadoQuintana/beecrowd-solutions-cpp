/*
Alvaro Delgado Quintana
beecrowd | 1020
Edad en Días
Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int td, a, m, d;

    cin >> td;

    a = td / 365;
    td = td % 365;
    m = td / 30;
    td = td % 30;
    d = td;

    cout << a <<" ano(s)\n" ;
    cout << m <<" mes(es)\n" ;
    cout << d <<" dia(s)\n" ;


    return 0;
}