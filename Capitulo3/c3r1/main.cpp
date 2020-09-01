#include <iostream>
#include <cstdlib>

/**
 * Conhecendo-se um valor binário positivo, como obter o valor decimal correspondente?
 */


using namespace std;

int main()
{
    int bin, dec, pot2, alg;
    cout << "Entre numero na base 2: ";
    cin >> bin;
    dec = 0;
    pot2 = 1;

    while (bin > 0){
        alg = bin % 10;
        dec = dec+ alg * pot2;
        pot2 = pot2 * 2;
        bin = bin / 10;
    }

    cout << "Numero na base 10 = "<< dec << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
