/*Dada duas matrizes de ordem n (quadrada) como obter a matriz produto das duas matrizes? Construir e utilizar uma função que
receba duas matrizes e devolva o produto delas.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int ProdMatriz(int n);

int main()
{
    int n;

    cout << "Entre a ordem da matriz: ";
    cin >> n;

    ProdMatriz(n);

    system("PAUSE");
    return EXIT_SUCCESS;
}

int ProdMatriz(int n){
    float matriz1[n][n], matriz2[n][n], prod[n][n];
    int i, j, k;

    cout << "Valores da matriz 1." << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Entre o valor " << i + 1 << ", " << j + 1 << ": ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Valores da matriz 2." << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Entre o valor " << i + 1 << ", " << j + 1 << ": ";
            cin >> matriz2[i][j];
        }
    }

    cout << "Valores da matriz 1." << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Valor " << i + 1 << ", " << j + 1 << ": " << matriz1[i][j] << endl;
        }
    }

    cout << "Valores da matriz 2." << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << "Valor " << i + 1 << ", " << j + 1 << ": " << matriz2[i][j] << endl;
        }
    }

    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            prod[i][k] = 0;
            for (j = 0; j < n; j++) {
                prod[i][k] += matriz1[i][j] * matriz2[j][k];
            }
        }
    }

    for (i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            cout << "O produto da matriz quadrada na posicao " << i + 1 << ", " << j + 1 <<" e " << prod[i][j] << endl;
        }
    }

    return 0;
}
