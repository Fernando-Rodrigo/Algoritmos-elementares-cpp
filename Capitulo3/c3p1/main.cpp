#include <iostream>

/**
 * Foram anotadas as medidas dos diâmetros de várias peças produzidas em um torno. Como obter o valor médio dessas medidas? Não é
 * conhecida previamente a quantidade de peças observdas. SUpor que após a digitação da medida da última peça observada será
 * digitado o valor zero (o zero indica fim da entrada de dados).
 */


using namespace std;

int main()
{
    float diametro, media, cont, soma;

    cont = 0;
    soma = 0;

    while (diametro != 0){
        cout << "Entre o valor do diametro: ";
        cin >> diametro;
        soma = soma + diametro;
        cont = cont + 1;
    }

    media = soma / (cont - 1);

    cout << "A media das medidas e: " << media << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
