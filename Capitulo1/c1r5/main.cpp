#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int C, V, Ts, R, Qh, Qm, Qs;
    cout<< "Entre a capacidade do reservatorio: ";
    cin>>C;
    cout<< "Entre a vazao da bomba: ";
    cin>> V;
    Ts = C/V;
    Qh = Ts/3600;
    R = Ts%3600;
    Qm = R/60;
    Qs = R%60;
    cout<< "horas= "<<Qh<<endl;
    cout<< "minutos= "<<Qm<<endl;
    cout<< "segundos= "<<Qs<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
