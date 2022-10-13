#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int m, n, i, j;
    cout << "Quantas linhas vai ter a matriz:";
    cin >> m;
    cout << "Quantas Colunas vai ter a matriz:";
    cin >> n;

    int mat[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << "elemento [" << i << "," << j << "] :";
            cin >> mat[i][j];
        }
    }
    cout << "matriz digita :"<< endl;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}