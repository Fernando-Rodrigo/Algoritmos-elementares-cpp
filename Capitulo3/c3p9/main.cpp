#include <iostream>
#include <cmath>

/**
 * Como imprimir na tela uma tabela apresentando um ângulo (0°, 1°, 2°,.., 90°) e o seu respectivo valor de seno?
 */


using namespace std;

int main()
{
    int i;
    float angulo, radiano;

    for (i = 0; i <= 90; i++){
        radiano = i * (3.14159/180.0);
        angulo = sin(radiano);
        cout << "O seno do angulo " << i << " e " << angulo << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
