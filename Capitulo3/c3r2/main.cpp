#include <iostream>
#include <cstdlib>

/**
 * Dado um valor inteiro maior que 1, como obter o valor da soma S descrita abixo?
 *
 * S= 2/(1*3) + 2^2(3*5) + 2^3/(5*7)+...+ 2^n/((2n-1)*(2n+1)
 */


using namespace std;

int main()
{
    int n, k;
    float s, pot2, den;

    cout << "Entre a quantidade de termos da serie: ";
    cin >> n;

    s = 0;
    pot2 = 1;

    for (k = 1; k <= n; ++k){
        pot2 = pot2 * 2;
        den = (2 * k -1)*(2 * k + 1);
        s = s + pot2 / den;
    }

    cout << "Valor da soma = " << s << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
