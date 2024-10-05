#include <iostream>
using namespace std;

float num;
int main()
{

    cout << "Ingresa el Numero \n";
    cin >> num;

    if (num == 0)
    {
        cout << "El numero es Igual a 0 \n";
    }
    else if (num < 0)
    {
        cout << "El numero es Negativo \n";
    }
    else
    {
        cout << "El numero es Positivo \n";
    }
}