// Faça um programa que leia uma matriz A de inteiros, dimensão 2 X 2. 
// Gere uma matriz B 2 X 2 cujos elementos são os quadrados dos elementos 
// da matriz A.

#include <iostream>
#include <cmath>
using namespace std;

#define DIM 2

int main(){
    int A[DIM][DIM];
    int B[DIM][DIM];

    // primeira matriz
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n";

    // segunda matriz
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            B[i][j] = A[i][j];
            cout << pow(B[i][j], 2) << "\t";
        }
        cout << "\n";
    }

    return 0;
}