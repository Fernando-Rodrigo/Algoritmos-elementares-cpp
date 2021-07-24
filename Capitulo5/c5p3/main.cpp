/*Conhecendo-se o valor inteiro n (maior que 1) e os valores das sequências x1, x2, ..., xn e p1, p2, ..., pn, como obter a média
ponderada dos valores da primeira seguência com pesos iguais aos valores da segunda sequência?
valor da média ponderada: mp = (x1p1 + x2p2 + ... xnpn)/ (p1+p2+...pn)*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 0;
    int x[n], p[n], xs = 0, ps = 0;
    float mp = 0;

    cout << "Qual e o tamanho da sequencia? ";
    cin >> n;

    if (n == 1){
       cout << "Nao existe media." << endl;
       cout << "Escolha a opcao de 2 ou mais numeros." << endl;
    }
    else if (n > 1){
        for(int i = 0; i < n; i++){
            cout << "Digite o valor de x: ";
            cin >> x[i];
            cout << "Digigte o valor de p: ";
            cin >> p[i];
            xs = xs + (x[i] * p[i]);
            ps = ps + p[i];
            mp = xs / ps;
        }
        cout << "A media ponderada dos numeros digitados e: " << mp << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
