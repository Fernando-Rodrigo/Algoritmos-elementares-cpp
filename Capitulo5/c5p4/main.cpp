/*Reescrever o programa construído no Problema Resolvido 4 adotando como estrutura de dados, um único vetor com componentes de
tipo registro com os campos correspondentes às coordenadas de um vértice.*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    float v[5][1], soma = 0;
    int qv, i;

    cout << "Entre a quantidade de vertices do poligono: ";
    cin >> qv;

    for(i=0; i<qv; i++){
        cout << "Entre o vertice " << i + 1 << " x: ";
        cin >> v[i][0];
        cout << "Entre o vertice " << i + 1 << " y: ";
        cin >> v[i][1];
    }

    for (i = 0; i < qv - 1; i++)
        soma = soma + (v[i][0] + v[i+1][0]) * (v[i][1] - v[i+1][1]);
    soma = soma + (v[qv - 1][0] + v[0][0]) * (v[qv - 1][1] - v[0][1]);
    soma = soma / 2;

    cout << "Area do poligono: " << soma << endl;

    system ("PAUSE");
    return EXIT_SUCCESS;
}
