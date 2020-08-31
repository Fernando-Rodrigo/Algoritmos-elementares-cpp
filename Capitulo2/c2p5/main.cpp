#include <iostream>

/**
 * Uma senha se acesso a um programa de computador deve ser defenida por 4 algarismos, todos diferentes de zero.
 * Como elaborar uma rotin que receba um valor inteiro e verifique se esse valor pode ser ou não uma senha?
 *  De acordo com a proposta, o valor deve ser um inteiro entre 1111 e 9999, e nenhum dos algarismos deve ser igual a zero.
 */


using namespace std;

int main()
{
    int s;
    cout << "Entre com uma senha de 4 digitos: ";
    cin >> s;

    if ((s >= 1111)&&(s <= 9999)) cout << "A senha pode ser definida." << endl;
    else cout << "A senha nao pode ser definida. Escolha uma entre 1111 e 9999." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
