// Crie uma matriz 4 X 4, preenchendo seus elementos com 
// números aleatórios float entre 0 e 12 (use o rand()). 
// Imprima na tela quantos valores maiores que 10 a matriz possui.

#include <iostream>
#include <ctime>
#include <cstdlib>
#define DIM 4
using namespace std;

int main(){
    int matriz[DIM][DIM];
    int valoresMaiorQue10 = 0;

    srand(time(nullptr));

    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            short numeroAleatorio = rand() % 13;
            matriz[i][j] = numeroAleatorio;
            if(matriz[i][j] > 10) valoresMaiorQue10++;
        }
    }

    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Valores maior que 10: " << valoresMaiorQue10;

    return 0;
}