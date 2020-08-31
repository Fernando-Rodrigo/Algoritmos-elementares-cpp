#include <iostream>

/**
 *  Conhecendo-se os valores correspondentes a dia, mês e ano de uma data, como determinar a quantidade de dias trancorridos,
 *  ou a transcorrer, dessa data até o final do mês dessa mesma data?
 *  Observação: um ano é bissexto se for múltiplo de 4 mas não de 100, ou se for multiplo de 400.
 */


using namespace std;

int main()
{
    int dia, mes, ano, diasr;

    cout << "Entre o dia: ";
    cin >> dia;
    cout << "Entre o mes: ";
    cin >> mes;
    cout << "Entre o ano: ";
    cin >> ano;

    if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 ){
        if (mes == 2){
            diasr = 29 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
        else if ((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12)){
            diasr = 31 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
        else{
            diasr = 30 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
    }
    else{
        if (mes == 2){
            diasr = 28 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
        else if ((mes == 1)||(mes == 3)||(mes == 5)||(mes == 7)||(mes == 8)||(mes == 10)||(mes == 12)){
            diasr = 31 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
        else{
            diasr = 30 - dia;
            cout << "Faltam " << diasr << " para o fim do mes." << endl;
        }
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
