#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

float ordcres(float &a, float &b, float &c);

int main()
{
    float n1, n2, n3, mf;

    cout << "Entre nota 1: ";
    cin >> n1;
    cout << "Entre nota 2: ";
    cin >> n2;
    cout << "Entre nota 3: ";
    cin >> n3;

    ordcres(n1, n2, n3);

    mf = (2 * n1 + 5 * n3) / 7;

    cout << "Media final = " << fixed << setprecision(2) << mf;
    if (mf >= 7) cout << "\nAprovado" << endl;
    else cout << "\nReprovado" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

float ordcres(float &a, float &b, float &c)
{
    float temp;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}
