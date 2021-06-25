/*Uma empresa aérea mantêm, para uma de suas linhas, uma lista de espera. As operações sore esta lista de espera são:
    inclusão de um novo passageiro no final da lista,
    retirada de um passageir(do início da lista) para embarque,
    retirada de um passageiro desistente, de qualquer posição da lista,
    listagem (na tela) de todos os passageiros da lista de espera.

Para cada passageiro registrado na lista são mantidas as informações:
    código do bilhete (valor inteiro) e
    nome do passageiro (cadeia com até 30 caracteres).
Supondo que o tamanho máximo da lista de espera seja de 60 passageiros, construir um programa que permita executar as operações
descritas acima.

Você deverá estabelecer a estrutura principal de informações e também os módulos auxiliares (funções) do aplicativo.*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct Lpassageiro
{
    char Nome[30];
    int codigo;
};

Lpassageiro *Passageiro = new Lpassageiro[5];

void NovoPassageiro(Lpassageiro *p);
void PassageiroEmbarque(Lpassageiro *p);
void PassageiroDesistente(Lpassageiro *p);
void ExibeLista(Lpassageiro *p);

int main()
{
    int opcao;

    /*NovoPassageiro(Passageiro);
    PassageiroEmbarque(Passageiro);
    ExibeLista(Passageiro);*/

    do{
    cout << "Selecione uma opcao abaixo para a lista de passageiro: " << endl;
    cout << "1 - Adicionar novo passageiro na lista de espera" << endl;
    cout << "2 - Selecionar a quantidade de passageiros que embarcaram" << endl;
    cout << "3 - Selecionar o passageiro desistente" << endl;
    cout << "4 - Exibir a lista de passageiros" << endl;
    cout << "5 - Sair do programa" << endl;
    cout << "Qual a opcao desejada? ";
    cin >> opcao;
        switch(opcao){
case 1:
    NovoPassageiro(Passageiro);
    break;
case 2:
    PassageiroEmbarque(Passageiro);
    break;
case 3:
    PassageiroDesistente(Passageiro);
    break;
case 4:
    ExibeLista(Passageiro);
    break;
    }
    }while(opcao != 5);

    system("PAUSE");
    return EXIT_SUCCESS;
}

void NovoPassageiro(Lpassageiro *p)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Entre o nome do passageiro: ";
        cin >> Passageiro[i].Nome;
        cout << "Entre o codigo do passageiro: ";
        cin >> Passageiro[i].codigo;
    }
}

void PassageiroEmbarque(Lpassageiro *p)
{
    int embarque, j = 0;

    cout << "Quantos passageiros embracaram? ";
    cin >> embarque;

    if(embarque > 0)
    {
        while (j < embarque)
        {
            for (int i = 0; i < 5; i++)
            {
                *Passageiro[i].Nome = *Passageiro[i + 1].Nome;
                Passageiro[i].codigo = Passageiro[i + 1].codigo;
            }
            j++;
        }
    }
}

void PassageiroDesistente(Lpassageiro *p)
{
    char nome;
    int posicao;

    cout << "Qual o nome do passageiro desistente? ";
    cin >> nome;

    for (int i = 0; i < 5; i++)
    {
        if (*Passageiro[i].Nome == nome)
        {
            posicao = i;
        }
    }

    if(posicao > 0)
    {
        for (int i = posicao; i < 5; i++)
        {
            *Passageiro[i].Nome = *Passageiro[i + 1].Nome;
            Passageiro[i].codigo = Passageiro[i + 1].codigo;
        }
        cout << "O passageiro " << nome << "foi excluido da lista.";
    }
    else cout << "O passageiro nao foi encontrado na lista!!!";
}

void ExibeLista(Lpassageiro *p)
{
    cout << "Nome do passageiro \tCodigo do passageiro\n";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i].Nome << "\t" << p[i].codigo << "\n";
    }
}
