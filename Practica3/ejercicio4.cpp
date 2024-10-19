#include <iostream>
using namespace std;

int main()
{
    int opcion;
    do
    {
        cout << "Ingresa la opción deseada:\n";
        cout << "1. Saludar al usuario\n";
        cout << "2. Salir\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Hola, bienvenido!\n";
            break;

        case 2:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Error: Opción inválida\n";
            break;
        }
    } while (opcion != 2);
}
