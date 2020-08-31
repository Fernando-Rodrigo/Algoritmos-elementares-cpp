#include <iostream>

/**
 * Conhecendo-se os coeficientes a, b, c e d das equações de duas retas no plano cartesiano:
 *          r1: y = ax + b      e       r2: y = cx + d.
 *  Como verificar se estas retas são coincidentes, paralelas ou concorrentes? E como determinar as coordenadas do ponto de
 *  intersecção se els forem concorrentes?
 */


using namespace std;

int main()
{
    int a, b, c, d;
    float x, y;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "Digite o valor de d: ";
    cin >> d;

    if (a==c) {
        if (b==d) cout << "As retas sao coincidentes." << endl;
        else cout << "As retas sao paralelas." << endl;
    }
    else {
        x = (d-b)/(a-c);
        y = a*x + b;
        cout << "As retas sao concorrentes e se cruzam nos pontos " << x << " e " << y << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
