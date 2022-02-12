/*Conhecendo-se os valores de y que completam uma tabela e um valor específico de xf, como calcular o valor correspondente yf,
efetuando-se a interpolação linear, utilizando os dois pontos entre os quais se encontra o valor de xf?*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int q, i;
    float v[50], v1[50], a, b;

    cout << "Quantos números deseja entrar? ";
    cin >> q;
    for (i = 0; i < q; i++){
        cout << "Digite o " << i + 1 << " x: ";
        cin >> v[i];
        cout << "Digite o " << i + 1 << " y: ";
        cin >> v1[i];
    }

    /*Interpolação linear:
    Exemplo:
    x: 1 2 3 4 5
    y: 2 6 8 9 10

    Formulas para interpolação:
    6 = a*2 + b
    8 = a*3 + b

    -y0 = -a*x0 - b
    y1 = a*x1 + b

    y1 - y0 = a*(x1 -x0)

    a = (y1 - yo)/(x1 - x0)

    b = y - a*x

    Baseado nisso se cria a interpolação linear, resolvendo o sistema com as duas formulas acima.*/

    a = (v1[1] - v1[0])/(v[1] - v[0]);
    b = v1[0] - a*v[0];

    cout << "o valor de a e: " << a << endl;
    cout << "o valor de b e: " << b << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
