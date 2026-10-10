/*
Alvaro Delgado Quintana
beecrowd | 1019
Conversión de Tiempo
Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int ts, h, m, s;

    cin >> ts;

    h = ts / 3600;
    ts = ts % 3600;
    m = ts / 60;
    ts = ts % 60;
    s = ts;

    cout << h << ":" << m << ":" << s << "\n" ;


    return 0;
}