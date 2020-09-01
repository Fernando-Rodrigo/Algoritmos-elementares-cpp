#include <iostream>
#include <cstdlib>

/**
 * Conhesendo-se dois valores inteiros A e B, maiores do que zero, como obter o m.d.c.(A,B)? (máximo divisor comum)
 */


using namespace std;

int main()
{
    int a, b, r;

    cout << "Entre numero A: ";
    cin >> a;
    cout << "Entre numero B: ";
    cin >> b;

    r = a % b;

    while (r > 0){
        a = b;
        b = r;
        r = a % b;
    }

    cout << "MDC = " << b << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
