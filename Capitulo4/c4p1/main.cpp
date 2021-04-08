#include <iostream>

/**
 * O número 3025 tem a seguinte característica: 30 + 25 = 55 e 55^2 = 3025. Como verificar se um número qualquer de quatro
 * algarismos apresenta essa caracteristica?
 * Fazer uma verificação na entrada de dados para assegurar que o número tem qutro algarismos e apresentar na saída o valor de
 * entrada, o quadrado da soma e uma das mensagens: característica OK ou característica NOK.
 * Construir e utilizar uma função que tenha como parâmetro de entrada um número de quatro algarismos e como retorno a soma
 * descrita acima, ou seja, se a entrada for 3025 a saída será 55.
 */


using namespace std;

int verifica (int &num)
{
   int num1, num2, soma, quadrado;

   num1 = num / 100;
   num2 = num % 100;

   soma = num1 + num2;

   quadrado = soma * soma;

   cout << "A soma dos numeros separados e " << soma << " e o quadrado da soma e " << quadrado << endl;

   if (quadrado == num)
   {
       cout << "Caracteristica OK" << endl;
   }
   else
   {
       cout << "Caracteristica NOK" << endl;
   }

   return 0;
}

int main()
{
    int num;

    cout << "Entre um valor de 4 digitos: ";
    cin >> num;

    if (num < 1000 || num > 9999) cout << "Digite um numero de 4 digitos." << endl;
    else verifica(num);

    system("PAUSE");
    return EXIT_SUCCESS;
}
