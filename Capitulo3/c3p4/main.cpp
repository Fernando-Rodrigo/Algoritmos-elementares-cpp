#include <iostream>

/**
 * Todos os dias um sistema de controle de poluição de uma cidade coleta dados de dez estações de monitoração atmosférica e anota
 * em um sistema informatizado. Escolhendo-se aleatoriamente um dia de um mês qualquer, como determinar a estação que apresentou
 * o maior indice de poluição e qual esse indice? Idem para o menor índice. Supor não haver empates de índices.
 *
 *
 */


using namespace std;

int main()
{
    float iparticulas,ipmaior, ipmenor, tempp, iozonio, iomaior, iomenor, tempoz;
    int k, kozmaior, kozmenor, kpmaior, kpmenor;

    ipmaior = 0;
    kpmaior = 0;
    iomaior = 0;
    kozmaior = 0;
    ipmenor = 0;
    kpmenor = 0;
    iomenor = 0;
    kozmenor = 0;
    tempp = 250;
    tempoz = 250;

    for (k = 1; k <= 10; k++){
        cout << "Entre o valor de particulas da estacao " << k << ": ";
        cin >> iparticulas;
        cout << "Entre o valor da quantidade de ozonio da estacao " << k << ": ";
        cin >> iozonio;

        if (iparticulas > ipmaior){
            ipmaior = iparticulas;
            kpmaior = k;
        }
        if (iparticulas < tempp){
            tempp = iparticulas;
            ipmenor = tempp;
            kpmenor = k;
        }
        if(iozonio > iomaior){
            iomaior = iozonio;
            kozmaior = k;
        }
        if (iozonio < tempoz){
            tempoz = iozonio;
            iomenor = tempoz;
            kozmenor = k;
        }
    }

    if(ipmaior > iomaior){
        cout << "O indice de particulas e o maior na estacao " << kpmaior << endl;
    }
    else{
        cout << "O indice de ozonio e o maior na estacao " << kozmaior << endl;
    }

    if(ipmenor < iomenor){
        cout << "O menor indice e o de particulas da estacao " << kpmenor << endl;
    }
    else{
        cout << "o menor indice e o do ozonio da estacao " << kozmenor << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
