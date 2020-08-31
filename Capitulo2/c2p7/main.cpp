#include <iostream>

/**
 * Uma loja de departamentos oferece as seguintes condições de pagamento durante uma promoção de liquidação:
 *  - o preço à vista parcelado em 5 vezes iguais ou
 *  - desconto de 4% sobre o preço à vista para pagamento em 4 parcelas iguais ou
 *  - desconto de 9% sobre o preço à vista para pagamento em 3 parcelas iguais ou
 *  - desconto de 15% sobre o preço à vista para pagamentos em 2 parcelas iguais ou
 *  - desconto de 20% sobre o preço à vista para pagamento em 1 parcela.
 * Conhecido o valor do preço à vista e a quantidade de parcelas de pagamento escolhida pelo cliente, como calcular o valor
 * de cada parcela?
 */


using namespace std;

int main()
{
    char parcela;
    float preco, total;

    cout << "Qual o preco do produto? ";
    cin >> preco;
    cout << "Em quntas parcelas pretende pagar? (1 a 5 vezes) ";
    cin >> parcela;

    switch(parcela){
    case '1':
        total = preco - (preco*0.2);
        cout << "O valor a ser pago e: " << total << endl;
        break;
    case '2':
        total = preco - (preco*0.15);
        cout << "O valor a ser pago e: " << total << endl;
        break;
    case '3':
        total = preco - (preco*0.09);
        cout << "O valor a ser pago e: " << total << endl;
        break;
    case '4':
        total = preco - (preco*0.04);
        cout << "O preco a ser pago e: " << total << endl;
        break;
    case '5':
        cout << "O valor a ser pago e: " << preco << endl;
    default: cout << "Preencha os campos corretamnete!!" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
