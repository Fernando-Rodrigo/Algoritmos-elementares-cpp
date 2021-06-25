/*A sequência de valores reais v1, v2, ..., v12 corresponde aos volumes de vendas mensais de uma loja durante o ano passado.
Considerando todos os períodos de três meses consecutivos (meses 1,2 e 3; meses 2, 3 e 4; ...) como determinar o melhor trimestre
de vendas dessa loja?

A resposta deverá ter o seguinte formato: melhor trimenstre iniciado no mês ##

Construir e utulizar a função MelhorTrim para determinar o número do mês de início do melhor trimestre de vendas.*/

#include <iostream>
#include <cstdlib>

using namespace std;

void MelhorTrim(int volumes[]);

int main()
{
    int i, volumes[12];

    for(i = 0; i < 12; i++)
    {
        cout << "Entre o valor do volume de vendas do mes " << i + 1 << ": ";
        cin >> volumes[i];
    }

    MelhorTrim(volumes);

    system("PAUSE");
    return EXIT_SUCCESS;
}

void MelhorTrim(int volumes[])
{
    int i, mes, melhor = 0;

    for(i = 0; i < 12; i++)
    {
        if (volumes[i] > mes)
            {
                mes = volumes[i];
                melhor = i + 1;
            }
    }

    cout << "Melhor trimestre iniciado no mes " << melhor << endl;
}
