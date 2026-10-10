/*
Alvaro Delgado Quintana
beecrowd | 1018
Billetes
Data: 09/10/2026
*/
#include <iostream>
using namespace std;

int main(){
    int notas[]={100, 50, 20, 10, 5, 2, 1}, n;

    cin >> n;
    cout << n << "\n";

    for(int i:notas){
        cout << n/i << " nota(s) de R$ " << i << ",00\n";
        n = n % i;
    }


    return 0;
}