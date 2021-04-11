/*Conhecendo-se uma sequência de 10 valores correspondentes aos preços de um produto em 10 lojas varejistas, como determinar
em quantas das lojas o preço do produto é superiosr ao preço  médio dessas 10 lojas? */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float prec[10], soma, pm;
    int i, q;

    soma = 0;
    q = 0;

    for (i = 0; i < 10; i++)
    {
        cout << "Entre o preco da loja " << i + 1 << ": ";
        cin >> prec[i];
        soma = soma + prec[i];
    }

    pm = soma / 10;

    for (i = 0; i < 10; i++)
        if (prec[i] > pm) q++;

    cout << "Media = " << pm << endl;
    cout << "Quant de lojas com precos acima da media = " << q << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
