/**
 * Como produzir uma lista de todos os números inteiros perfeitos menores que 30000?
 *
 * Reutilize a função somadiv costruída no problema resolvido 2.
 */


#include <iostream>

using namespace std;

int somadiv(int a);

int main()
{
    int num = 0, soma;
    for(int i = 0; i < 30000; i++){
        num = i;
        soma = somadiv(num);
        if(soma == num) cout << num << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}

int somadiv(int a){
    int s = 0, d;

    for(d = 1; d <= a/2; d++){
        if((a%d) == 0)s = s + d;
    }
    return(s);
}
