#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int Converte(float r, int&g, int &m, int &s)
{
    float x, d, gr, mr;
    x = 180 * r / 3.1415926;
    d = modf(x, &gr);
    g = gr;
    x = d * 60;
    d = modf(x, &mr);
    m = mr;
    x = d * 60;
    s = x;
    return 0;
}

int main()
{
    float rad;
    int gg, mm, ss;

    cout << "Entre radianos: ";
    cin >> rad;

    Converte(rad, gg, mm, ss);

    cout << "Graus = " << gg << endl;
    cout << "Minutos = " << mm << endl;
    cout << "Segundos = " << ss << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
