/*Reescrever o programa constru�do no Problema Resolvido 4 adotando como estrutura de dados, um �nico vetor com componentes de
tipo registro com os campos correspondentes �s coordenadas de um v�rtice.*/

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct{
    float x;
    float y;
} Ccoord;

int main()
{
    float soma;
    int qv, i;

    Ccoord coord[50];

    cout << "Entre a quantidade de vertices do poligono: ";
    cin >> qv;

    for(i = 0; i < qv; i++){
        cout << "Entre o vertice " << i + 1 << " x: ";
        cin >> coord[i].x;
        cout << "Entre o vertice " << i + 1 << " y: ";
        cin >> coord[i].y;
    }

    soma=0;
    for (i=0; i<qv-1; i=i+1)
        soma=soma+(coord[i].x + coord[i + 1].x)*(coord[i].y - coord[i + 1].y);
    soma=soma+(coord[qv - 1].x + coord[0].x)*(coord[qv-1].y - coord[0].y);
    soma=soma/2;

    cout << "Area do poligono: " << soma << endl;

    system ("PAUSE");
    return EXIT_SUCCESS;
}
