#include <iostream>
#include <cmath>

/**
 * Durante o semestre um aluno realiza quatro atividades de avaliação, cada uma com um valor de 3,5 pontos. A soma das três
 * melhores, limitada em dez, constitui a nota da P1. Conhecendo-se as notas obtidas nas atividades de avaliação, como
 * determinar a nota da P1?
 */


using namespace std;

int main()
{
    float n1, n2, n3, n4, p1, p;

    cout << "Entre a nota 1: ";
    cin >> n1;
    cout << "Entre a nota 2: ";
    cin >> n2;
    cout << "Entre a nota 3: ";
    cin >> n3;
    cout << "Entre a nota 4: ";
    cin >> n4;

    if (n1 < n2 && n1 < n3 && n1 < n4){
        p = n2 + n3 + n4;
        if (p > 10){
            p1 = floor(p);
        }
        else p1 = p;
    }
    if (n2 < n1 && n2 < n3 && n2 < n4){
        p = n1 + n3 + n4;
        if (p > 10){
            p1 = floor(p);
        }
        else p1 = p;
    }
    if (n3 < n2 && n1 > n3 && n3 < n4){
        p = n2 + n1 + n4;
        if (p > 10){
            p1 = floor(p);
        }
        else p1 = p;
    }
    if (n4 < n2 && n4 < n3 && n1 > n4){
        p = n2 + n3 + n1;
        if (p > 10){
            p1 = floor(p);
        }
        else p1 = p;
    }

    cout << "A nota da P1 e: " << p1 << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
