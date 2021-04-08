#include <iostream>
#include <math.h>

/**
 * Como calcular a área e o perímetro de um triângulo ABC, a partir da entrada das coordenadas dos vértices em um plano cartesiano?
 * Construir e utilizar a função Dist que recebera as coordenadas de dois pontos e devolvera a distância entre eles.
 */


using namespace std;

float Dist(float &AB, float &BC, float &CA, int &xa, int &ya, int &xb, int &yb, int &xc, int &yc)
{
    AB = sqrt(pow((xb - xa),2) + pow((yb - ya),2));
    BC = sqrt(pow((xc - xb),2) + pow((yc - yb),2));
    CA = sqrt(pow((xa - xc),2) + pow((ya - yc),2));

    return 0;
}

int main()
{
    int xa, ya, xb, yb, xc, yc, p;
    float AB = 0, BC = 0, CA = 0, h = 0, area, s;

    cout << "Entre o valor de x do ponto A: ";
    cin >> xa;
    cout << "Entre o valor de y do ponto A: ";
    cin >> ya;
    cout << "Entre o valor de x do ponto B: ";
    cin >> xb;
    cout << "Entre o valor de y do ponto B: ";
    cin >> yb;
    cout << "Entre o valor de x do ponto C: ";
    cin >> xc;
    cout << "Entre o valor de y do ponto C: ";
    cin >> yc;

    Dist(AB, BC, CA, xa, ya, xb, yb, xc, yc);

    p = AB + BC + CA;

    if (AB == BC && BC == CA && CA == AB){
        h = sqrt(pow((AB/2),2) + pow(BC, 2));
        area = (AB * h) / 2;
    }
    else{
        s = p / 2;
        area = sqrt(s * (s - AB)* (s - BC) * (s - CA));
    }

    cout << "O perimetro do triangulo e: " << p << endl;
    cout << "A area do triangulo e: " << area << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
