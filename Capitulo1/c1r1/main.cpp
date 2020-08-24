#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    float L, N;

    cout<< "Entre o valor do lucro: ";
    cin>>L;
    N = (L+80000)/4;
    cout<< "Quantidade a ser produzida: "<< N << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
