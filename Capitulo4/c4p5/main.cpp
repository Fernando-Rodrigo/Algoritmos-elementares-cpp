/**
 * Conhecendo-se os valres correspondentes a dia, mês e ano de uma data, como determinar a quantidade de dias transcorridos, ou
 * a transcorrer, dessa data até o final do mês dessa mesma data?
 * Observação: um ano é bissexto se for múltiplo de 4 mas não de 100, ou se for múltiplo de 400.
 * Construir e utilizar a função DiasNoMes que tenha como parâmetros de entrada dois valores inteiros, correspondentes ao mês e
 * ano de uma date e como saída a quantidade de dias desse mês.
 */


#include <iostream>
#include <cstdlib>

using namespace std;

int DiasNoMes(int mes, int ano);

int main()
{
    int dia, mes, ano, dias;

    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    dias = DiasNoMes(mes, ano);

    cout << "Faltam " << dias - dia << " para o fim do mes." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

int DiasNoMes(int mes, int ano)
{
    int dias;

    if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    {
        if(mes == 1)
        {
            dias = 31;
        }
        else if(mes == 2)
        {
            dias = 29;
        }
        else if(mes == 3)
        {
            dias = 31;
        }
        else if(mes == 4)
        {
            dias = 30;
        }
        else if(mes == 5)
        {
            dias = 31;
        }
        else if(mes == 6)
        {
            dias = 30;
        }
        else if(mes == 7)
        {
            dias = 31;
        }
        else if(mes == 8)
        {
            dias = 31;
        }
        else if(mes == 9)
        {
            dias = 30;
        }
        else if(mes == 10)
        {
            dias = 31;
        }
        else if(mes == 11)
        {
            dias = 30;
        }
        else if(mes == 12)
        {
            dias = 31;
        }
    }
    else
    {
        if(mes == 1)
        {
            dias = 31;
        }
        else if(mes == 2)
        {
            dias = 28;
        }
        else if(mes == 3)
        {
            dias = 31;
        }
        else if(mes == 4)
        {
            dias = 30;
        }
        else if(mes == 5)
        {
            dias = 31;
        }
        else if(mes == 6)
        {
            dias = 30;
        }
        else if(mes == 7)
        {
            dias = 31;
        }
        else if(mes == 8)
        {
            dias = 31;
        }
        else if(mes == 9)
        {
            dias = 30;
        }
        else if(mes == 10)
        {
            dias = 31;
        }
        else if(mes == 11)
        {
            dias = 30;
        }
        else if(mes == 12)
        {
            dias = 31;
        }
    }
    return(dias);
}
