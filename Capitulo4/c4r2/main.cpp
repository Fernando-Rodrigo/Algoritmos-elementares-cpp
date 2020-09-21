#include <iostream>
#include <cstdlib>

using namespace std;

int somadiv(int a)
{
    int s, d;
    s = 0;
    for (d = 1; d <= a / 2; ++d)
        if ((a % d) == 0) s = s + d;
    return (s);
}

int main()
{
    int num, soma;
    cout << "Entre o numero: ";
    cin >> num;

    soma = somadiv(num);

    if (soma == num) cout << "Numero perfeito \n";
    else if (soma > num) cout << "Numero abundante \n";
    else cout << "Numero deficiente \n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
