#include <iostream>

/**
 * Dado o valor n inteiro maior do que zero, como obter o valor de n!?
 */


using namespace std;

int main()
{
    int n, nfat, k;

    nfat = 1;

    cout << "Entre o valor de n: ";
    cin >> n;

    for (k = 1; k <= n; k++){
        nfat *= k;
    }

    cout << "O fatorial e: " << nfat << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
