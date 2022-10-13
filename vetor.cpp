#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n, i;

    cout << "Quantos numeros vai digitar ?";
    cin >> n;
    double vet[n];

    for(i = 0; i < n; i++){
        cout << "digite um numero:";
        cin >> vet[i];
    }
    cout << "Numeros Digitados:" << endl;
    for (i = 0; i < n; i++){
        cout << vet[i] << endl;
    }

    return 0;
}
