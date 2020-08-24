#include <iostream>
#include <cstdlib>
#include <cmath>

/**
 * Dados as coordenandas de dois pontos no plano cartesiano (xa,ya) e (xb,yb), como obter o comprimento da circunferência
 * que tem como diâmetro o segmento com extremidades nesses dois pontos?
 *
 */


using namespace std;

int main()
{
    int xa, xb, ya, yb, c1, c2, h1;
    float r, c;

    cout<< "Entre com o valor de Xa: ";
    cin>> xa;
    cout<< "Entre com o valor de Ya: ";
    cin>>ya;
    cout<< "Entre com o valor de Xb: ";
    cin>> xb;
    cout<< "Entre com o valor de Yb: ";
    cin>>yb;

    c1 = xb-xa;
    c2 = yb-ya;
    h1 = pow(c1, 2) + pow(c2, 2);
    r = sqrt(h1);

    c = 2*3.1415*r;

    cout<< "A circuferencia e: "<<c<<endl;

    system("PAUSE");
    return  EXIT_SUCCESS;
}
