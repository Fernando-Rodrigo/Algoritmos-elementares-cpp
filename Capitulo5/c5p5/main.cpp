/*Conhecendo-se os valores de y que completam uma tabela e um valor específico de xf, como calcular o valor correspondente yf,
efetuando-se a interpolação linear, utilizando os dois pontos entre os quais se encontra o valor de xf?*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int q, i;
    float v[50], v1[50], a, b;

    cout << "Quantos numeros deseja entrar? ";
    cin >> q;
    for (i = 0; i < q; i++){
        cout << "Digite o " << i + 1 << " x: ";
        cin >> v[i];
        cout << "Digite o " << i + 1 << " y: ";
        cin >> v1[i];
    }

    a = (v1[1] - v1[0])/(v[1] - v[0]);
    b = v1[0] - a*v[0];

    cout << "o valor de a e: " << a << endl;
    cout << "o valor de b e: " << b << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
