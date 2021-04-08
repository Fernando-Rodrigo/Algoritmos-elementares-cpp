/**
 * Como resolver o Propblema proposto 6 do Capítulo 3 utilizando uma função para devolver as três maiores velocidades registradas.
 */


#include <iostream>
#include <cstdlib>

using namespace std;

void maioresvelocidades();

int main()
{
    maioresvelocidades();

    system("PAUSE");
    return EXIT_SUCCESS;
}

void maioresvelocidades()
{
    int velocidade, velocidademaior, velocidademaior1, velocidademaior2;

    cout << "Entre o valor da velocidade: ";
    cin >> velocidade;

    velocidademaior = velocidade;
    velocidademaior1 = velocidademaior2 = 0;

       while (velocidade != 0){
        cout << "Entre o valor da velocidade: ";
        cin >> velocidade;

        if (velocidade > 120){
            if (velocidade > velocidademaior){
                velocidademaior2 = velocidademaior1;
                velocidademaior1 = velocidademaior;
                velocidademaior = velocidade;
            }
            if ((velocidade > velocidademaior1)&&(velocidade < velocidademaior)){
                velocidademaior2 = velocidademaior1;
                velocidademaior1 = velocidade;
            }
            if((velocidade > velocidademaior2)&&(velocidade < velocidademaior1)&&(velocidade < velocidademaior)){
                velocidademaior2 = velocidade;
            }
        }
    }

    cout << "A maior velocidade registrada por excesso de velocidade foi " << velocidademaior << endl;
    cout << "A segunda maior velocidade registrada foi " << velocidademaior1 << endl;
    cout << "A terceira maior velocidade registrada foi " << velocidademaior2 << endl;
}
