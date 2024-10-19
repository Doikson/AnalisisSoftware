#include <iostream>
using namespace std;

int main()
{
    int contador = 0;

    while (contador < 100)
    {

        contador++;

        if (contador % 2 == 0)
        {
            cout << "El numero: '" << contador << "' es par \n";
        }
    }
}