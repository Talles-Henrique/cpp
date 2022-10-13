#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
    int main(){
        double base, altura, area, perimetro, diagonal;
        cout << "Base do retangulo: ";
        cin >> base;
        cout << "Altura do retangulo: ";
        cin >> altura;

        area = base * altura;
        perimetro = 2 * (base + altura);
        diagonal = sqrt (pow(base, 2.0) + pow(altura, 2.0));

        cout << fixed << setprecision(4);
        cout << "area = " << area << endl;
        cout << "perimetro = " << perimetro << endl;
        cout << "diagonal = " << diagonal;


        return 0;
    }