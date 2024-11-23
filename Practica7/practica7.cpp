#include <iostream>
#include <string>
using namespace std;

int opcion = 0, contadorProductos = 0;

struct Producto
{
    string clave, nombre;
    float precio;
};

Producto productos[100];
string carrito[100];
// Permite maximo 100 elementos por limites de los arreglos

void darDeAlta();
void buscarProducto();

int main()
{

    do
    {
        cout << "Menu:\n";
        cout << "1. Dar de alta producto\n";
        cout << "2. Buscar productos\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            darDeAlta();
            break;
        case 2:
            buscarProducto();
            break;
        case 3:
            cout << "Saliendo del programa.\n";
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 3);
}

    void darDeAlta()
    {
        if (contadorProductos < 100)
        {
            Producto nuevoProducto;
            cout << "Ingrese la clave del producto: \n";
            cin >> nuevoProducto.clave;
            cout << "Ingrese el nombre del producto: \n";
            cin >> nuevoProducto.nombre;
            cout << "Ingrese el precio del producto: \n";
            cin >> nuevoProducto.precio;
            productos[contadorProductos] = nuevoProducto;
            contadorProductos++;
            cout << "Producto agregado exitosamente.\n";
        }
        else
        {
            cout << "Error: No se pueden agregar más productos.\n";
        }
    }

    void buscarProducto()
    {
        string clave;
        cout << "Ingrese la clave del producto a buscar: ";
        cin >> clave;
        bool encontrado = false;
        for (int i = 0; i < contadorProductos; i++)
        {
            if (productos[i].clave == clave)
            {
                cout << "Producto encontrado:\n";
                cout << "Clave: " << productos[i].clave << "\n";
                cout << "Nombre: " << productos[i].nombre << "\n";
                cout << "Precio: " << productos[i].precio << "\n";
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            cout << "Error: Producto no encontrado.\n";
        }
    }