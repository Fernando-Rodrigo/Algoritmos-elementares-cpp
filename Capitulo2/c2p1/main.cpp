#include <iostream>
#include <cmath>

/**
 *  A posição de um móvel eé discrita , em função do tempo t, pela expressão s(t)=at2+bt+c. Conhecendo-se os valores a,b e c,
 *  como determinar os instantes que s=0?
 */


using namespace std;

int main()
{
    float a, b, c, delta, delta1, s, s1, t1, t2;

    cout << "Qual o valor de a? ";
    cin >> a;
    cout << "Qual o valor de b? ";
    cin >> b;
    cout << "Qual o valor de c? ";
    cin >> c;

    delta1 = (b*b) - (4 * a * c);

    if (delta1 < 0){
        cout << "Nao ha raiz valida" << endl;
    }
    else {
        delta = sqrt(delta1);
        t1 = ((-b) + delta) / (2 * a);
    }

    cout << "Para o momento " << t1 << " o espaco e igual a 0." << endl;

    /*if ((s = 0) && (t1 >= 0)) cout << "Para o tempo " << t1 << " o s = 0." << endl;
    else if ((s1 = 0) && (t2 >= 0)) cout << "Para o tempo " << t2 << " o s = 0." << endl;
    else if ((s = 0) && (t1 >= 0) && (s1 = 0) && (t2 >= 0)) cout << "Para os tempos " << t1 << " e " << t2 << " o s = 0." << endl;
    else cout << "Nao ha s = 0" << endl;*/

    system("PAUSE");
    return EXIT_SUCCESS;
}
