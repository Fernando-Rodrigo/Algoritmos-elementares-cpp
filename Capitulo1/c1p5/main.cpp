#include <iostream>
#include <cstdlib>
#include <cmath>

/**
 *     Uma determinada quantidade de parafusos deve ser embalada em caizas de 40 unidades e caixas de 10 unidades, utilizando
 * preferencialmente caixas grandes. Conhecedo-se a quantidade de parafusos disponiveis, como obter a quantidade de caixas
 * grandes, a quantidade de caixas pequenas e tambem a quantidade de parafusos que não serão embalados por não completarem uma
 * caixa pequena?
 */


using namespace std;

int main()
{
    int p, pr, c40, c10, R;
    cout<< "Digite a quantidade de parafusos a serem embalados: ";
    cin>>p;

    c40 = round(p/40);
    R = p%40;
    c10 = R/10;
    pr = R%10;

    cout<< "A quantidade de caixas com 40 parafusos e: "<<c40<<endl;
    cout<< "A quantidade de caixas com 10 parafusos e: "<<c10<<endl;
    cout<< "A quantidade de parafusos que sobraram foi de: "<<pr<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
