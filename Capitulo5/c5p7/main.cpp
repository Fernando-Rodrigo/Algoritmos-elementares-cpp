/*Uma conhecida sequência de 12 valores reais corresponde aos volumes de vendas mensais de uma loja durante o ano passado.
Como obter as porcentagens de cada volume mensal em relação ao total do ano?
A estrutura de dados que será utilizada deve ter 12 componentes de tipo registro e cada um desses registros deve ter os
seguintes campos:
-Vol - com o volume de vendas do mês (tipo real),
-Porc - com a porcentagem do mês.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float Vol[12], Porc[12], soma = 0;
    int i;

    for(i = 0; i < 12; i++){
        cout << "Entre o valor do volume de vendas do mes " << i + 1 << ": R$";
        cin >> Vol[i];
        soma = soma + Vol[i];
    }

    for (i = 0; i < 12; i++){
        Porc[i] = Vol[i] / soma;
        cout << "A porcentagem de vendas do mes " << i + 1 << " e: R$" << Porc[i] * 100 << "%" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
