#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    float VC, VF, VT;
    int VTc, QM100, QM50, QM10, QM1, R;

    cout<<"Entre com o valor fornecido: "; cin>>VF;
    cout<<"Entre com o valor cobrado: "; cin>>VC;

    VT = VF - VC;

    cout<<"Valor do troco: R$ "<<VT<<endl;

    VTc = round(VT * 100);
    QM100 = VTc/100;
    R = VTc%100;
    QM50 = R/50;
    R = R%50;
    QM10 = R/10;
    QM1 = R%10;

    cout<<"\nmoedas de 1 real:      "<<QM100<<endl;
    cout<<"moedas de 50 centavos: "<<QM50<<endl;
    cout<<"moedas de 10 centavos: "<<QM10<<endl;
    cout<<"moedas de 1 centavo:   "<<QM1<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
