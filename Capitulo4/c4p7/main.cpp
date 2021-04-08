/**
 * Conhecendo-se os valres correspondentes a dia, mês e ano de uma data, como determinar a quantidade de dias transcorridos, ou
 * a transcorrer, desde o início desse ano até essa data?
 *
 * Reutilizar a função DiasNoMes do Problema proposto 5.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int DiasNoMes(int mes, int ano);

int main()
{
    int dia, mes, ano, diastot = 0;

    cout << "Entre o dia: ";
    cin >> dia;
    cout << "Entre o mes: ";
    cin >> mes;
    cout << "Entre o ano: ";
    cin >> ano;

    if(mes > 1){
        while(mes <= 12){
            diastot = diastot + DiasNoMes(mes, ano);
            mes++;
        }
        if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
            cout << "Transcorreram " << (366 - diastot) + dia << " dias desde o inicio do ano." << endl;
        }
        else{
            cout << "Transcorreram " << (365 - diastot) + dia << " dias desde o inicio do ano." << endl;
        }

    }
    else{
        cout << "Transcorreram " << dia << " dias desde o inicio do ano." << endl;
    }


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
