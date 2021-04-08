/**
 * Dados quatro valores reais X, Y, Z e W como exibi-los em ordem crescente?
 * Reutilizar (não modificar) a função ordcres construída no Problema resolvido 1. Essa função deverá ser acionada 3 vezes.
 */


#include <cstdlib>
#include <iostream>

using namespace std;

float ordcres(float &a, float &b, float &c);

int main()
{
    float x, y, z, w;

    cout << "Entre o valor de x: ";
    cin >> x;
    cout << "Entre o valor de y: ";
    cin >> y;
    cout << "Entre o valor de z: ";
    cin >> z;
    cout << "Entre o valor de w: ";
    cin >> w;

    ordcres(z, w, x);
    ordcres(x, y, z);
    ordcres(y, z, w);

    cout << "Os numeros digitados em ordem crescente sao: " << x << ", " << y << ", " << z << " e " << w << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

float ordcres(float &a, float &b, float &c)
{
    float temp;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}
