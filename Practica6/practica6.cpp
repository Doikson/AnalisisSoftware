#include <iostream>
using namespace std;

string clave[4] = {"A-101", "D-185", "J-552", "A-772"};
string nombreProducto[4] = {"Leche", "Tortillas de Harina", "Refresco", "Pan Bimbo"};
float precio[4] = {18.50, 22.00, 17.50, 20.00};
string userInput;
bool seguirComprando = true;
float totalCompra = 0.0;
string productosComprados[10];
float preciosComprados[10];
int contadorProductos = 0;
bool productoEncontrado = false;
char inputCompra;

void introducirClave();
void imprimirInventario();
void mostrarResumenCompra();

int main()
{
    do
    {
        imprimirInventario();
        introducirClave();

        for (int j = 0; j < 4; j++)
        {
            if (userInput == clave[j])
            {
                productoEncontrado = true;
                cout << "Producto agregado correctamente\n";
                cout << nombreProducto[j] << "\t\t$" << precio[j] << "\n";

                productosComprados[contadorProductos] = nombreProducto[j];
                preciosComprados[contadorProductos] = precio[j];
                totalCompra += precio[j];
                contadorProductos++;

                break;
            }
        }

        if (!productoEncontrado)
        {
            cout << "Clave no encontrada. Inténtalo de nuevo.\n";
        }

        cout << "¿Desea comprar otro producto? (s/n): ";
        cin >> inputCompra;
        seguirComprando = (inputCompra == 's' || inputCompra == 'S');

    } while (seguirComprando == true);

    mostrarResumenCompra();
}

void introducirClave()
{
    cout << "Introduce la clave del producto: \n";
    cin >> userInput;
}

void imprimirInventario()
{
    cout << "Clave\t\tProducto\t\tPrecio\n";
    cout << "-----------------------------------------\n";
    for (int i = 0; i < 4; i++)
    {
        cout << clave[i] << "\t" << nombreProducto[i] << "\t\t$" << precio[i] << "\n";
    }
}

void mostrarResumenCompra()
{
    cout << "\nResumen de compra:\n";
    cout << "Producto\t\tPrecio\n";
    cout << "-----------------------------------------\n";

    for (int i = 0; i < contadorProductos; i++)
    {
        cout << productosComprados[i] << "\t\t$" << preciosComprados[i] << "\n";
    }

    cout << "-----------------------------------------\n";
    cout << "Total a pagar: $" << totalCompra << "\n";
}
