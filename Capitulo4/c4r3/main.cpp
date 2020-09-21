#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int fracdec(float nr, int &num, int &den)
{
    float temp, n;
    den = 1;

    temp = modf(nr, &n);

    while (temp != 0)
    {
        den = den * 10;
        nr = 10 * nr;
        temp = modf(nr, &n);
    }
    num = n;
    return 0;
}

int mdc(int a, int b)
{
    int r;
    r = a % b;
    while (r > 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return (b);
}

int simplificar(int &num, int &den)
{
    int md;
    md = mdc (num, den);
    num = num / md;
    den = den / md;
    return 0;
}

int main()
{
    float numr;
    int n, d;

    cout << "Entre numero racional: ";
    cin >> numr;

    fracdec(numr, n, d);

    cout << "numerador = " << n << endl;
    cout << "denominador = " << d << endl;

    simplificar(n, d);

    cout << "numerador simplificado = " << n << endl;
    cout << "denominador simplificado = " << d << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
