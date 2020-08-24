#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float Qped, Qext;

    cout<<"Entre com a quantidade solicitada: ";
    cin>>Qped;
    Qext = Qped / (1 - 0.02 - 0.03 * 0.98);
    cout<<"Quantidade a ser extraida: "<<Qext<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
