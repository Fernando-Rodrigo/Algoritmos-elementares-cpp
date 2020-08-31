#include <iostream>
#include <cstdlib>
#include <iomanip>

/**
 * A prefeitura de uma cidade calcula a base das tarifas de fornecimento de água de acordo com as faixas de consumo:
 *  até 20m3      R$1,60 por m3,
 *  de 21 a 50m3  R$2,90 por m3,
 *  acima de 50m3 R$4,20 por m3.
 *  Sobre o valor base, calculado de acordo com as faixas de consumo, a prefeitura concede um desconto de 5% se o valor base
 *  for no máximo igual a R$100,00, ou aplica uma sobretaxa de 10% sobre a parcela do valor base que superar R$100,00.
 *  Conhecido o consumo de água de uma residência (quantidade inteira de metros cúbicos), como calcular ovalor da conta correspondente?
 */


using namespace std;

int main()
{
    float C, Base, Conta;

    cout << "Entre consumo: ";
    cin >> C;

    if ((C>=0)&&(C<=20)) Base = C*1.6;
    if ((C>=21)&&(C<=50))Base = 32.0 + (C - 20) * 2.9; //32.0 = 20 * 1.60
    if (C>50) Base = 119.0 + (C-50) *4.20; // 119.0 = 20 * 1.6 + 30 * 2.9
    if (Base <= 100) Conta = Base * 0.95;
    else Conta = 100 + (Base - 100) * 1.10;

    cout << "Valor da tarifa = R$ " << fixed << setprecision(2) << Conta << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
