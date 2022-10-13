#include <iostream>
#include <iomanip>
using namespace std;

    int main(){
        int a, b, c;

        cout << "Primeiro Valor :" << endl;
        cin >> a;
        cout << "Segundo Valor :" << endl;
        cin >> b;
        cout << "Terceiro Valor :" << endl;
        cin >> c;


        if(a < b && a < c){
            cout << " menor = " << a;
        }
        else if(b < c){
            cout << " menor = " << b;
        }
        else{
            cout << " menor = " << c;
        }

    return 0;
    }