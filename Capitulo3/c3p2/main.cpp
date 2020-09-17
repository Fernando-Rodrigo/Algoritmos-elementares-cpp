#include <iostream>

/**
 * Um produto é embalado colocando-se aproximadamente 60 unidades em cada caixa. Um órgão de defesa do consumidor analisa um lote
 * com várias caixas. Se pelo menos 98% das caixas inspecionadas apresentarem quantidade efetivva maior do que 58 unidades, o lote
 * é aprovado, caso contrário (porcentagem menor do que 98%) o lote é rejeitado. Conhecendo-se as quantidades efetivas das várias
 * caixas inspecionadas, como determinar se o lote deve ser aprovado ou rejeitado? A "saída" deverá ser uma das mensagens: lote
 * aprovado ou lote rejeitado
 *
 * Não é conhecida previamente a quantidade de caixas inspecionadas. Supor que após o último valor anotado será digitado o
 * valor zero (o zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    int unidades, caixasmenos, caixasmais;
    float porcentagem;

    caixasmais = 0;
    caixasmenos = 0;

    while (unidades != 0){
        cout << "Entre o valor de unidades por caixa: ";
        cin >> unidades;
        if (unidades >= 58){
            caixasmais = caixasmais + 1;
        }
        if ((unidades < 58)){
            caixasmenos = caixasmenos + 1;
        }
    }

    porcentagem = caixasmais / caixasmenos;

    if (porcentagem >= 0.98) cout << "Lote aprovado" << endl;
    else cout << "Lote rejeitado" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
