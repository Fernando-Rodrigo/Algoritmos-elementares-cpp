/*É conhecida uma lista de 20 produtos, que contêm o nome, o preço e a quantidadse disponível de cada um deles. Como obter a
lista desses daddos, com os nomes dispostos em ordem alfabética?

Cosntruir e utilizar três procedimentos:
LerProd para a leitura (teclado) dos componentes da lista de produtos,
OrdenProd para dispor em ordem alfabética de nomes a lista de produtos e
ExibProd para exibir a lista já ordenada.*/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct
{
    char Nome[20];
    float Preco;
    int Quant;
} Tprod;

void LerProd(Tprod P[])
{
    int a;
    for (a = 0; a < 20; a++)
    {
        cout << "Entre nome: "; cin >> P[a].Nome;
        cout << "Entre preco: "; cin >> P[a].Preco;
        cout << "Entre quantidade: "; cin >> P[a].Quant;
    }
}

void OrdenProd(Tprod P[])
{
    int a, b;
    Tprod temp;
    for  (a = 0; a < 19; a++)
    {
        for (b = a + 1; b < 20; b++)
        {
            if ( strcmp(P[a].Nome, P[b].Nome) > 0)
            {
                temp = P[a];
                P[a] = P[b];
                P[b] = temp;
            }
        }
    }
}

void ExibProd(Tprod P[])
{
    int a;
    cout << "Noma\tPreco\tQantid\n";
    for (a = 0; a < 20; a++)
    {
        cout << P[a].Nome << "\t" << P[a].Preco << "\t" << P[a].Quant << "\n";
    }
}

int main()
{
    Tprod Prod[20];
    char NN[] = "FIM DO PROCESSAMENTO\n";

    LerProd(Prod);
    OrdenProd(Prod);
    ExibProd(Prod);

    cout << NN;

    system("PAUSE");
    return EXIT_SUCCESS;
}
