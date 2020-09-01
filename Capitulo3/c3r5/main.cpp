#include <iostream>
#include <cstdlib>

/**
 * Durante os 30 dias de junho foram anotadas quantidades diárias de ocorrências registradas numa delegacia. Conhecendo-se a
 * série de quantidades anotadas em ordem cronológica, como determinar o dia em que foi verificada a maior das quantidades
 * registradas? supor que não ocorra empates.
 */


using namespace std;

int main()
{
    int dia, dmax, qd, qmax;
    qmax = 0;
    for (dia = 1; dia <= 30; dia = dia + 1){
        cout << "Entre a quantidade do dia " << dia << ": ";
        cin >> qd;
        if (qd > qmax){
            qmax = qd;
            dmax = dia;
        }
    }

    cout << "Dia com maior numero de ocorrencias = " << dmax << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
