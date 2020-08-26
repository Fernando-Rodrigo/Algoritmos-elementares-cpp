#include <iostream>
#include <cstdlib>

/**
 * Em 1920, Jan Lukasiewicz desenvolveu um sistema de lógica formal o qual permite que expressões matemáticas sejam especificadas
 * sem parêntesis, colocando o operador antes (notação pré-fixada) dos operandos. Por exemplo, a expressão (em notação infixa)
 * "(4 + 5) *6" pode ser expressa em notação pré-fixa como "x 6 +4 5" ou "x + 4 5 6" e pode ser expressa em notação pós-fixa como
 * "4 5 + 6 x" ou "6 4 5 + x".
 * A notação pré-fixa também  é conhecida como Polish Notation (Notação Polonesa) em homenagem a Lukasiewicz. A HP (Hewlett-Packard)
 * adotou a notação pós-fixa ou Reverse Polish Notation (RPN) para suas calculadoras também em homenagem a Lukasiewicz.
 * Como elaborar uma calculadora de tipo RPN simples com quatro operações (adição, subtração, multiplicação e divisão) utilizando
 * dois operandos e um operador?
 */


using namespace std;

int main()
{
    float x, y;
    char m;

    cout << "Entre x: ";
    cin >> x;
    cout << "Entre y: ";
    cin >> y;
    cout << "Entre um dos operadores (+, -, * ou /): ";
    cin >> m;

    switch(m){
    case '+': cout << x << m << y << "=" << x + y << endl;
    break;
    case '-': cout << x << m << y << "=" << x - y << endl;
    break;
    case '*': cout << x << m << y << "=" << x * y << endl;
    break;
    case '/': cout << x << m << y << "=" << x / y << endl;
    break;
    default: cout << "OPERADOR INDEFINIDO" << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
