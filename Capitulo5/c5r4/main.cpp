/*Um grupo de ecologistas mantém em observação as reservas florestais do planeta. Devido a problemas diplomáticos nem sempre é
possível um contato direto, assim grande parte desta observação é feita por satélite. Como calcular a área aproximada de
desmatamanto a partir de uma foto via satélite?

Observações:

A região deve ser "simplificada" considerando-a como um polígono, onde são conhecidas as coordenadas dos vértices desse polígono.
Os vértices devem ser enumerados no sentido horário.

Utilizar a seguinte expressão para o cálculo da área:
Área = [(x1+x2)'(y1-y2)+(x2+x3)'(y2-y3)+...+(xn+x1)'(yn-y1)]/2
Essa expressão corresponde a uma composição (adições/subtrações) de áreas de vários trapézios.
Área do trapézio: A=(base maior+base menor)x altura/2*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float x[5], y[50], soma;
    int qv, i;

    cout << "Entre a quantidade de vertices do poligono: ";
    cin >> qv;

    cout << "Entre as coordenadas x, y separados por espaco." << endl;

    for (i = 0; i < qv; i++)
    {
        cout << "Entre o vertice " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    soma = 0;

    for (i = 0; i < qv - 1; i++)
        soma = soma + (x[i] + x[i+1]) * (y[i] - y[i+1]);
    soma = soma + (x[qv - 1] + x[0]) * (y[qv - 1] - y[0]);
    soma = soma / 2;

    cout << "Area do poligono: " << soma << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
