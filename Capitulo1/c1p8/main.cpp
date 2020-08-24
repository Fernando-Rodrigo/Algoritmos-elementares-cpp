#include <iostream>

/**
 * Um movel desloca-se em trajetoria retilinea de um ponto A até outro ponto B. Conhecendo-se a distânci percorrida em metros
 * e o tempo gasto no referido movimento, expresso em horas, minutos e segundos, como determinar a velocidade média do móvel?
 *
 */


using namespace std;

int main()
{
    float D, H, M, S, V;

    cout << "Qual e a distancia em metros percorrido pelo movel? ";
    cin >> D;
    cout << "Quantas horas levou para percorrer a distancia? ";
    cin >> H;
    cout << "Qantos minutos levou para percorrer a distancia? ";
    cin >> M;
    cout << "quantos segundos levou para percorrer a distancia? ";
    cin >> S;

    S = S + H * 3600;
    S = S + M * 60;

    V = D / S;

    cout << "A velocidade do movel e: " << V << " m/s" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
