#include <iostream>
#include <cstdlib>

/**
 * Dadas as coordenadas de dois pontos no plano cartesiano (Xa, Ya) e (Xb, Yb), como obter a área do retângulo cujos
 * os lados são paralelos aos eixos do sistema de coordenadas e que tem uma das diagonais com extremidades nos pontos
 * (Xa, Ya) e (Xb, Yb)?
 */


using namespace std;

int main()
{
    int xa, xb, ya, yb, c1, c2, a;

    cout<< "Entre com o valor de Xa: ";
    cin>>xa;
    cout<< "Entre com o valor de Ya: ";
    cin>>ya;
    cout<< "Entre com o valor de Xb: ";
    cin>>xb;
    cout<< "Entre com o valor de Yb: ";
    cin>>yb;

    c1 = xb - xa;
    c2 = yb - ya;
    a = c1 * c2;

    cout<< "A area do retangulo formado pelas coordenadas e: "<<a<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
