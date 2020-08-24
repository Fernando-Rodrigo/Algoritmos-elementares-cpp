#include <iostream>

/**
 * Uma impressora tem a capacidade de imprimir 5 folhas por minuto. Conhecendo a quantidade de páginas de uma enciclopédia que
 * essa impressora deve imprimir, como calcular o tempo necessário para realizar a impressão? O tempo deve ser expresso em horas,
 * minutos e segundos (valores inteiros).
 */


using namespace std;

int main()
{
    int P, H, M, S;
    cout << "Digite o numero de paginas da enciclopedia: ";
    cin >> P;


    H = P / 300;
    M = (P % 300) / 5;
    S = ((P % 300) % 5) * 12;

    cout << "Horas: " << H << endl;
    cout << "Minutos: " << M << endl;
    cout << "Segundos: " << S << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
