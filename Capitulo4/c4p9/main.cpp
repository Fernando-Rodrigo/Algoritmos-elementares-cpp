/**
 * Dados três valores inteiros positivos X, Y e Z, como obter o m.d.c(X,Y,Z)?
 * Observação: uma propriedade aritmética qarante que
 *                  m.d.c(X,Y,Z)=m.d.c(m.d.c(X,Y),Z).
 * Reutilizar a função MDC construída no problema resolvido 3.
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int mdc(int x, int y);
int mdc1(int m, int z);

int main()
{
    int x, y, z, m, md;

    cout << "Entre o valor de x: ";
    cin >> x;
    cout << "Entre o valor de y: ";
    cin >> y;
    cout << "Entre o valor de z: ";
    cin >> z;

    m = mdc(x, y);
    md = mdc1(m, z);

    cout << "O valor de m.d.c dos numeros digitados e: " << md << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

int mdc(int x, int y)
{
    int r;

    r = x % y;

    while (r > 0)
    {
        x = y;
        y = r;
        r = x % y;
    }

    return (y);
}

int mdc1(int m, int z)
{
    int r1;

    r1 = m % z;

    while (r1 > 0)
    {
        m = z;
        z = r1;
        r1 = m % z;
    }

    return (z);
}
