#include <iostream>

/**
 * Numa fazenda há uma área disponível que dever ser dividida entre os cultivos de feijão e soja. A produção de feijão é,
 * em media, de 32,8 sacas por hectare e a de soja de 43,6 sacas por hectare.
 * Conhecendo-se a área disponivel (em hectare)como determinar a área a ser ocupada pelo cultivo da soja e também a área
 * destinada ao cultivo de feijão, sabendo-se que o produtor deseja ocupar toda a área disponível e pretende obter volumes iguais
 * de produçõ de soja e feijão?
 */


using namespace std;

int main()
{
    float A, F, S, M;
    cout << "Qual e a area disponivel para a plantcao: ";
    cin >> A;

    M = A / 2;
    S = M * (32.8 / 43.6);
    F = A - S;

    cout << "A area destinada a plantacao de feijao e " << F << endl;
    cout << "A area destinada a plantacao de soja e " << S << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
