#include <iostream>

/**
 * Dados três valores inteiros: um número N e outros dois números a e b (a<b), correspondentes a uma faixa de valores ou intervalo
 * ([a,b]), como determinar os múltiplos de N entre a e b?
 */


using namespace std;

int main()
{
    int N, a, b, m, i;

    cout << "Entre o valor de N: ";
    cin >> N;
    cout << "Entre o valor de a: ";
    cin >> a;
    cout << "Entre o valor de b: ";
    cin >>b;

    for (i=a; i<=b; i++){
        m = N*i;
        cout << "O multiplo de " << N << " multiplicado por " << i << " e " << m << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
