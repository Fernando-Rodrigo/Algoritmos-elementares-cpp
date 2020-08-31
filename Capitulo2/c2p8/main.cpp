#include <iostream>

/**
 * A avaliação de mercado para um novo veículoé feita por uma revista, considerando-se três quesitos: preço final,  custo de
 * manutenção e aspectos de conforto. Para cada quesito é obtida uma pontuação, defenida pelas respectivas equipes de avaliação.
 * A avaliação final é definida como média ponderada dessas três pontuações, atribuindo-se peso 2 para a menos das pontuações e
 * peso 5 para cada uma das outras duas. Conhesendo-se as pontuações dos três quesitos como obter o valor da avaliação final?
 *
 */


using namespace std;

int main()
{
    float preco, manut, conforto, mediap, mediam, mediac, mediat;

    cout << "Entre o valor da nota do preco: ";
    cin >> preco;
    cout << "Entre o valor da nota da manutencao: ";
    cin >> manut;
    cout << "Entre o valor da nota do conforto: ";
    cin >> conforto;

    if ((preco < manut)&&(preco < conforto)){
        mediap = preco * 2;
        mediac = conforto * 5;
        mediam = manut * 5;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }
    else if((manut < preco)&& (manut < conforto)){
        mediap = preco * 5;
        mediac = conforto * 5;
        mediam = manut * 2;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }
    else{
        mediap = preco * 5;
        mediac = conforto * 2;
        mediam = manut * 5;

        mediat = (mediap + mediac + mediam) / 3;

        cout << "O valor da avliacao final e: " << mediat << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
