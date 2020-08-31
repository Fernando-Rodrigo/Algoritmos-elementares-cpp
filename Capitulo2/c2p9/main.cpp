#include <iostream>

/**
 * Uma determinada quantidade de parafusos deve ser embalada em caixas de 40 unidades e caixas de 10 unidades, de tal forma que
 * a quantidade de caixas grandes seja a mais próxima possível da quantidade de caixas pequenas - observe os exemplos descritos
 * a seguir. Conhecendo-se a quantidade de parafuso disponíveis, como obter a quantidade de caixas grandes, a quantidade de
 * caixas pequenas e também a quantidae de parafusos que não serão embalados por não completarem 1 caixa pequena?
 * Exemplos:
 * - para embalar 607 parafusos deve-se empregar: 12 caixas grandes e 12 caixas pequenas, havendo assim, uma sobra de 7 parafusos.
 * - para embalar 613 parafusos deve-se empregar: 12 caixas grandes e 13 caixas pequenas, havendo assim, uma sobra de 3 parafusos.
 * - para embalar 628 parafusos deve-se empregar: 12 caixas grandes e 14 caixas pequenas, havendo assim, uma sobra de 8 parafusos.
 * - para embalar 631 parafusos deve-se empregar: 13 caixas grandes e 11 caixas pequenas, havendo assim, uma sobra de 1 parafusos.
 * - para embalar 645 parafusos deve-se empregar: 13 caixas grandes e 12 caixas pequenas, havendo assim, uma sobra de 5 parafusos.
 */


using namespace std;

int main()
{
    int parafuso, caixag, caixap, sobra, auxiliar;

    cout << "Entre a quantidade de parafusos a serem embalados: ";
    cin >> parafuso;

    auxiliar = parafuso / 50;
    sobra = parafuso % 50;
    if (sobra < 10){
        caixag = auxiliar;
        caixap = auxiliar;
    }
    if (sobra >= 10 && sobra < 20){
        caixag = auxiliar;
        caixap = auxiliar + 1;
        sobra = sobra - 10;
    }
    if (sobra >= 20 && sobra < 30){
        caixag = auxiliar;
        caixap = auxiliar + 2;
        sobra = sobra - 20;
    }
    if (sobra >= 30 && sobra < 40){
        caixag = auxiliar + 1;
        caixap = auxiliar -1;
        sobra = sobra - 30;
    }
    if (sobra >= 40 && sobra < 50){
        caixag = auxiliar +1;
        caixap = auxiliar;
        sobra = sobra - 40;
    }

    cout << "O numero de caixas grandes e: " << caixag << endl;
    cout << "O numero de caixas pequenas e: " <<caixap <<endl;
    cout << "Sobraram " << sobra << " prafusos." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
