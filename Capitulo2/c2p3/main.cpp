#include <iostream>

/**
 * Para obter uma determinada ração animal deve-se juntar farinha de milho, farinha de soja e farinha de ossos na seguinte
 * proporção em massa:
 *  1 parte de farinha de milho,
 *  2 partes de farinha de soja,
 *  3 partes de farinha de ossos.
 * Conhecendo-se as massas de cada tipo de farinha, disponiveis em estoque, como determinar a maior quantidade de ração possível
 * de se obter a partir daquele estoque?
 */


using namespace std;

int main()
{
    float milho, soja, ossos, Qsoja, Qossos, Qracao;
    cout << "Entre a quantidade de farinha de milho: ";
    cin >> milho;
    cout << "Entre a quantidade de farinha de soja: ";
    cin >> soja;
    cout << "Entre o quantidade de farinha de ossos: ";
    cin >> ossos;

    Qracao = milho;

    Qsoja = soja/2;
    Qossos = ossos/3;

    if (Qsoja < milho) Qracao = Qsoja;
    if (Qossos < milho) Qracao = Qossos;

    cout << "A quantide de racao a ser prodizida e " << Qracao << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
