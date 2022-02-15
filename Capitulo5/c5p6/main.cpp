/*Como elaborar uma lista ordenada a partir da entrada de duas listas ordenadas cujos registros possuem os seguintes campos:
código da peça, nome da peça e preço?
Construir e utilizar três funções:
- EntraLista - para a leitura (teclado) da quantidade de componentes e dos próprios componentes de cada lista parcial de
produtos,
- Intercala - para realizar a intercalação das listads parciais, definindo a lista final, com todas as peças.
- ExibLista - para exibir a lista final (intercalação das listas parciais)
Complemento:
- supor que cada lista parcial tenha no máximo 20 componentes;
- cada lista parcial deve possuir os componentes já classificados- ordem crescente de códigos.*/

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct{
    int CodigoPeca;
    char NomePeca[30];
    float PrecoPeca;
} Tlista;

typedef struct{
    int codigo;
    char nome[30];
} Nnome;

typedef struct{
    int codigo;
    float preco;
} Ppreco;

void EntraLista(Nnome Nome[], Ppreco Preco[], Tlista Lista[]);

void Intercala(Nnome Nome[], Ppreco Preco[], Tlista Lista[], int q);

void ExibeLista(Tlista Lista[], int q);

void OrdenaLista (Nnome Nome[], Ppreco Preco[], int q);

int main()
{
    Tlista Lista[20];
    Nnome Nome[20];
    Ppreco Preco[20];

    cout << "Cadastro de pecas, codigos de pecas e precos de pecas." << endl;
    cout << "Cadastro de no maximo 20 itens." << endl;

    EntraLista(Nome, Preco, Lista);

    system("PAUSE");
    return EXIT_SUCCESS;
}

void EntraLista(Nnome Nome[], Ppreco Preco[], Tlista Lista[]){
    int i, q;
    cout << "Entre quantos produtos pretende cadastrar: ";
    cin >> q;

    if (q <= 20){
        for (i = 0; i < q; i++){
        cout << "Entre o codigo da peca: ";
        cin >> Nome[i].codigo;

        cout << "Entre o nome da peca: ";
        cin >> Nome[i].nome;

        cout << "Entre o codigo da peca: ";
        cin >> Preco[i].codigo;

        cout << "Entre o preco da peca: R$";
        cin >> Preco[i].preco;
    }

    OrdenaLista(Nome, Preco, q);
    Intercala(Nome, Preco, Lista, q);
    }
    else{
        cout << "Deve ser cadastrado no maximo 20 pecas" << endl;
    }
}

void Intercala(Nnome Nome[], Ppreco Preco[], Tlista Lista[], int q){
    int i, j;

    for(i = 0; i < q; i++){
        if (Nome[i].codigo == Preco[i].codigo){
            Lista[i].CodigoPeca = Nome[i].codigo;
            for (j = 0; j < 30; j++){
                Lista[i].NomePeca[j] = Nome[i].nome[j];
            }
            Lista[i].PrecoPeca = Preco[i].preco;
        }
        else{
            cout << "Os codigos sao diferentes!!!" << endl;
        }
    }

    ExibeLista(Lista, q);
}

void ExibeLista(Tlista Lista[], int q){
    int i;

    for (i = 0; i < q; i++){
        cout << "Codigo da peca: " << Lista[i].CodigoPeca << endl;
        cout << "Nome da peca: " << Lista[i].NomePeca << endl;
        cout << "Preco da peca: R$" << Lista[i].PrecoPeca << endl;
    }
}

void OrdenaLista(Nnome Nome[], Ppreco Preco[], int q){
    int i, j;
    Nnome temp;
    Ppreco temp1;

    for(i = 0; i < q - 1; i++){
        for(j = i + 1; j < q; j++){
            if(Nome[i].codigo > Nome[j].codigo){
                temp = Nome[i];
                Nome[i] = Nome[j];
                Nome[j] = temp;
            }

            if(Preco[i].codigo > Preco[j].codigo){
                temp1 = Preco[i];
                Preco[i] = Preco[j];
                Preco[j] = temp1;
            }
        }
    }
}
