#include <iostream>

/**
 * Os funcionários contratados pela prefeitura de uma cidade são classificados em 3 níveis A, B, C, conforme a pontuação obtida
 * em 3 provas aplicadas, de acordo com o seguinde critério:
 *       Nível      Pontuação
 *         A        superior a 7 em pelo menos duas das três provas
 *         B        superior a 7 em exatamente uma das três provas
 *         C        nenhum dos casos acima
 * Conhecendo-se as pontuações obtidas por um funcionário nas 3 provas aplicadas, como determinar o seu nível de classificação?
 *
 * A pontuação em cada prova é um vlor real entre 0 e 10.
 */


using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Entre com o valor da nota 1: ";
    cin >> n1;
    cout << "Entre com o valor da nota 2: ";
    cin >> n2;
    cout << "Entre com o valor da nota 3: ";
    cin >> n3;

    if ((n1 >= 7 && n2 >= 7) || (n1 >= 7 && n3 >= 7) || (n2 >= 7 && n3 >=7)) cout << "O funcionario pertence ao nivel A." << endl;
    else if ((n1 >= 7) || (n2 >= 7) || (n3 >= 7)) cout << "O funcionario pertence ao nivel B." << endl;
    else cout << "O funcionario pertence ao nivel C." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
