#include <iostream>
using namespace std;
#define DIM 3

int main() {
    short matriz[DIM][DIM];
    short maior = matriz[0][0];
    short menor = matriz[3][3];
    short indiceMaiorX = 0;
    short indiceMaiorY = 0;
    short indiceMenorX = 0;
    short indiceMenorY = 0;
    
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                indiceMaiorX = i;
                indiceMaiorY = j;
            }
            if(matriz[i][j] < menor){ 
                menor = matriz[i][j];
                indiceMenorX = i;
                indiceMenorY = j;
            }
        }
        cout << endl;
    }
    
    for(int i=0; i<DIM; i++){
        for(int j=0; j<DIM; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Maior: " << maior << " (Linha: " << indiceMaiorX + 1 << ", Coluna: " << indiceMaiorY + 1 << endl;
    cout << "Menor: " << menor << " (Linha: " << indiceMenorX + 1 << ", Coluna: " << indiceMenorY + 1 << endl;

    return 0;
}