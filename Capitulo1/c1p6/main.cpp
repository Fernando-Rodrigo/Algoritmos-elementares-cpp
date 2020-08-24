#include <iostream>
#include <cstdlib>

/**
 * Uma barra rigida de comprimento C, apoiada em um unico ponto, tera aplicada em suas extremidades duas forças com intensidades
 * F1 e F2, conforme indicado na figura abaixo. Conhecendo-se C, F1 e F2, como determinar as medidas C1 e C2, para que o sistema fique
 * em equilibrio?
 */


using namespace std;

int main()
{
    float F1, F2, C, P, C1, C2;
    cout << "Digite o valor da maior forca: ";
    cin >> F1;
    cout << "Digite o valor da menor forca: ";
    cin >> F2;
    cout << "Digite o valor do comprimento da barra: ";
    cin >> C;

    P = F2 / F1;
    C1 = C * P;
    C2 = C - C1;

    cout << "O ponto de apoio para a barra ficar em equilibrio deve estar a " << C1 << "\nda maior forca e a " << C2 << " da menor forca." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
