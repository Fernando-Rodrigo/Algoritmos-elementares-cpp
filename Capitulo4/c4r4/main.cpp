#include <iostream>
#include <cstdlib>

using namespace std;

int DC(int num)
{
    int s, k, r;
    do
    {
        s = 0;
        k = 1;
        do
        {
            r = num % 10;
            s = s + k * r;
            num = num / 10;
            k++;
        }
        while (num > 0);
        num = s;
    }
    while (num >= 10);
    return s;
}

int main()
{
    int n, d;

    cout << "Entre o numero da conta: ";
    cin >> n;
    cout << "Entre o digito de controle: ";
    cin >> d;

    cout << "Digito calculado = " << DC(n) << endl;

    if (d == DC(n)) cout << "DIGITO CORRETO\n";
    else cout << "DIGITO INCORRETO\n";


    system("PAUSE");
    return EXIT_SUCCESS;
}
