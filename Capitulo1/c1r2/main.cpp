#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float PC, PVF;

    cout<<"Entre o preco de custo: ";
    cin>>PC;
    PVF = PC*1.4375;
    cout<<"Preco de venda final =R$ "<<PVF<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
