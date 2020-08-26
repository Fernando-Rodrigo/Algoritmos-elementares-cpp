#include <iostream>
#include <cstdlib>

/**
 * Um veículo deve cumprir um trajeto de K quilômetros,partindo com o tanque cheio. Sabendo-se a capacidade de seu tanque de
 * combustível é de L litros e que o consumo médio é de C qilômetros por litro, como verificar se haverá ou não a necessidade de
 * rebastecer?
 */


using namespace std;

int main()
{
    float K, L, C, Autonomia;

    cout << "Entre a quilometragem: ";
    cin >> K;
    cout << "Entre a capacidade do tanque: ";
    cin >> L;
    cout << "Entre a consumo medio: ";
    cin >> C;

    Autonomia = L * C;

    if (Autonomia<K) cout << "Deve reabastecer \n";
    else cout << " Nao deve reabastecer \n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
