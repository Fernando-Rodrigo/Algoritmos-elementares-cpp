#include <iostream>
#include <iomanip>
#include <cstdlib>

/**
 * Um policial rodoviário anota em sua ficha, a cada multa aplicada por excesso de velocidade, a velocidade autuada. Conhecendo-se
 *  série de valores anotados num dia, como obter a porcentagem de valores registrados maiores do que 140?
 *
 * Não é conhecida previamente a quantidade de multas aplicadas. Supor que após a último valor anotado sré digitado o valor zero
 * (o zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    int multa, n;
    float  soma, p;

    n=0;
    soma=0;

     while(multa != 0){
        cout << "Entre o valor da multa: ";
        cin >> multa;
        if (multa > 140){
            soma = soma + 1;
        }
        n = n + 1;
    }

    p=(soma / (n - 1)) * 100;

    cout << "A porcentagem de multas que excederam 140 foi: " << fixed << setprecision(2) << p << "%." <<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
